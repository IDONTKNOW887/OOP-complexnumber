#include <iostream>
using namespace std;

struct Drob
{
	int chis;
	int znam;
	void output()
	{
		cout << chis * znam;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Drob a{2, 3};

}
