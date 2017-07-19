//#include <stdio.h>
//#include <iostream>
//#include <math.h>
//using namespace std;
//struct phanso
//{
//	int tuso = 0, mauso = 0;
//};
//void nhap( phanso &x ) {
//	printf( "Nhap vao tu so: " );
//	scanf_s( "%d", &x.tuso );
//	printf( "Nhap vao mau so: " );
//	scanf_s( "%d", &x.mauso );
//};
//void rutgon( phanso &x )
//{
//	int a, b;
//	a = abs( x.tuso );
//	b = abs( x.mauso );
//	if (a != 0 && b != 0)
//	{
//		for (int i = a;; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				x.tuso = x.tuso / i;
//				x.mauso = x.mauso / i;
//				break;
//			}
//		};
//	}
//}
//void xuat( phanso x )
//{
//	if (x.mauso > 0)
//	{
//		if (x.tuso != 0)
//		{
//			if (x.mauso != 1)
//				printf( "%d/%d", x.tuso, x.mauso );
//			else
//				printf( "%d", x.tuso );
//		}
//		else
//			printf( "0 " );
//	}
//	else if (x.mauso < 0)
//	{
//		if (x.tuso != 0)
//		{
//			if (x.mauso != -1)
//				printf( "%d/%d", -x.tuso, -x.mauso );
//			else
//				printf( "%d", -x.tuso );
//		}
//		else
//			printf( "0 " );
//	}
//	else
//		printf( "loi! phan so phai co mau so khac 0" );
//}
//int kiemtra( phanso x )
//{
//	if (x.tuso*x.mauso < 0)
//		return 1;//PS am
//	else if (x.tuso*x.mauso > 0)
//		return 2;//PS duong
//	else
//	{
//		if (x.mauso == 0)
//			return 3;//loi!
//		else
//			return 4;//PS bang 0
//	}
//}
//int sosanh( phanso PSthunhat, phanso PSthuhai )
//{
//	if (PSthunhat.mauso == 0 || PSthuhai.mauso == 0)
//		return 1;//loi ko so sanh dc
//	else
//	{
//		float a = (float)PSthunhat.tuso / PSthunhat.mauso;
//		float b = (float)PSthuhai.tuso / PSthuhai.mauso;
//		float c = a - b;
//		if (c > 0)
//			return 2;//Ps 1 lon hon Ps 2
//		else if (c < 0)
//			return 3;// Ps 2 lon hon Ps 1
//		else
//			return 4;
//	}
//}
//void quydong( phanso &x, phanso &y )
//{
//	int ts1, ts2, ms1, ms2;
//	ts1 = x.tuso;
//	ts2 = y.tuso;
//	ms1 = x.mauso;
//	ms2 = y.mauso;
//	//Tranh gia tri bi ghi de nen dat bien trung gian
//	if (ms1 * ms2 != 0)
//	{
//		x.tuso = ts1 * ms2;
//		x.mauso = ms1 * ms2;
//		y.tuso = ts2 * ms1;
//		y.mauso = x.mauso;
//	}
//}
//phanso congPS( phanso ps1, phanso ps2 ) {
//	phanso p1 = ps1, p2 = ps2, pstong;
//	if (p1.mauso * p2.mauso != 0)
//	{
//		quydong( p1, p2 );
//		pstong.tuso = p1.tuso + p2.tuso;
//		pstong.mauso = p1.mauso;
//		rutgon( pstong );
//	}
//	return pstong;
//}
//phanso truPS( phanso ps1, phanso ps2 ) {
//	phanso p1 = ps1, p2 = ps2, pshieu;
//	if (p1.mauso * p2.mauso != 0)
//	{
//		quydong( p1, p2 );
//		pshieu.tuso = p1.tuso - p2.tuso;
//		pshieu.mauso = p1.mauso;
//		rutgon( pshieu );
//	}
//	return pshieu;
//}
//phanso nhanPS( phanso ps1, phanso ps2 ) {
//	phanso  pstich;
//	pstich.tuso = ps1.tuso * ps2.tuso;
//	pstich.mauso = ps1.mauso * ps2.mauso;
//	rutgon( pstich );
//	return pstich;
//}
//phanso chiaPS( phanso ps1, phanso ps2 ) {
//	phanso  psthuong, p2;
//	if (ps1.mauso * ps2.mauso != 0) {
//		p2.tuso = ps2.mauso;
//		p2.mauso = ps2.tuso;
//		psthuong = nhanPS( ps1, p2 );
//	}
//	return psthuong;
//}
//void main() {
//	//phanso PS1, PS2, pstong, pshieu, pstich, psthuong;
//	//int option = 1, kqtrave;
//	//bool danhap = false;//k? thu?t ??t c? hi?u ( flag) ?? nh?n bi?t giá tr? ps1 va ps2 ?ã nh?p ch?a
//	//do
//	//{
//	//	printf( "\n------------------------------------------\n" );
//	//	printf( "|--1.Nhap 2 PS-----------------------------|\n" );
//	//	printf( "|--2.Xuat 2 PS-----------------------------|\n" );
//	//	printf( "|--3.Rut gon 2 PS--------------------------|\n" );
//	//	printf( "|--4.So sanh 2 PS--------------------------|\n" );
//	//	printf( "|--5.Cong 2 PS-----------------------------|\n" );
//	//	printf( "|--6.Tru 2 PS------------------------------|\n" );
//	//	printf( "|--7.Nhan 2 PS-----------------------------|\n" );
//	//	printf( "|--8.Chia 2 PS-----------------------------|\n" );
//	//	printf( "|--9.Thoat---------------------------------|\n" );
//	//	printf( "|------------------------------------------|\n" );
//	//	printf( "|-- Ban chon :---------------------------" );
//	//	scanf_s( "%d", &option );
//	//	switch (option)
//	//	{
//	//	case 1: {
//	//		printf( "Nhap 2 PS\n" );
//	//		nhap( PS1 );
//	//		nhap( PS2 );
//	//		danhap = true;
//	//		break;
//	//	}
//	//	case 2: {
//	//		printf( "Xuat 2 PS\n" );
//	//		if (danhap == true) {
//	//			printf( "Ps1 : " );
//	//			xuat( PS1 );
//	//			printf( "\n" );
//	//			printf( "Ps2 : " );
//	//			xuat( PS2 );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	case 3: {
//	//		printf( "Rut gon 2 PS\n" );
//	//		if (danhap == true) {
//	//			rutgon( PS1 );
//	//			rutgon( PS2 );
//	//			printf( "Ps1 : " );
//	//			xuat( PS1 );
//	//			printf( "\n" );
//	//			printf( "Ps2 : " );
//	//			xuat( PS2 );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	case 4: {
//	//		printf( "So sanh 2 PS\n" );
//	//		if (danhap == true) {
//	//			kqtrave = sosanh( PS1, PS2 );
//	//			switch (kqtrave)
//	//			{
//	//			case 1: {
//	//				printf( "Loi! Ko the so sanh\n" );
//	//				break;
//	//			}
//	//			case 2: {
//	//				xuat( PS1 );
//	//				printf( " lon hon " );
//	//				xuat( PS2 );
//	//				//printf("\n %d/%d lon hon %d/%d ", PS1.tuso, PS1.mauso, PS2.tuso, PS2.mauso);
//	//				break;
//	//			}
//	//			case 3: {
//	//				xuat( PS1 );
//	//				printf( " be hon " );
//	//				xuat( PS2 );
//	//				//printf("\n %d/%d lon hon %d/%d ", PS2.tuso, PS2.mauso, PS1.tuso, PS1.mauso);
//	//				break;
//	//			}
//	//			default: {
//	//				xuat( PS1 );
//	//				printf( " = " );
//	//				xuat( PS2 );
//	//				//printf("\nHai PS bang nhau");
//	//				break;
//	//			}
//	//			}
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//
//	//	}
//	//	case 5: {
//	//		printf( "Cong 2 PS\n" );
//	//		if (danhap == true) {
//	//			pstong = congPS( PS1, PS2 );
//	//			if (pstong.mauso != 0)
//	//			{
//	//				xuat( PS1 );
//	//				printf( " + " );
//	//				xuat( PS2 );
//	//				printf( " = " );
//	//				xuat( pstong );
//	//				printf( "\n" );
//	//			}
//	//			else
//	//				printf( "Loi! khong cong duoc\n" );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	case 6: {
//	//		printf( "Tru 2 PS\n" );
//	//		if (danhap == true) {
//	//			pshieu = truPS( PS1, PS2 );
//	//			if (pshieu.mauso != 0)
//	//			{
//	//				xuat( PS1 );
//	//				printf( " - " );
//	//				xuat( PS2 );
//	//				printf( " = " );
//	//				xuat( pshieu );
//	//				printf( "\n" );
//	//			}
//	//			else
//	//				printf( "Loi! khong tru duoc\n" );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	case 7: {
//	//		printf( "Nhan 2 PS\n" );
//	//		if (danhap == true) {
//	//			pstich = nhanPS( PS1, PS2 );
//	//			if (pstich.mauso != 0)
//	//			{
//	//				xuat( PS1 );
//	//				printf( " * " );
//	//				xuat( PS2 );
//	//				printf( " = " );
//	//				xuat( pstich );
//	//				printf( "\n" );
//	//			}
//	//			else
//	//				printf( "Loi! khong nhan duoc\n" );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	case 8: {
//	//		printf( "Chia 2 PS\n" );
//	//		if (danhap == true) {
//	//			psthuong = chiaPS( PS1, PS2 );
//	//			if (psthuong.mauso != 0)
//	//			{
//	//				xuat( PS1 );
//	//				printf( " / " );
//	//				xuat( PS2 );
//	//				printf( " = " );
//	//				xuat( psthuong );
//	//				printf( "\n" );
//	//			}
//	//			else
//	//				printf( "Loi! khong chia duoc\n" );
//	//		}
//	//		else
//	//			printf( "Loi! Ban chua nhap 2 PS" );
//	//		break;
//	//	}
//	//	default: {
//	//		printf( "Thoat\n" );
//	//		break;
//	//	}
//	//	}
//	//} while (option != 9);
//	int n;
//	phanso *mang;
//	cout << "Nhap vao so phan tu: ";
//	cin >> n;
//	if (n > 0)
//	{
//		mang = new phanso[n];
//		for (int i = 0; i < n; i++)
//		{
//			cout << "Nhap vao phan so thu " << i << endl;
//			nhap( mang[i] );
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << "Phan so thu " << i << " la: ";
//			xuat( mang[i] );
//			cout << endl;
//		}
//	}
//}