#include <iostream>
using namespace std;

struct Drob
{
	int chis;
	int znam;
	void output()
	{
		float c = 0;
		c = chis / znam;
		cout << c;
	}


};


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Drob a{2, 3};
	a.output();
}
