#include <iostream>
using namespace std;
int main()
{
	double a, b, c, delta, tieptuc, x, x1, x2;
	do
	{
		cout << "Giai Pt bac 2 ax^2+bx+c=0" << endl;
		cout << "Nhap vao cac he so a, b, c: " << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;
		delta = b*b - 4 * a*c;
		if (delta > 0)
		{
			x1 = (-b + sqrt( delta )) / (2 * a);
			x2 = (-b - sqrt( delta )) / (2 * a);
			cout << "Pt co 2 nghiem phan biet la x1 = ";
			cout << x1;
			cout << " va x2 = ";
			cout << x2 << endl;
		}
		else if (delta == 0)
		{
			x = -b / (2 * a);
			cout << "Pt co nghiem kep x = ";
			cout << x << endl;
		}
		else
			cout << "Pt vo nghiem " << endl;
		cout << "Ban co muon tiep tuc ko?";
		cin >> tieptuc;
	} while (tieptuc != 0);


	/*
	OK BT đúng rồi !
	*/
}
