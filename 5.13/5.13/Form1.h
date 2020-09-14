#pragma once

#include <cstdlib>
#include "Entrant.h"
#include <vector>
//#include "windows.h"


namespace My513 {

	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;








	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(704, 103);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поле для добавление абитуриента";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(109, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить абитуриента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(581, 71);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(339, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Кол-во баллов за третий экзамен: ";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(581, 44);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(29, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(339, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Кол-во баллов за второй экзамен: ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(581, 19);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(339, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кол-во баллов за первый экзамен: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(109, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фамилия И.О.:";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->Location = System::Drawing::Point(13, 122);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(704, 281);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Фамилия И.О.";
			this->columnHeader1->Width = 187;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Баллы за первый экзамен";
			this->columnHeader2->Width = 167;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Баллы за второй экзамен";
			this->columnHeader3->Width = 170;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Баллы за третий экзамен";
			this->columnHeader4->Width = 175;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(39, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(294, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Записать в файл списки абитуриентов ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(373, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(311, 37);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Открыть файл со списками абитуриентов";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 475);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	static int i = 0;
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) || (textBox4->Text->Length == 0))
				 button1->Enabled = false;
			 else
				 button1->Enabled = true;
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 textBox2->Focus();
				 }
			 }
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '5'))
				 return;
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 textBox3->Focus();
				 }
				 return;
			 }
			 e->Handled = true;
		 }
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '5'))
				 return;
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 textBox4->Focus();
				 }
				 return;
			 }
			 e->Handled = true;
		 }
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '5'))
				 return;
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 button1->Focus();
				 }
				 return;
			 }
			 e->Handled = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 listView1->Items->Add(textBox1->Text);
			 listView1->Items[i]->SubItems->Add(textBox2->Text);
			 listView1->Items[i]->SubItems->Add(textBox3->Text);
			 listView1->Items[i]->SubItems->Add(textBox4->Text);
			 i++;
			  button2->Enabled = true;

			 //String^ Name = textBox1->Text;

			 //vector<Entrant^>^ arr;

			 //arr.resize(1);

			 //arr[0]->SetEntrant(Name,System::Convert::ToInt32(textBox2->Text),System::Convert::ToInt32(textBox3->Text),System::Convert::ToInt32(textBox4->Text));

			 //arr.insert(arr.end(),a.SetEntrant(Name,System::Convert::ToInt32(textBox2->Text),System::Convert::ToInt32(textBox3->Text),System::Convert::ToInt32(textBox4->Text)));
			 //arr.push_back(textBox1->Text,System::Convert::ToInt32(textBox2->Text),System::Convert::ToInt32(textBox3->Text),System::Convert::ToInt32(textBox4->Text));

			 /*Entrant a;
			 a.SetEntrant(textBox1->Text,System::Convert::ToInt32(textBox2->Text),System::Convert::ToInt32(textBox3->Text),System::Convert::ToInt32(textBox4->Text));
			 a.ID = textBox1->Text;
			 a.one = System::Convert::ToInt32(textBox2->Text);
			 a.two = System::Convert::ToInt32(textBox3->Text);
			 a.three = System::Convert::ToInt32(textBox4->Text);
			 //listView1->Items->Add(a.ID);
			 label5->Text = listView1->Items[0]->SubItems[1]->Text;
			 a.ID = listView1->Items[0]->SubItems[0]->Text;*/
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<int> zach;
			 vector<int> nezach;
			 vector<int> b15;
			 for (int ii=0; ii<i; ii++)
			 {
				 Entrant a;
				 //a.ID = listView1->Items[ii]->SubItems[0]->Text;
				 a.one = System::Convert::ToInt32(listView1->Items[ii]->SubItems[1]->Text);
				 a.two = System::Convert::ToInt32(listView1->Items[ii]->SubItems[2]->Text);
				 a.three = System::Convert::ToInt32(listView1->Items[ii]->SubItems[3]->Text);
				 int tmp = a.CheckEnt();
				 if (tmp == -1)
					 nezach.push_back(ii);
				 if (a.CheckEnt() == 1)
					 b15.push_back(ii);
				 if ((a.CheckEnt() == 0) || (a.CheckEnt() == 1))
					 zach.push_back(ii);
			 }
			 StreamWriter^ myfile = gcnew StreamWriter("program5.13.txt",false,System::Text::Encoding::GetEncoding(1251));
			 Entrant a;
			 myfile->WriteLine("Список абитуриентов зачисленных в институт:");
			 if (zach.size()>0)
			 {
				 for ( int j = 0; j<zach.size(); j++)
				 {
					 a.ID = listView1->Items[zach[j]]->SubItems[0]->Text;
					 a.one = System::Convert::ToInt32(listView1->Items[zach[j]]->SubItems[1]->Text);
					 a.two = System::Convert::ToInt32(listView1->Items[zach[j]]->SubItems[2]->Text);
					 a.three = System::Convert::ToInt32(listView1->Items[zach[j]]->SubItems[3]->Text);
					 myfile->WriteLine(a.ID +" "+ a.one +" "+ a.two +" "+ a.three);
				 }
			 }
			 else
			 {
				 myfile->WriteLine("- - - -");
			 }

			 myfile->Write("\n\nКоличество несдавших экзамены: ");
			 if (nezach.size()>0)
			 {
				 myfile->WriteLine(nezach.size());
			 }
			 else
			 {
				 myfile->WriteLine("0");
			 }

			 myfile->WriteLine("\n\nСписок абитуриентов сдавших три экзамена на 5:");
			 if (b15.size()>0)
			 {
				 for ( int j = 0; j<b15.size(); j++)
				 {
					 a.ID = listView1->Items[b15[j]]->SubItems[0]->Text;
					 a.one = System::Convert::ToInt32(listView1->Items[b15[j]]->SubItems[1]->Text);
					 a.two = System::Convert::ToInt32(listView1->Items[b15[j]]->SubItems[2]->Text);
					 a.three = System::Convert::ToInt32(listView1->Items[b15[j]]->SubItems[3]->Text);
					 myfile->WriteLine(a.ID +" "+ a.one +" "+ a.two +" "+ a.three);
				 }
			 }
			 else
			 {
				 myfile->WriteLine("- - - -");
			 }
			  
			 myfile->Write("\n\n\nСимвол \"-\" означает, что нет абитуриентов удовлетворяющих данному условию");
			 myfile->Close();
			 button3->Enabled = true;
			  
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*if( !("program5.13.txt"->Exists))
			 {
				 MessageBox::Show("Файл не найден",
					 "5.13",
					 MessageBoxButtons::OK,
					 MessageBoxIcon::Warning);
			 }*/
			 system("program5.13.txt");
		 }
};
}

