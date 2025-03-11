#include <iostream>

using namespace std;

void z1a(unsigned int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i % 10;
	}
}

void z1b(unsigned int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i % 2;
	}
}

void z1d(unsigned int n) {
	for (int i = 0; i < n*3; i++)
	{
		cout << i % 4;
	}
}

void z1e(unsigned int n) {
	for (int i = 0; i < n*3+1; i++)
	{
		cout << i % 10;
	}
}

void z2d(unsigned int n) {
	while (n > 1) {
		for (unsigned int i = 0; i <10 ; i++)
		{
			cout << i;
		}
		n--;
	}
	cout << "0123";
	cout << endl;
}

void z4d(unsigned int n) {
	for (unsigned int i = 0; i < n; i++)
	{
		for (unsigned int h = n; h > i; h--)
		{
			cout << h;
		}
		cout << endl;
	}
}

int main()
{
	unsigned int n;
    cout <<"Podaj n do zadania";
    cin >> n;
	z4d(n);
}