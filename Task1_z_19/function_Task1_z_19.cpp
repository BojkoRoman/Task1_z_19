#include "header.h"
#include <iostream>
using namespace std;
unsigned long num;
int a;
int b;


void welcome()
{
	cout <<"��������, ��� �i��� �i����� ���i��i ����� � 4-� �i�i� � �������� ������������ ������� �i���� ����i.\n";
	cout <<"\t Copyright 2014 by Roman Bojko\n";
	for(int i = 0; i < 32; ++i)
	{
		cout << "*-";
	}
}
void enter()
{
	char buf[50];
	cout << "---------------" <<endl;
	cout << "������ ���� �����:" << endl;
	error();
	cout << "---------------------" <<endl;
	cout << "���� ����� : " << _itoa(num, buf, 2) << endl;
	cout << "---------------" <<endl;
	swapsAdjacentGroupsOfFourBits(num);
	cout << "��������� : " << _itoa(num, buf, 2) << endl;
	cout << "---------------" <<endl;
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> b;
			switch(b)
			{
			case 1:
				enter();
				cout << "������ ���� �����:" << endl;
				break;
			case 2:
				cout << "~��-��~"<<endl;
				cout << "---------------" <<endl;
				system("pause");
				exit(1);
				break;
			default:
				error();

			}

			
}

void error()
{
	while ((!(cin >> num)) || (num < 0 ) || (num > 214748364) || cin.peek() != '\n')
    {
        cout << ("\n\n\t������� !");
        cout << "\n\n\t���i��� ������� �����!\n";
		cout << "\n\t��������� �������� �� ���..?\n\n";
		cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		


        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		cin >> a;

			switch(a)
			{
			case 1:
				enter();
				cout << "������ ���� �����:" << endl;
				break;
			case 2:
				cout << "~��-��~"<<endl;
				cout << "---------------" <<endl;
				system("pause");
				exit(1);
				break;
			default:
				error();
			}
              
    }

}

void swapsAdjacentGroupsOfFourBits(unsigned long &number)
{
	unsigned long mask1 = 0x0F0F0F0F & number;
	unsigned long mask2 = 0xF0F0F0F0 & number;

	number = ( mask1 << 4 ) | ( mask2 >> 4 );
}