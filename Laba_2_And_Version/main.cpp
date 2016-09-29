#include"Header.h"

void main()
{
	LinePrint();

	Stek *Stringns = NULL;
	// Print list of all files in directory
	ListofFiles();

	string road = "D:\\Visual Studio C++ Projects\\Laba_2_And_Version\\Laba_2_And_Version\\"; // Way to directory
	char choise; // For using Yes/No

	while (true)
	{
		cout << "Enter full name of your file: ";
		string name;
		cin >> name;
		cout << endl;
		LinePrint();
		cout << endl;
		int count = LoadFileToStek(Stringns, name, road);
		Renumber(Stringns, count);
		Purge(Stringns);
		LinePrint();
		cout << "\nDo u want to open another file from this directory? Y/N: ";
		cin >> choise;
		if (choise == 'Y' || choise == 'y')
		{
			system("cls");

			ListofFiles();
		}
		else
		{
			break;
		}
	}
	_getch();
}