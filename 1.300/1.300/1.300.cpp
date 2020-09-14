/*1.30	Найдите все натуральные числа, не превосходящие 10000, сумма цифр каждого из которых 
в некоторой степени равна самому числу. */

#include <iostream>
#include <cstdlib>
using namespace std;
void main()
{
	system("chcp 1251>nul");
	cout<<"Число: 1. В любой степени"<<endl;
	for (int i=2,n=2,sum=0; i<=10000; n=++i,sum=0) {
		for (int x=0; x<6;x++,sum=sum+n%10,n=n/10) {
		}
		if (sum!=1){
			for (int k=1,st=sum;st<=i;++k,st*=sum) {
				if (st==i) {
					cout<<"Число: "<<i<<". Сумма цифр: "<<sum<<". Степень: "<<k<<endl;
				}
			}
		}
	}
}