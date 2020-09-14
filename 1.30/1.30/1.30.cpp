/*1.30	Найдите все натуральные числа, не превосходящие 10000, сумма цифр каждого из которых 
в некоторой степени равна самому числу. */

#include <iostream>
int main()
{ 
	for (int i=2, sum=2 ; i<=10000; i++,sum+=i) {
		for (int s=i; sum<=i; s*=i) {
			cout<<s<<endl;
			if (s==sum){
				cout<<"Число: "<<i<<". Сумма цифр: "<<sum<<". Степень: "<<endl;
			}
		}
	}
	cout<<"Нажмите Enter";
	system ("pause");
}