// 3.38 Дан набор строк. Упорядочить его по длине строк.

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int *arr,n;

void func1(){
	int numb,max=0,sc=0;
	string s1;

	for (int i=0;i<n;i++){
		if (*(arr+i)>max){
			max=*(arr+i);
			numb = i;
		}
	}

	*(arr+numb)=0;

	ifstream file;
	file.open("progr3.38.txt");

	while (!file.eof()){
		getline(file,s1);
		if (sc == numb){
			cout<<s1<<endl;
			break;
		}
		sc++;
	}
	file.close();
}

void main()
{
	system("chcp 1251>nul");
	string s;
	
	cout<<"Введите количество строк: ";
	cin>>n;
	cin.get(); //Извлекаем из потока "\n"
	
	ofstream file;
	file.open("progr3.38.txt");

	for (int i = 0; i<n; i++){
		cout<<"Введите "<<i+1<<" строку: ";
		getline(cin,s);
		file<<s<<endl;
	}
	file.close();
	
	arr=new int[n];
	int c,ls,cc=0;

	ifstream file1;
	file1.open("progr3.38.txt");

	while (!file1.eof()){
		getline(file1,s);
		if(!s.empty()){
			c = 0;
			for (int i=0;i<s.size();i++){
				if(s[i] == ' ')
					c++;
			}
			ls=s.size()-c;
			*(arr+cc)=ls;
			cc++;
		}
	}
	file1.close();

	for (int i=0;i<n;i++){
		func1();
	}

	delete [] arr;
	system("DEL progr3.38.txt");
}