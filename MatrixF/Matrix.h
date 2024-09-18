#pragma once

#include "Vector.h"

template <typename T>
class Matrix
{
private:

	Vector <Vector<T>> memory;
	int n;
	int m;

public:

	Matrix(int n = 0, int m = 0)
	{
		this->n = n;
		this->m = m;
		memory = Vector<Vector<T>>(n, 0);

		for (int i = 0; i < n; i++)
		{
			memory[i] = Vector<T>(m, i);
		}
	}

	Matrix(const Matrix& other)
	{
		n = other.n;
		m = other.m;
		memory = other.memory;
	}

	~Matrix() {};


	Matrix& operator =(const Matrix& other)
	{
		n = other.n;
		m = other.m;
		memory = other.memory;

		return *this;
	}

	Vector<T>& operator [](int k)
	{
		return memory[k];
	}

	Matrix operator +(Matrix& other)
	{
		Matrix<T> result = Matrix<T>();

		if (n != other.n || m != other.m) return result;

		result = Matrix<T>(n, m);

		for (int i = 0; i < n; i++)
		{
			result[i] = memory[i] + other.memory[i];
		}

		return result;
	}

	Matrix operator -(Matrix& other)
	{
		Matrix<T> result = Matrix<T>();

		if (n != other.n || m != other.m) return result;

		result = Matrix<T>(n, m);

		for (int i = 0; i < n; i++)
		{
			result[i] = memory[i] - other.memory[i];
		}

		return result;
	}

	Matrix operator*(Matrix& other)
	{
		Matrix<T> result = Matrix<T>();

		if (m != other.n) return result;

		result = Matrix<T>(n, other.m);

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < other.m; j++)
			{
				T tmp = 0;
				for (int k = 0; k < m; k++)
				{
					tmp += memory[i][k] * other.memory[k][j];
				}
				result[i][j] = tmp;
			}
		}

		return result;
	}

	Matrix operator*(int k)
	{
		Matrix<T> result = Matrix<T>(n, m);

		for (int i = 0; i < n; i++)
		{
			result[i] = memory[i] * k;
		}

		return result;
	}

	/*friend ostream& operator<<(ostream& out, Matrix tm)
	{
		for (int i = 0; i < tm.sizeM; i++)
		{
			for (int j = 0; j < tm.sizeM; j++)
			{
				out << tm[i][j] << " ";
			}
			out << endl;
		}
		return out;
	}*/
};