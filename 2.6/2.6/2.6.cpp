// 2.6.������ ��������� ������ �� ��������� (�������������� ����� ���������). ���������� ���������� ����� ����������� 
//���� ������.

#include <iostream>
#include <cstdlib>


using namespace std;

void main()
{
	system("chcp 1251>nul");

	int M=3,s=0,l=0,r=-1,Z=0,N;
	double *ip,*ip1,x=0,c=0,x1,y1,A1,B1,C1,A2,B2,C2;

	cout << "���������� ������ �� ���������: ";
	cin >> N;
	if (N <= 0) {
		cout << "���������� ������ ������ ���� ������ 0" << endl;
		exit(0);
	}
	cout << "������ ������ ���������� Ax+By+C=0" << endl;
	ip= new double [N*M];
	Z = (N*(N-1))/2;
	ip1= new double[Z*2];
	for (int i=0;i<N;i++) {
		cout << "������� ������������ \'A\', \'B\', \'C\', " << i+1 << " ������ (����� ������� ����� ������� \'Enter\'): " << endl;
		for (int j=0;j<M;j++) {
			cout << " ";
			cin >> x;
			*(ip+i*M+j)=x;
		}
	}
	for (int i=0;i<N;i++) {
		if (((*(ip+i*M+0))==0) && ((*(ip+i*M+1))==0)){
			cout << "������ � ������� ������" << endl;
			delete [] ip;
			delete [] ip1;
			exit(0);
		}
	}
	cout << "���������� ������:" << endl;
	for (int i=0;i<N;i++) {
		cout << '\t' << i << " �������: " << endl;
		cout << "\t\t����������� ��� ��������: " << endl;
		for (int j=0;j<M;j++) {
			cout << "\t\t\t\t\t " << *(ip+i*M+j) <<endl;
		}
	}
	if (N > 1){
		for (int i=0;i<N-1;i++) {
			for (int j=1;j<N-i;j++) {
				A1=*(ip+i*M+0);
				B1=*(ip+i*M+1);
				C1=*(ip+i*M+2);
				A2=*(ip+(i+j)*M+0);
				B2=*(ip+(i+j)*M+1);
				C2=*(ip+(i+j)*M+2);
				if ((A1*B2-A2*B1)==0){
					cout << "������ � �������������� A1: " << A1 << " B1: " << B1 << " C1: " << C1 << " � A2: " << A2 << " B2: " << B2 << " C2: " << C2 << " ������������" << endl;
					if (N == 2){
						break;
					}
				}
				else{
					x1=(B1*C2-B2*C1)/(A1*B2-A2*B1);
					if (x1 == (-c)){
						x1=0;
					}
					y1=(C1*A2-C2*A1)/(A1*B2-A2*B1);
					cout << "������ � �������������� A1: " << A1 << " B1: " << B1 << " C1: " << C1 << " � A2: " << A2 << " B2: " << B2 << " C2: " << C2 << " ������������ � ����������� x= " << x1 << " y= " << y1 << endl;
					if (N == 2){
						l++;
						break;
					}
					for (int y=0;y<l+1;y++){
						if ((*(ip1+y*2+0)==x1) && (*(ip1+y*2+1)==y1)){
							s++;
						}
					}
					if (s>0){
						s = 0;
					}
					else{
						l++;
						*(ip1+l*2+0)=x1;
						*(ip1+l*2+1)=y1;
						s = 0;
					}
				}
			}
		} 
	}
	cout << "���-�� ����� �����������: " << l << endl;
	delete [] ip;
	delete [] ip1;
}