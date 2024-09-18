#pragma once

template <typename T>
class Vector
{
private:

	int first;
	T* mem;
	int size;

public:

	Vector(int size = 0, int first = 0)
	{
		this->size = size;
		this->first = first;

		mem = new T[size - first];

		for (int i = 0; i < size - first; i++)
		{
			mem[i] = T(0);
		}
	}

	~Vector()
	{
		delete[] mem;
	}

	Vector(const Vector& other)
	{
		first = other.first;
		size = other.size;
		mem = new T[size - first];

		for (int i = 0; i < size - first; i++)
		{
			mem[i] = other.mem[i];
		}
	}


	Vector& operator =(const Vector& other)
	{
		if (size != other.size)
		{
			if (size != 0) delete[] mem;

			size = other.size;
			mem = new T[size];
		}

		first = other.first;

		for (int i = 0; i < size - first; i++)
		{
			mem[i] = other.mem[i];
		}

		return *this;
	}

	Vector operator +(const Vector& other) const
	{
		Vector result(*this);
		T* newmem = new T[size];

		if (size == other.size && first == other.first)
		{
			for (int i = 0; i < size - first; i++) newmem[i] = mem[i] + other.mem[i];
			result.mem = newmem;
		}

		return result;
	}

	Vector operator -(const Vector& other) const
	{
		Vector result(*this);
		T* newmem = new T[size];

		if (size == other.size && first == other.first)
		{
			for (int i = 0; i < size - first; i++) newmem[i] = mem[i] - other.mem[i];
			result.mem = newmem;
		}

		return result;
	}

	T operator *(const Vector& other) const
	{
		T result(0);

		if (size == other.size && first == other.first)
		{
			for (int i = 0; i < size - first; i++) result += mem[i] * other.mem[i];
		}

		return result;
	}

	Vector operator *(int k) const
	{
		Vector result(*this);

		T* newmem = new T[size];

		for (int i = 0; i < size - first; i++) newmem[i] = mem[i] * k;

		result.mem = newmem;

		return result;
	}

	T& operator [](int k)
	{
		T res(0);

		if ((k >= first) && (k < size))
		{
			return mem[k - first];
		}

		return res;
	}

	/*friend istream& operator>>(istream& in, TVector& tmp)
	{
		for (int i = 0; i < tmp.size; i++)
		{
			in >> tmp.Mem[i];
		}
		return in;
	}
	friend ostream& operator<<(ostream& out, TVector& tmp)
	{
		for (int i = 0; i < tmp.size; i++)
		{
			out << tmp.Mem[i] << " ";
		}
		out << endl;
		return out;
	}*/
};