/* 1.11.Напишите программу, которая определяет, сколько можно купить быков, коров и телят, платя за быка 10 рублей, 
за корову - 5 рублей, а за теленка - 50 копеек, если на 100 рублей надо купить 100 голов скота?.*/

#include "stdafx.h"
#include "Form1.h"

using namespace My111;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}
