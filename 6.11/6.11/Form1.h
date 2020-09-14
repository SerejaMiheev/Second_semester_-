#include "MyUnion.h"

#include <vector>
#pragma once

namespace My611 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;


	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::ComponentModel::IContainer^  components;

	protected: 


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите историческое событие :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(232, 76);
			this->textBox1->MaxLength = 49;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите дату (дд.мм.гггг):";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 22);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->Location = System::Drawing::Point(185, 104);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->RejectInputOnFirstFailure = true;
			this->maskedTextBox1->ResetOnSpace = false;
			this->maskedTextBox1->Size = System::Drawing::Size(75, 22);
			this->maskedTextBox1->TabIndex = 6;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox1->TypeValidationCompleted += gcnew System::Windows::Forms::TypeValidationEventHandler(this, &Form1::maskedTextBox1_TypeValidationCompleted);
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->maskedTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::maskedTextBox1_KeyDown);
			this->maskedTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::maskedTextBox1_KeyPress);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->listView1->Location = System::Drawing::Point(16, 164);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(500, 106);
			this->listView1->TabIndex = 11;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Историческое событие/Фамилия и инициалы";
			this->columnHeader1->Width = 388;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Дата";
			this->columnHeader2->Width = 106;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(16, 283);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 33);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Список дат XVIII века";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(205, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(311, 33);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Список учеников, рожденных в мае месяце";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader3, this->columnHeader4});
			this->listView2->Location = System::Drawing::Point(15, 332);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(501, 135);
			this->listView2->TabIndex = 14;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Историческое событие";
			this->columnHeader3->Width = 394;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Дата";
			this->columnHeader4->Width = 103;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader5, this->columnHeader6});
			this->listView3->Location = System::Drawing::Point(16, 332);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(500, 135);
			this->listView3->TabIndex = 15;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->Visible = false;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Фамилия и инициалы";
			this->columnHeader5->Width = 373;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Дата рождения";
			this->columnHeader6->Width = 122;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Выберите формат: ";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(152, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(178, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Историческое событие";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::radioButton1_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(152, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 20);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ученик";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton2->Click += gcnew System::EventHandler(this, &Form1::radioButton2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введите фамилию и инициалы:";
			this->label4->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(230, 76);
			this->textBox2->MaxLength = 49;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox2->Location = System::Drawing::Point(185, 104);
			this->maskedTextBox2->Mask = L"00/00/0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->RejectInputOnFirstFailure = true;
			this->maskedTextBox2->ResetOnSpace = false;
			this->maskedTextBox2->Size = System::Drawing::Size(75, 22);
			this->maskedTextBox2->TabIndex = 9;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox2->Visible = false;
			this->maskedTextBox2->TypeValidationCompleted += gcnew System::Windows::Forms::TypeValidationEventHandler(this, &Form1::maskedTextBox2_TypeValidationCompleted);
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->maskedTextBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::maskedTextBox2_KeyDown);
			this->maskedTextBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::maskedTextBox2_KeyPress);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 481);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"6.11";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int i = 0;
		
private: System::Void maskedTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 toolTip1->Hide(maskedTextBox1);
		 }
private: System::Void maskedTextBox1_TypeValidationCompleted(System::Object^  sender, System::Windows::Forms::TypeValidationEventArgs^  e) {
			 if (!e->IsValidInput)
			 {
				 button1->Enabled = false;
				 toolTip1->ToolTipTitle = "Недопустимая дата";
				 toolTip1->Show("Указанная дата должна иметь формат дд/мм/гггг.", maskedTextBox1, 0, 20, 5000);
				 maskedTextBox1->Focus();
			 }
			 else
			 {
				 DateTime proverka = (DateTime::Today);
				 
				 DateTime userDate = (DateTime)e->ReturnValue;
				 
				 if (userDate > proverka)
				 {
					 button1->Enabled = false;
					 toolTip1->ToolTipTitle = "Недопустимая дата";
					 toolTip1->Show("Указанная дата должна быть меньше "+proverka.ToShortDateString(), maskedTextBox1, 0, 20, 5000);
					 e->Cancel = true;
					 maskedTextBox1->Focus();
				 }
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox1->Text->Length == 0) || (maskedTextBox1->MaskFull==false))
				 button1->Enabled = false;
			 else
				 button1->Enabled = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyUnion zapl;
			 if ((textBox1->Text->Length > 0) && (maskedTextBox1->MaskFull==true)){
				zapl.ch = (const char*)Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer();
				zapl.date1 = (const char*)Marshal::StringToHGlobalAnsi(maskedTextBox1->Text).ToPointer();
				zapl.Union.Year = System::Convert::ToInt32(System::Convert::ToDateTime(maskedTextBox1->Text).Year);
				
				listView1->Items->Add(textBox1->Text);
				listView1->Items[i]->SubItems->Add(maskedTextBox1->Text);
				i++;
			 }
			 if ((textBox2->Text->Length > 0) && (maskedTextBox2->MaskFull==true)){
				zapl.ch = (const char*)Marshal::StringToHGlobalAnsi(textBox2->Text).ToPointer();
				zapl.date1 = (const char*)Marshal::StringToHGlobalAnsi(maskedTextBox2->Text).ToPointer();
				zapl.Union.Month = System::Convert::ToInt32(System::Convert::ToDateTime(maskedTextBox2->Text).Month);

				listView1->Items->Add(textBox2->Text);
				listView1->Items[i]->SubItems->Add(maskedTextBox2->Text);
				i++;
			 }
			 if (radioButton1->Checked)
				zapl.type = 1;
			 if (radioButton2->Checked)
				 zapl.type = 0;

			 arr.push_back(zapl);

			 textBox1->Clear();
			 maskedTextBox1->Clear();
			 textBox2->Clear();
			 maskedTextBox2->Clear();
			 button2->Enabled = true;
			 button3->Enabled = true;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 button2->Enabled = false;
			 button3->Enabled = true;
			 listView3->Visible = false;
			 listView2->Items->Clear();
			 listView2->Visible = true;

			 int f = 0;
			 MyUnion first;

			 for (int j = 0; j < i; j++){
				 if (arr[j].type == 1){
					first.type = 1;
					first.ch = arr[j].ch; /*(const char*)Marshal::StringToHGlobalAnsi(listView1->Items[j]->SubItems[0]->Text).ToPointer();*/
					first.date1 = arr[j].date1; /*(const char*)Marshal::StringToHGlobalAnsi(listView1->Items[j]->SubItems[1]->Text).ToPointer();*/

					first.Union.Year = arr[j].Union.Year;/*System::Convert::ToInt32(System::Convert::ToDateTime(listView1->Items[j]->SubItems[1]->Text).Year);*/
				 
					 if (first.PYear()){
						 String^ dd1 = gcnew String(first.ch);
						 int p1 = dd1->Length;
						 dd1 = dd1->Substring(0,p1);
						 listView2->Items->Add(dd1);

						 String^ dd2 = gcnew String(first.date1);
						 int p2 = dd2->Length;
						 dd2 = dd2->Substring(0,p2);
						 listView2->Items[f]->SubItems->Add(dd2);
						 f++;
					 }
				}
			 }
			 if (f == 0){
				 listView2->Items->Add("Исторические события XVIII века не найдены");
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 button3->Enabled = false;
			 button2->Enabled = true;
			 listView2->Visible = false;
			 listView3->Items->Clear();
			 listView3->Visible = true;

			 int p = 0;
			 MyUnion second;

			 for (int j = 0; j < i; j++){
				 if (arr[j].type == 0){
						 second.type = 0;
						 second.ch = arr[j].ch;/*(const char*)Marshal::StringToHGlobalAnsi(listView1->Items[j]->SubItems[0]->Text).ToPointer();*/
						 second.date1 = arr[j].date1;/*(const char*)Marshal::StringToHGlobalAnsi(listView1->Items[j]->SubItems[1]->Text).ToPointer();*/
						 second.Union.Month = arr[j].Union.Month;/*System::Convert::ToInt32(System::Convert::ToDateTime(listView1->Items[j]->SubItems[1]->Text).Month);*/

						 if (second.PMonth()){
							 /*String^ s = (listView1->Items[j]->SubItems[0]->Text)->Trim();
							 String^ zn = " .";
							 int len = s->Length;
							 if ((((zn->IndexOf(s[len-1])) != -1) && ((zn->IndexOf(s[len-3])) != -1)) || ((zn->IndexOf(s[len-2])) != -1)){*/

							String^ dd1 = gcnew String(second.ch);
						    int p1 = dd1->Length;
						    dd1 = dd1->Substring(0,p1);
							listView3->Items->Add(dd1);

							String^ dd2 = gcnew String(second.date1);
							int p2 = dd2->Length;
							dd2 = dd2->Substring(0,p2);
							listView3->Items[p]->SubItems->Add(dd2);
							p++;
							 //}
						}
				 }
			 }
			 if (p == 0){
				 listView3->Items->Add("Ученики рождённые в мае не найдены");
			 }
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 maskedTextBox1->Focus();
				 }
			 }
		 }
private: System::Void maskedTextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 button1->Focus();
				 }
			 }
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton1->Checked){
				 label4->Visible = false;
				 textBox2->Visible = false;
				 maskedTextBox2->Visible = false;
				 label1->Visible = true;
				 textBox1->Visible = true;
				 maskedTextBox1->Visible = true;
				 textBox2->Clear();
				 maskedTextBox2->Clear();
			 }
			 if (radioButton2->Checked) {
				 label1->Visible = false;
				 textBox1->Visible = false;
				 maskedTextBox1->Visible = false;
				 label4->Visible = true;
				 textBox2->Visible = true;
				 maskedTextBox2->Visible = true;
				 textBox1->Clear();
				 maskedTextBox1->Clear();
			 }
		 }
private: System::Void radioButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Focus();
		 }
private: System::Void radioButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Focus();
		 }
private: System::Void maskedTextBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 toolTip1->Hide(maskedTextBox2);
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 maskedTextBox2->Focus();
				 }
			 }
		 }
private: System::Void maskedTextBox2_TypeValidationCompleted(System::Object^  sender, System::Windows::Forms::TypeValidationEventArgs^  e) {
			 if (!e->IsValidInput)
			 {
				 button1->Enabled = false;
				 toolTip1->ToolTipTitle = "Недопустимая дата";
				 toolTip1->Show("Указанная дата должна иметь формат дд/мм/гггг.", maskedTextBox2, 0, 20, 5000);
				 maskedTextBox2->Focus();
			 }
			 else
			 {
				 DateTime date1 = (DateTime::Today).AddYears(-5);
				 DateTime date2 = (DateTime::Today).AddYears(-20);

				 
				 if (date1.Day > 1)
					 date1 = date1.AddDays(((date1.Day)-1)*-1);
				 if (date1.Month > 1)
					 date1 = date1.AddMonths(((date1.Month)-1)*-1);

				 if (date2.Day > 1)
					 date2 = date2.AddDays(((date2.Day)-1)*-1);
				 if (date2.Month > 1)
					 date2 = date2.AddMonths(((date2.Month)-1)*-1);
				 
				 DateTime userDate = (DateTime)e->ReturnValue;
				 
				 if (userDate > date1)
				 {
					 button1->Enabled = false;
					 toolTip1->ToolTipTitle = "Недопустимая дата";
					 toolTip1->Show("Указанная дата должна быть меньше "+date1.ToShortDateString(), maskedTextBox2, 0, 20, 5000);
					 e->Cancel = true;
					 maskedTextBox2->Focus();
				 }
				 if (userDate < date2)
				 {
					 button1->Enabled = false;
					 toolTip1->ToolTipTitle = "Недопустимая дата";
					 toolTip1->Show("Указанная дата должна быть больше "+date2.ToShortDateString(), maskedTextBox2, 0, 20, 5000);
					 e->Cancel = true;
					 maskedTextBox2->Focus();
				}
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox2->Text->Length == 0) || (maskedTextBox2->MaskFull==false))
				 button1->Enabled = false;
			 else
				 button1->Enabled = true;
		 }
private: System::Void maskedTextBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Enter)
				 {
					 button1->Focus();
				 }
			 }
		 }
};
}

