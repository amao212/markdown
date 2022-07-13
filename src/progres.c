#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	system("Color 0C");
	cout<< "\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\tLoading";
	char x = 219;
	for (int i = 0; i < 35; i++)
	{
		cout << x;
		if (i < 10)
			Sleep(300);
		if (i > 10 && i < 20)
			Sleep(150);
		if (i >= 10)
			Sleep(25);
	}
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t!LETS GOOOOO!";

	return 0;

}