#include "header.h"
#include <iostream>
using namespace std;
unsigned long num;
int a;
int b;


void welcome()
{
	cout <<"Програма, яка мiняє мiсцями сусiднi групи з 4-х бiтiв у заданому беззнаковому довгому цiлому числi.\n";
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
	cout << "Введіть ваше число:" << endl;
	error();
	cout << "---------------------" <<endl;
	cout << "Ваше число : " << _itoa(num, buf, 2) << endl;
	cout << "---------------" <<endl;
	swapsAdjacentGroupsOfFourBits(num);
	cout << "Результат : " << _itoa(num, buf, 2) << endl;
	cout << "---------------" <<endl;
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> b;
			switch(b)
			{
			case 1:
				enter();
				cout << "Введіть ваше число:" << endl;
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
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
        cout << ("\n\n\tПомилка !");
        cout << "\n\n\tНевiрно введено число!\n";
		cout << "\n\tЗапустити програму ще раз..?\n\n";
		cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		


        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		cin >> a;

			switch(a)
			{
			case 1:
				enter();
				cout << "Введіть ваше число:" << endl;
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
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