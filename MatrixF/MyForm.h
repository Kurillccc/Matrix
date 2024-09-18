#pragma once

#include <msclr/marshal_cppstd.h>

#include "Matrix.h"

namespace MatrixF {

	int sizeMatrix = 3;
	Matrix<int> A;
	Matrix<int> B;
	Matrix<int> Result;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 23.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(99, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Матрица A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 23.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(576, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 44);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Матрица B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 23.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(983, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 44);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Результат";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 23.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 451);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 44);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Размер";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(388, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(388, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(388, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 42);
			this->button3->TabIndex = 6;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(388, 296);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 42);
			this->button4->TabIndex = 7;
			this->button4->Text = L"*K";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->textBox1->Location = System::Drawing::Point(143, 451);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 42);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->textBox2->Location = System::Drawing::Point(388, 344);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(61, 42);
			this->textBox2->TabIndex = 9;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(12, 87);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(350, 350);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(473, 87);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(350, 350);
			this->dataGridView2->TabIndex = 11;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellValueChanged);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->Location = System::Drawing::Point(879, 87);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 4;
			this->dataGridView3->Size = System::Drawing::Size(350, 350);
			this->dataGridView3->TabIndex = 2;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 23.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(838, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 44);
			this->label5->TabIndex = 13;
			this->label5->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1256, 516);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int IsInt(System::String^ inputString)
		{
			int result = INT_MAX;
			Int32::TryParse(inputString, result);
			return result;
		}
		const int sizeData = 350;
		private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			dataGridView3->Rows->Clear();


			String^ str1 = textBox1->Text;
			int size = IsInt(str1);
			if (size != INT_MAX)
			{
				sizeMatrix = size;
				A = Matrix<int>(size, size);
				B = Matrix<int>(size, size);
				Result = Matrix<int>(size, size);
			}

			dataGridView1->ColumnCount = sizeMatrix;
			dataGridView2->ColumnCount = sizeMatrix;
			dataGridView3->ColumnCount = sizeMatrix;
			dataGridView1->RowCount = sizeMatrix;
			dataGridView2->RowCount = sizeMatrix;
			dataGridView3->RowCount = sizeMatrix;

			int sizeOP = sizeData / sizeMatrix - 5;

			for (int i = 0; i < sizeMatrix; i++)
			{
				dataGridView1->Columns[i]->Width = sizeOP;
				dataGridView1->Rows[i]->Height = sizeOP;

				dataGridView2->Columns[i]->Width = sizeOP;
				dataGridView2->Rows[i]->Height = sizeOP;

				dataGridView3->Columns[i]->Width = sizeOP;
				dataGridView3->Rows[i]->Height = sizeOP;
			}

			for (int i = 1; i < sizeMatrix; i++)
			{
				for (int j = 0; j < i; j++)
				{
					dataGridView1[j, i]->Value = 0;
					dataGridView2[j, i]->Value = 0;
					dataGridView3[j, i]->Value = 0;
				}
			}
		}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int rowIndex = e->RowIndex;
	int columnIndex = e->ColumnIndex;
	int result = 0;
	Int32::TryParse(dataGridView1[columnIndex, rowIndex]->Value->ToString(), result);
	A[rowIndex][columnIndex] = result;

	dataGridView1[columnIndex, rowIndex]->Value = A[rowIndex][columnIndex];
}

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int rowIndex = e->RowIndex;
	int columnIndex = e->ColumnIndex;
	int result = 0;
	Int32::TryParse(dataGridView2[columnIndex, rowIndex]->Value->ToString(), result);
	B[rowIndex][columnIndex] = result;

	dataGridView2[columnIndex, rowIndex]->Value = B[rowIndex][columnIndex];
}

private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int rowIndex = e->RowIndex;
	int columnIndex = e->ColumnIndex;
	int result = 0;
	Int32::TryParse(dataGridView1[columnIndex, rowIndex]->Value->ToString(), result);
	A[rowIndex][columnIndex] = result;

	dataGridView1[columnIndex, rowIndex]->Value = A[rowIndex][columnIndex];
}
private: System::Void dataGridView2_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int rowIndex = e->RowIndex;
	int columnIndex = e->ColumnIndex;
	int result = 0;
	Int32::TryParse(dataGridView2[columnIndex, rowIndex]->Value->ToString(), result);
	B[rowIndex][columnIndex] = result;

	dataGridView2[columnIndex, rowIndex]->Value = B[rowIndex][columnIndex];
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Result = A + B;
	for (int i = 0; i < sizeMatrix; i++)
	{
		for (int j = 0; j < sizeMatrix; j++)
		{
			dataGridView3[j, i]->Value = Result[i][j];
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Result = A - B;
	for (int i = 0; i < sizeMatrix; i++)
	{
		for (int j = 0; j < sizeMatrix; j++)
		{
			dataGridView3[j, i]->Value = Result[i][j];
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Result = A * B;
	for (int i = 0; i < sizeMatrix; i++)
	{
		for (int j = 0; j < sizeMatrix; j++)
		{
			dataGridView3[j, i]->Value = Result[i][j];
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!textBox2->Visible)
	{
		textBox2->Visible = true;
		return;
	}

	int k = 0;
	Int32::TryParse(textBox2->Text, k);

	if (k != 0)
	{
		Result = A * k;
		for (int i = 0; i < sizeMatrix; i++)
		{
			for (int j = 0; j < sizeMatrix; j++)
			{
				dataGridView3[j, i]->Value = Result[i][j];
			}
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	dataGridView3->Rows->Clear();


	String^ str1 = textBox1->Text;
	int size = IsInt(str1);
	if (size == INT_MAX || size == 0) return;
	sizeMatrix = size;
	A = Matrix<int>(size, size);
	B = Matrix<int>(size, size);
	Result = Matrix<int>(size, size);

	dataGridView1->ColumnCount = sizeMatrix;
	dataGridView2->ColumnCount = sizeMatrix;
	dataGridView3->ColumnCount = sizeMatrix;
	dataGridView1->RowCount = sizeMatrix;
	dataGridView2->RowCount = sizeMatrix;
	dataGridView3->RowCount = sizeMatrix;

	int sizeOP = sizeData / sizeMatrix - 5;

	for (int i = 0; i < sizeMatrix; i++)
	{
		dataGridView1->Columns[i]->Width = sizeOP;
		dataGridView1->Rows[i]->Height = sizeOP;

		dataGridView2->Columns[i]->Width = sizeOP;
		dataGridView2->Rows[i]->Height = sizeOP;

		dataGridView3->Columns[i]->Width = sizeOP;
		dataGridView3->Rows[i]->Height = sizeOP;
	}

	for (int i = 1; i < sizeMatrix; i++)
	{
		for (int j = 0; j < i; j++)
		{
			dataGridView1[j, i]->Value = 0;
			dataGridView2[j, i]->Value = 0;
			dataGridView3[j, i]->Value = 0;
		}
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
