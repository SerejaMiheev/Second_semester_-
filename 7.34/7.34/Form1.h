
#pragma once

namespace My734 {

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
			listBox1->Items->Clear();
			StreamWriter^ myfile1 = gcnew StreamWriter("Progr7.34.txt",false,System::Text::Encoding::GetEncoding(1251));
			myfile1->Close();
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;

	protected: 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод строки в файл: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(152, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(418, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Записать в файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(418, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(13, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 35);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Вывести все слова палиндромы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 116);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox1->Size = System::Drawing::Size(546, 228);
			this->listBox1->TabIndex = 5;
			this->listBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 377);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"7.34";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int c = 0, vod = 0;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 button2->Enabled = true;
			 button3->Enabled = true;

			 if ((((textBox1->Text)->Trim())->Length) == 0)
				 vod++;

			 c++;
			 StreamWriter^ myfile = gcnew StreamWriter("Progr7.34.txt",true,System::Text::Encoding::GetEncoding(1251));
			 myfile->WriteLine(textBox1->Text);
			 myfile->Close();
			 textBox1->Clear();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 button2->Enabled = false;
			 button3->Enabled = false;
			 StreamWriter^ myfile1 = gcnew StreamWriter("Progr7.34.txt",false,System::Text::Encoding::GetEncoding(1251));
			 myfile1->Close();
			 listBox1->Items->Clear();
			 c = 0;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();

			 if (vod == c){
				 listBox1->Items->Add("Файл пуст");
				 return;
			 }

			 int cc = 0,f = 1,cv = 0;
			 String^ s;
			 String^ sp;
			 String^ zn = " !?.,-:;\"()`*";

			 StreamReader^ myfile2 = gcnew StreamReader("Progr7.34.txt",System::Text::Encoding::GetEncoding(1251));
			 while(cc != c){

				 s = myfile2->ReadLine();
				 s= s->Trim();
				 int len = s->Length;

				 if (len >= 2){
					for (int i = 0; i<len; i++){
						if ((zn->IndexOf(s[i])) != -1){
							int len1 = sp->Length;
							if (len1 > 1){
								for (int j = 0, k = (len1-1); j<(len1/2); j++, k--){
									if(sp[j] != sp[k])
										f = -1;
								}
								if (f == 1){
									listBox1->Items->Add(sp);
									cv++;
								}
							}
							sp = "";
							f = 1;
						}
						else{
							sp = sp + s[i];
						}
					}
					int len2 = sp->Length;
					if (len2 > 1){
						 for (int j = 0, k = (len2-1); j<(len2/2); j++, k--){
							 if(sp[j] != sp[k])
								 f = -1;
						 }
						 if (f == 1){
							 listBox1->Items->Add(sp);
							 cv++;
						 }
						 sp = "";
						 f = 1;
					 }
				 }

				 cc++;
			 }
			  myfile2->Close();

			  if (cv == 0)
				  listBox1->Items->Add("В файле нет палиндромов");
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar)){
				 if (e->KeyChar == (char)Keys::Enter){
					 button1->Focus();
				 }
			 }
		 }
};
}

