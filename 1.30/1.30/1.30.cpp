/*1.30	������� ��� ����������� �����, �� ������������� 10000, ����� ���� ������� �� ������� 
� ��������� ������� ����� ������ �����. */

#include <iostream>
int main()
{ 
	for (int i=2, sum=2 ; i<=10000; i++,sum+=i) {
		for (int s=i; sum<=i; s*=i) {
			cout<<s<<endl;
			if (s==sum){
				cout<<"�����: "<<i<<". ����� ����: "<<sum<<". �������: "<<endl;
			}
		}
	}
	cout<<"������� Enter";
	system ("pause");
}