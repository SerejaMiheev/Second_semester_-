#pragma once
#include <math.h>

namespace My410 {

	using namespace System;
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
			Кисть= gcnew SolidBrush(Color::Blue);
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 165);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(303, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите основание АВ:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(479, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(303, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите высоту h:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(441, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(303, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Введите угол С (в градусах):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(509, 102);
			this->textBox3->MaxLength = 3;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(509, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 35);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Построить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 226);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(591, 333);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 15);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(302, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Цвет:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(353, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 22);
			this->button3->TabIndex = 11;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(307, 166);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 28);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Задание цвета";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(479, 184);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Очистить всё";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 571);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"4.10";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int ugol;
		double x3,a,h;
		System::Drawing::SolidBrush^ Кисть;
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsControl (e->KeyChar))
			 {
				 if (e->KeyChar == (char)Keys::Escape)
				 {
					 Close();
				 }
			 }
			 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
				 return;
			 if (e->KeyChar == '.') e->KeyChar = ',';
			 if (e->KeyChar == ',')
			 {
				 if ((textBox1->Text->IndexOf(',') != -1) || (textBox1->Text->Length == 0))
				 {
					 e->Handled = true;
				 }
				 return;
			 }
			 if (Char::IsControl (e->KeyChar))
				 {
					 if (e->KeyChar == (char)Keys::Enter)
					 {
						 textBox2->Focus();
					 }
					 return;
				 }
			e->Handled = true;
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
				 return;
			 if (e->KeyChar == '.') e->KeyChar = ',';
			 if (e->KeyChar == ',')
			 {
				 if ((textBox2->Text->IndexOf(',') != -1) || (textBox2->Text->Length == 0))
				 {
					 e->Handled = true;
				 }
				 return;
			 }
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
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
				 return;
			 if (Char::IsControl (e->KeyChar))
				 {
					 if (e->KeyChar == (char)Keys::Enter)
					 {
						 button4->Focus();
					 }
					 return;
				 }
			 e->Handled = true;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0))
				 button2->Enabled = false;
			 else
				 button2->Enabled = true;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 const double pi = 3.141592;
			 double cosc,vcos,radian,b,c,a1,a2,chisl,pr0=0.000,pr1=0.001;

			 a= System::Convert::ToDouble(textBox1->Text);
			 h= System::Convert::ToDouble(textBox2->Text);
			 ugol = System::Convert::ToInt32(textBox3->Text);

			 if (a==0){
				 pictureBox1->Visible = false;
				 MessageBox::Show("Ошибка в исходных данных. \nОснование не может быть равным 0",
					 "4.10",
					 MessageBoxButtons::OK,
					 MessageBoxIcon::Warning);
				 textBox1->Focus();
				 return;
			 }

			if (h==0){
				pictureBox1->Visible = false;
				 MessageBox::Show("Ошибка в исходных данных. \nВысота не может быть равной 0",
					 "4.10",
					 MessageBoxButtons::OK,
					 MessageBoxIcon::Warning);
				 textBox2->Focus();
				 return;
			 }

			if (ugol>=180){
				pictureBox1->Visible = false;
			MessageBox::Show("Ошибка в исходных данных. \nУгол должен быть меньше 180°",
				 "4.10",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Warning);
			textBox3->Focus();
			return;
			} 
			if (ugol==0){
				pictureBox1->Visible = false;
			MessageBox::Show("Ошибка в исходных данных. \nУгол должен быть больше 0°",
				 "4.10",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Warning);
			textBox3->Focus();
			return;
			} 
			a1 = a/2;
			b = sqrt((a1)*(a1)+h*h);
			c = b;
			chisl=b*b+c*c-a*a;

			if (chisl>=pr0 && chisl<1){
				chisl = pr0;
			}

			radian = (ugol*pi)/180;
			cosc = cos(radian);
			vcos = chisl/(2*b*c);

			if (ugol==90){
 				if(chisl==0){
					x3=a1;
					pictureBox1->Invalidate();
					pictureBox1->Visible = true;
				}
				else{
					if((b*b+c*c-a*a)<0){
						while(((b*b+c*c-a*a)<0)){
							a1++;
							a2=a-a1;
							b=sqrt((a1)*(a1)+h*h);
							c=sqrt((a2)*(a2)+h*h);
							if((b*b+c*c-a*a)>=0){
								x3=a1;
								pictureBox1->Invalidate();
								pictureBox1->Visible = true;
							}
						}
					}
					else{
						pictureBox1->Visible = false;
						MessageBox::Show("Ошибка в исходных данных. \nПри данном основании и высоте нельзя построить треугольник с углом равным 90°",
							"4.10",
							MessageBoxButtons::OK,
							MessageBoxIcon::Warning);
						textBox3->Focus();
						return;
					}
				}
			}

			if (ugol<90){
				if (vcos<cosc){
					for(int i=0;vcos<cosc;i++){
						a1++;
						a2=a-a1;
						b=sqrt((a1)*(a1)+h*h);
						c=sqrt((a2)*(a2)+h*h);
						vcos=(b*b+c*c-a*a)/(2*b*c);
					}
					x3=a1;
					pictureBox1->Invalidate();
					pictureBox1->Visible = true;
				}
				else{
					pictureBox1->Visible = false;
					MessageBox::Show("Ошибка в исходных данных. \nПри данном основании и высоте нельзя построить треугольник с углом меньше 90° ",
						"4.10",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
					textBox1->Focus();
					return;
				}
			}

			if (ugol>90){
				if ( !((b*b+c*c-a*a)<0) ){
					pictureBox1->Visible = false;
					MessageBox::Show("Ошибка в исходных данных. \nПри данном основании и высоте нельзя построить треугольник с углом больше 90° ",
						"4.10",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
					textBox1->Focus();
					return;
				}
				else{
					if (vcos>cosc){
						pictureBox1->Visible = false;
						MessageBox::Show("Ошибка в исходных данных. \nПри данном основании и высоте нельзя построить треугольник с углом больше 90° ",
							"4.10",
							MessageBoxButtons::OK,
							MessageBoxIcon::Warning);
						textBox1->Focus();
						return;
					}

					else{
						if(vcos==cosc){
							pictureBox1->Invalidate();
							pictureBox1->Visible = true;
						}
						else{
							for (int i=0;vcos<cosc;i++){
								a1++;
								a2=a-a1;
								b=sqrt((a1)*(a1)+h*h);
								c=sqrt((a2)*(a2)+h*h);
								vcos=(b*b+c*c-a*a)/(2*b*c);
							}
							x3=a1;
							pictureBox1->Invalidate();
							pictureBox1->Visible = true;
						}
					}
				}
			}
			}
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 array<Point>^ p;
			 p = gcnew array<Point>(3);
			 p[0].X=1; p[0].Y=h+1;
			 p[1].X=a+1; p[1].Y=h+1;
			 p[2].X=1+x3; p[2].Y=1;
			 e->Graphics->FillPolygon(Кисть, p);
			 if (ugol<90){
				e->Graphics->DrawString("Треугольник с острым углом",Font,Кисть,2,h+5);
			 }
			 else{
				 if (ugol==90){
					 e->Graphics->DrawString("Треугольник с прямым углом",Font,Кисть,2,h+5);
				 }
				 else{
					 e->Graphics->DrawString("Треугольник с тупым углом",Font,Кисть,2,h+5);
				 }
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->Color = button3->BackColor;
			 if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 Кисть->Color = colorDialog1->Color;
				 button3->BackColor = colorDialog1->Color;
				 button2->Focus();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Visible = false;
			 textBox1 -> Clear();
			 textBox2 -> Clear();
			 textBox3 -> Clear();
			 button3->BackColor = System::Drawing::Color::Blue;
			 colorDialog1->Color = button3->BackColor;
			 Кисть->Color = button3->BackColor;
		 }
};
}

