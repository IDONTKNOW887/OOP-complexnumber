#include <iostream>
using namespace std;

class Complex
{
	int mnim;
	float vesh;
public:
	Complex(float a, int b) 
	{
		vesh = a; 
		mnim = b; 
	}
	
	void sum(Complex a, Complex b)
	{
		cout << a.vesh + b.vesh << " + " << a.mnim + b.mnim <<" i";
	}

	void min(Complex a, Complex b)
	{
		cout << a.vesh - b.vesh << " + " <<  a.mnim - b.mnim << " i";
	}

	void umn(Complex a, Complex b)
	{
		cout << a.vesh * b.vesh - a.mnim * b.mnim << " + " << a.mnim * b.vesh - b.mnim * a.vesh << " i";
	}

	void del(Complex a, Complex b)
	{
		cout << (a.vesh * b.vesh + a.mnim * b.mnim) / (b.vesh * b.vesh + b.mnim * b.mnim) << (b.mnim * a.vesh - a.vesh * b.mnim) / (b.vesh * b.vesh + b.mnim * b.mnim);
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

}
