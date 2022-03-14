#include <iostream>
#include <fstream>
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
	
	float Vesh() { return vesh; }
	int Mnim() { return mnim; }

	void sum(Complex b)
	{
		cout << vesh + b.Vesh() << " + " << mnim + b.Mnim() <<"i" << endl;
		float s1 = vesh + b.Vesh();
		int s2 = mnim + b.Mnim();
	}

	void min(Complex b)
	{
		float m1;
		int m2;
		if (mnim - b.Mnim() > 0)
		{
			cout << vesh - b.Vesh() << " + " << mnim - b.Mnim() << "i" << endl;
			float m1 = vesh - b.Vesh();
			int m2 = mnim - b.Mnim();
		}
		else
		{
			cout << vesh - b.Vesh() << " " << mnim - b.Mnim() << "i" << endl;
			float m1 = vesh - b.Vesh();
			int m2 = mnim - b.Mnim();
		}
	}

	void umn(Complex b)
	{
		float u1;
		int u2;
		cout << vesh * b.Vesh() - mnim * b.Mnim() << " + " << mnim * b.Vesh() + b.mnim * vesh << "i" << endl;
		float u1 = vesh * b.Vesh();
		int u2 = mnim - b.Mnim();
	}

	void del(Complex b)
	{
		cout << (vesh * b.Vesh() + mnim * b.Mnim()) / (b.Vesh() * b.Vesh() + b.Mnim() * b.Mnim()) << (b.Mnim() * vesh - vesh * b.Mnim()) / (b.Vesh() * b.Vesh() + b.Mnim() * b.Mnim());
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	float a, c;
	int b, d;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите первое число: ";
	cin >> c;
	cout << "Введите второе число: ";
	cin >> d;
	Complex nume(a, b);
	Complex nume2(c, d);
	ofstream fout("data_types.txt", ios_base::out | ios_base::trunc);
	nume.sum(nume2);
	nume.min(nume2);
	nume.umn(nume2);
	nume.del(nume2);

}
