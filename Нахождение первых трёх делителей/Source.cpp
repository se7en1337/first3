#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int n;
	bool prime_num = false;
	cout << "Enter number which you wanna share : ";
	cin >> n;
	for (int i = 1, counter = -1;i < n;i++)
	{
		if (n%i == 0 && i!=1)
		{
			prime_num = true;
			for (int j = 1;j < i;j++)
			{
				if (i%j == 0)
				{
					counter++;
				}
			}
			if (counter == 0 || counter == -1)
			{
				system("Color A");
				cout << i << endl;
				counter = -1;
			}
			else
			{
				counter = -1;
			}
		}
	}
	if (prime_num == false)
	{
		system("Color C");
		system("CLS");
		cout << "You entered prime number !" << endl;
	}
	_getch();
}