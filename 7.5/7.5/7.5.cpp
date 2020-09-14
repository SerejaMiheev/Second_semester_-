// 7.5.Даны символьные файлы f1 и f2. Переписать с сохранением порядка следования компоненты файла f1 в файл f2, а компоненты файла f2 - в файл f1. Использовать вспомогательный файл h.

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int n=1;

void crF(string fname){
	system("chcp 1251>nul");

	string s;
	int c;

	cout<<"Введите символы "<<n<<" файла: ";
	getline(cin,s);
	c=s.length();

	n++;

	ofstream file;
	file.open(fname);

	for (int i=0;i<c;i++)
		file.put(s[i]);

	file.close();
}

int proverka(string fname){
	char s;
	int cs=0;

	ifstream file;
	file.open(fname);

	s=file.get();
	while(!file.eof()){
		cs++;
		s=file.get();
		if (cs !=0){
			file.close();
			return cs;
		}
	}

	file.close();

	return cs;
}

void swapfile(string fname1,string fname2){
	char s;
	int f1,f2;

	f1=proverka(fname1);
	f2=proverka(fname2);

	if((f1 == 0) && (f2 == 0))
		return;

	ofstream file2;
	ifstream file1;

	file2.open(fname2);
	file1.open(fname1);

	s=file1.get();
	while(!file1.eof()){
		file2.put(s);
		s=file1.get();
	}
	

	file1.close();
	file2.close();

}


void rfile(string fname){
	char s;

	if(proverka(fname)== 0)
		cout<<"Файл "<<fname<<" пустой"<<endl;
	else{
		cout<<"Содержимое файла "<<fname<<": ";

		ifstream file;
		file.open(fname);

		s=file.get();
		while(!file.eof()){
			cout<<s;
			s=file.get();
		}

		file.close();

		cout<<"\n";
	}
}

void main()
{
	system("chcp 1251>nul");

	string f1name = "f1.txt";
	string f2name = "f2.txt";
	string hname = "h.txt";

	crF(f1name);
	crF(f2name);

	swapfile(f1name,hname);
	swapfile(f2name,f1name);
	swapfile(hname,f2name);

	rfile(f1name);
	rfile(f2name);

	system("pause");
}