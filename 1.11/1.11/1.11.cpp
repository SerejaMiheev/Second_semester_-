/* 1.11.�������� ���������, ������� ����������, ������� ����� ������ �����, ����� � �����, ����� �� ���� 10 ������, 
�� ������ - 5 ������, � �� ������� - 50 ������, ���� �� 100 ������ ���� ������ 100 ����� �����?.*/

#include "stdafx.h"
#include "Form1.h"

using namespace My111;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
