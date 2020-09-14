#include "windows.h"

class myclass
{
public:
	void creat(){
		STARTUPINFO cif;
		
		ZeroMemory(&cif,sizeof(STARTUPINFO));
		
		PROCESS_INFORMATION pi;
		CreateProcess(TEXT("c:\\windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&cif,&pi);
	}
};