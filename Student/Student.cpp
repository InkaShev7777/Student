#include <iostream>
#include"c_Student.h"
#include"Col_St.h"
using std::cout;
using std::cin;
int main()
{
	c_Student* st = new c_Student();
	Col_St col;
	int vibor;
	std::string name;
	int mark;
	int f = 0;
	do
	{
		cout << "\t\tMenu\n";
		cout << "1 - Add Student\n";
		cout << "2 - Add mark student\n";
		cout << "3 - Add Student in list\n";
		cout << "4 - Print Student\n";
		cout << "5 - Shoow All List Student\n";
		cout << "6 - Sava in file.txt\n";
		cout << "7 - Reading file\n";
		cout << "8 - Sred value\n";
		cout << "0 - Exit\n";
		cout << "Enter your vibor: ";
		cin >> vibor;
		switch (vibor)
		{
		case 1:
			system("cls");
			cout << "Enter name student: ";
			cin >> name;
			st = new c_Student(name);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout << "Enter mark: ";
				cin >> mark;
				st->Add_Mark(mark);
			}
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			col.Add_St(st);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			st->print();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			col.Show();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			col.Save();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			col.Reading();
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			col.Sred();
			system("pause");
			system("cls");
			break;
		}
	} while (vibor != 0);
}

