#pragma once
#include <fstream>
namespace My311 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
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
			button1->Enabled = false;
			button2->Enabled = false;
			listBox1->Items->Clear();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;



	protected: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// listBox1
			// 
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double *arr;
		int *arr1,len;

		void pri(String^ str,String^ st,int cs){
			int numb,na,le=0,cc=-1,csc=0;
			double min = 1;

			for (int i=0;i<cs;i++){
				if (*(arr+i)<min){ 
					min=*(arr+i);
					numb = i;
				}
			}

			*(arr+numb)= 2;

			for (int ii=0;ii<len;ii++){
				if ((st->IndexOf(str[ii]))!=cc)
					csc++;
				if (csc==numb)
					le++;
			}
			listBox1->Items->Add((str->Substring(*(arr1+numb),le))->Trim());
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->Clear();

				 String^ str;
				 String^ st = " ";
				 String^ sogl = "bcdfghklmnpqrstvwxzBCDFGHKLMNPQRSTVWXZ";
				 String^ zn = " !?.,-:;\"()`\\"; 
				 int cc=-1,cs=0;

				 str = System::Convert::ToString(textBox1->Text);
				 str= str->Trim();
				 
				 ofstream file;
				 file.open("f1.txt");
				 file.put('F');
				 file.close();

				 len = str->Length;
				 
				 for (int i=0;i<len;i++){
					if ((st->IndexOf(str[i]))!=cc)
						cs++;
				 }
				 cs++;

				 arr=new double[cs];
				 arr1=new int[cs];

				 int ii=0,c=0;
				 double cl=0,csogl=0;

				 *(arr1)=0;

				 while(ii<len){
					 if ((sogl->IndexOf(str[ii]))!=cc)
						 csogl++;
					 if ((zn->IndexOf(str[ii]))==cc)
						 cl++;
					 if ((st->IndexOf(str[ii]))!=cc){
						 *(arr+c)=csogl/cl;
						 c++;
						 *(arr1+c)=ii;
						 cl= 0;
						 csogl= 0;
					 }
					 ii++;
				 }
				 *(arr+c)=csogl/cl;

				 for (int ij=0;ij<cs;ij++){
					 pri(str,st,cs);
				 }

				 delete [] arr;
				 delete [] arr1;
			 }
	
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsControl (e->KeyChar))
				 {
					 if (e->KeyChar == (char)Keys::Enter)
					 {
						 button1->Focus();
					 }
				 }
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text->Length == 0){
					 button1->Enabled = false;
					 button2->Enabled = false;
				 }
				 else{
					 button1->Enabled = true;
					 button2->Enabled = true;
				 }
			 }

private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Focus();
		 }

private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Escape)
				 {
					 Close();
				 }
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Clear();
		 }
};
}

