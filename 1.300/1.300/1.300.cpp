/*1.30	������� ��� ����������� �����, �� ������������� 10000, ����� ���� ������� �� ������� 
� ��������� ������� ����� ������ �����. */

#include <iostream>
#include <cstdlib>
using namespace std;
void main()
{
	system("chcp 1251>nul");
	cout<<"�����: 1. � ����� �������"<<endl;
	for (int i=2,n=2,sum=0; i<=10000; n=++i,sum=0) {
		for (int x=0; x<6;x++,sum=sum+n%10,n=n/10) {
		}
		if (sum!=1){
			for (int k=1,st=sum;st<=i;++k,st*=sum) {
				if (st==i) {
					cout<<"�����: "<<i<<". ����� ����: "<<sum<<". �������: "<<k<<endl;
				}
			}
		}
	}
}