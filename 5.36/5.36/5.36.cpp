// 5.36.Даны два рациональных числа, опишите их, используя структуру записи: числитель, знаменатель. Приведите их к несократимому виду, найдите их сумму.
//

#include <iostream>
#include <cstdlib>

using namespace std;

struct fraction
{
private:
	int m;
	int n;

public:
	void SetM(int vm)
	{
		m = vm;
	}

	void SetN(int vn)
	{
		n = vn;
		if (vn == 0)
		{
			cout<<"Знаменатель не может быть равным 0"<<endl;
			cout<<"Введите знаменатель дроби не равный 0: ";
			cin>>vn;
			SetN(vn);
			return;
		}
	}

	int GetM()
	{
		return m;
	}

	int GetN()
	{
		return n;
	}

	void NOD()
	{
		if ((m == n) || (m == 0))
		{
			m = m/n;
			n = n/n;
		}
		else
		{
			if ((m == 1) || (n == 1))
			{
				cout<<"Несократимый вид: "<<m<<"/"<<n<<"\n"<<endl;
				return;
			}
			else
			{
				int NOD1;
				if((m % 2 == 0) && (n % 2 == 0))
				{
					if (m > n )
					{
						for ( int i = 1; i<=n/2; i++){
							if ( (n % i == 0) && (m % i == 0))
								NOD1 = i*2;
						}
					}
					else 
					{
						for ( int i = 1; i<=m/2; i++){
							if ( (n % i == 0) && (m % i == 0))
								NOD1 = i*2;
						}
					}
				}
				else 
				{
					if(m % 2 == 0)
					{
						if(m > n)
						{
							for ( int i = 1; i<=n; i++){
								if ( (n % i == 0) && (m % i == 0))
									NOD1 = i;
							}
						}
						else
						{
							for ( int i = 1; i<=m/2; i++){
								if ( (n % i == 0) && (m % i == 0))
									NOD1 = i;
							}
						}
					}
					else
					{
						if(n % 2 == 0)
						{
							if(m > n)
							{
								for ( int i = 1; i<=n/2; i++){
									if ( (n % i == 0) && (m % i == 0))
										NOD1 = i;
								}
							}
							else
							{
								for ( int i = 1; i<=m; i++){
									if ( (n % i == 0) && (m % i == 0))
										NOD1 = i;
								}
							}
						}
						else
						{
							if(n > m)
							{
								for ( int i = 1; i<=(n-m)/2; i++){
									if ( (n % i == 0) && (m % i == 0))
										NOD1 = i;
								}
							}
							else
							{
								for ( int i = 1; i<=(m-n)/2; i++){
									if ( (n % i == 0) && (m % i == 0))
										NOD1 = i;
								}
							}
						}
					}
				}
				m = m / NOD1;
				n = n / NOD1;
			}
		}
		cout<<"Несократимый вид: "<<m<<"/"<<n<<"\n"<<endl;
	}

	void sum(int m1, int n1, int m2, int n2)
	{ 
		int m3, n3;
		if (n1 == 1)
		{
			m3 = m1 * n2 + m2;
			n3 = n1 + n2;
		}
		else 
		{
			if (n2 == 1)
			{
				m3 = m2 * n1 + m1;
				n3 = n2 + n1;
			}
			else
			{
				int nok,i = 2;
				if (n1 > n2)
				{
					nok = n1;
					while(true){
						if (nok % n2 == 0)
							break;
						else
						{
							nok=i*n1;
							i++;
						}
					}
					m3 = m1 * (nok/n1) + m2 * (nok/n2);
					n3 = nok;
				}
				else
				{
					if (n1 < n2)
					{
						nok = n2;
						while(true){
							if (nok % n1 == 0)
								break;
							else
							{
								nok=i*n2;
								i++;
							}
						}
						m3 = m1 * (nok/n1) + m2 * (nok/n2);
						n3 = nok;
					}
				}
			}
		}
		cout<<"Сумма двух дробей: "<<m3<<"/"<<n3<<endl;
	}
};


void main()
{
	system("chcp 1251>nul");

	int num1, num2;

	fraction first;

	cout<<"Введите числитель первой дроби: ";
	cin>>num1;
	first.SetM(num1);
	cout<<endl<<"Введите знаменатель первой дроби: ";
	cin>>num2;
	cout<<endl;
	first.SetN(num2);

	first.NOD();

	fraction second;

	cout<<"Введите числитель второй дроби: ";
	cin>>num1;
	second.SetM(num1);
	cout<<endl<<"Введите знаменатель второй дроби: ";
	cin>>num2;
	cout<<endl;
	second.SetN(num2);

	second.NOD();

	second.sum(first.GetM(),first.GetN(),second.GetM(),second.GetN());

	system("pause>nul");
}

