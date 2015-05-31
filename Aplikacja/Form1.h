#pragma once

#include "Form3.h"

#include <iostream>
#include <cstdio>
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  teksty;













	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->teksty = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Aleo", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(55, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Utwórz plik .txt z danymi wyjœciowymi.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 101);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(257, 409);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->Name = L"Column2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(177, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(445, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Szybki wykres w Gnuplocie!";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Aleo", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(311, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(498, 93);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Stwórz wykres!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(311, 138);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Aleo", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(448, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(9, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L" ";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Aleo", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(420, 338);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 38);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Za³aduj ustawienia!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(311, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(311, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Aleo", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(448, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(9, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Aleo", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(448, 239);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(9, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L" ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox1->Location = System::Drawing::Point(312, 116);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 19);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Tytu³ wykresu";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox2->Location = System::Drawing::Point(313, 168);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(93, 19);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"Tytu³ Osi OY\r\n";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox3->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox3->Location = System::Drawing::Point(314, 218);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(91, 19);
			this->checkBox3->TabIndex = 16;
			this->checkBox3->Text = L"Tytu³ osi OX";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(291, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 18);
			this->label5->TabIndex = 17;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox4->ForeColor = System::Drawing::Color::Yellow;
			this->checkBox4->Location = System::Drawing::Point(578, 113);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(150, 19);
			this->checkBox4->TabIndex = 18;
			this->checkBox4->Text = L"Aproksymacja funkcj¹\?";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(578, 135);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(201, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"funkcja postaci np. \"A*x+B\"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(575, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L" ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(578, 180);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(201, 20);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"parametry postaci \"A, B,...\"\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(575, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L" ";
			// 
			// teksty
			// 
			this->teksty->AutoSize = true;
			this->teksty->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teksty->ForeColor = System::Drawing::Color::Yellow;
			this->teksty->Location = System::Drawing::Point(290, 285);
			this->teksty->Name = L"teksty";
			this->teksty->Size = System::Drawing::Size(0, 20);
			this->teksty->TabIndex = 23;
			this->teksty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(835, 560);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->teksty);
			this->Name = L"Form1";
			this->Text = L"Eksport do Gnuplota";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{


			int col = 0, row = 0;


			String^ linia;

			col = Convert::ToInt32(dataGridView1->ColumnCount);
			row = Convert::ToInt32(dataGridView1->RowCount);

			StreamWriter^ plik = gcnew StreamWriter(saveFileDialog1->FileName, 0, System::Text::Encoding::Default);

			for (row = 0; row<dataGridView1->RowCount; row++){

				for (col = 0; col<dataGridView1->ColumnCount; col++) {
					linia += Convert::ToString(dataGridView1->Rows[row]->Cells[col]->Value);

					if (col<dataGridView1->ColumnCount) {
						linia += "  ";
					}
				}
				linia += System::Environment::NewLine;
			}

			plik->WriteLine(linia);
			plik->Close();



		}




	}





			 

public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	

	if (checkBox1->Checked){

		label2->Text = textBox1->Text;

	}

	if (checkBox2->Checked){

		label3->Text = textBox2->Text;

	}

	if (checkBox3->Checked){

		label4->Text = textBox3->Text;

	}

	if (checkBox4->Checked){

		label6->Text = textBox4->Text;
		label7->Text = textBox5->Text;
	}



}

	public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				String^ sciezka = System::IO::Path::GetDirectoryName(openFileDialog1->FileName);
				String^ nazwapliku = System::IO::Path::GetFileName(openFileDialog1->FileName);
				String^ regresja;
			
				if (checkBox4->Checked){



					regresja = "\, f(x) ls 2";
					
				}
				else{
					regresja = " ";
				}
				
			
				
		FILE* pipe = _popen("C:/gnuplot/bin/gnuplot.exe", "w");
		if (pipe != NULL)
		{
			fprintf(pipe, "reset\n");
			fprintf(pipe, "set term win\n");
			fprintf(pipe, "set title \"%s\n", label2->Text, "\" \n");
			fprintf(pipe, "set nokey\n");
			fprintf(pipe, "set xlabel \"%s\n", label4->Text, "\" \n");
			fprintf(pipe, "set ylabel \"%s\n", label3->Text, "\" \n");
			fprintf(pipe, "cd \'%s\n", sciezka, "\' \n");
			fprintf(pipe, "A=1\n");
			fprintf(pipe, "B=1\n");
			fprintf(pipe, "C=1\n");
			fprintf(pipe, "D=1\n");
			fprintf(pipe, "E=1\n");
			fprintf(pipe, "F=1\n");
			fprintf(pipe, "G=1\n");
			fprintf(pipe, "H=1\n");
			if (checkBox4->Checked){
				fprintf(pipe, "f(x)=%s\n", label6->Text, "\n");
				fprintf(pipe, "fit f(x) \"%s\" using 1:2 via %s\n", nazwapliku,  label7->Text, "\n");
			}
			fprintf(pipe, "set style line 1 dashtype 3 linecolor 3.0 pointsize 3.0\n");
			fprintf(pipe, "set style line 2 linecolor 4.0 pointsize 3.0\n");
			fprintf(pipe, "plot \"%s\" using 1:2 ls 1 %s\n", nazwapliku, regresja, "\n");
			fprintf(pipe, "set terminal postscript color enhanced \"Helvetica, 15\"\n");
			fprintf(pipe, "set output \"Wykres.eps\"\n");
			fprintf(pipe, "replot\n");
			fprintf(pipe, "set term win\n");
			fprintf(pipe, "set terminal png enhanced \"Helvetica, 15\"\n");
			fprintf(pipe, "set output \"Wykres.png\"\n");
			fprintf(pipe, "replot\n");
			fprintf(pipe, "set term win\n");
			fflush(pipe);
		}
		else puts("Could not open the file\n");
		_pclose(pipe);
		

	


				
				myStream->Close();


				
				Aplikacja::Form3^ noweOkno = gcnew Aplikacja::Form3;
				noweOkno->ShowDialog();

			}



		}
	}


		
			
			
			
		
	





};
}

