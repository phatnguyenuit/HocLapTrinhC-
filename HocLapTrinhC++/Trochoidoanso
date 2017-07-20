#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{
	unsigned int socantim, solan, sobandoan, demsolan = 0;
	srand( time( NULL ) );
	socantim = rand() % 101;
	cout << "Nhap vao so lan doan toi da : ";
	cin >> solan;
	do {
		cout << "===========================\n";
		cout << "Nhap vao so ban chon : ";
		cin >> sobandoan;
		cout << "==========================\n";
		if (sobandoan == socantim)
		{
			cout << "BAN DOAN DUNG ROI! \n";
			demsolan = solan;
		}
		else {
			if (socantim > sobandoan) {
				cout << "So can tim lon hon " << sobandoan << endl;
			}
			else {
				cout << "So can tim nho hon " << sobandoan << endl;
			}
			demsolan += 1;
			if (demsolan == solan) {
				cout << "CHUC BAN MAY MAN LAN SAU \n";
			}
		}
	} while (demsolan != solan);
}

