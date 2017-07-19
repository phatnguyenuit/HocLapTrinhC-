//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//struct hocsinh
//{
//	string hoten;
//	float toan, ly, hoa, diemTB;
//};
//void nhap(hocsinh &HS)
//{
//	cout<<("Nhap ten hs: ");
//	fflush( stdin );
//	if (cin.peek() == '\n' || cin.peek() == '\r') {
//		cin.get();
//	}
//	getline(cin,HS.hoten);
//
//	//xu ly diem
//	while (HS.toan > 10 || HS.toan < 0)
//	{
//		cout<<("Nhap diem toan : ");
//		scanf_s("%f", &HS.toan);
//	}
//	while (HS.ly > 10 || HS.ly < 0)
//	{
//		cout<<("Nhap diem ly : ");
//		scanf_s("%f", &HS.ly);
//	} 
//	while (HS.hoa > 10 || HS.hoa < 0)
//	{
//		cout<<("Nhap diem hoa : ");
//		scanf_s("%f", &HS.hoa);
//	} 
//}
//void xuat(hocsinh HS)
//{
//	cout<<"Ten HS la : " << HS.hoten << endl; 
//	cout<<"Diem toan la : " << HS.toan << endl;
//	cout<<"Diem ly la : " << HS.ly << endl;
//	cout<<"Diem hoa la : " << HS.hoa<< endl;
//	cout<<"Diem TB la : " << HS.diemTB << endl;
//}
//void xuli(hocsinh &HS)
//{
//	HS.diemTB = (HS.toan + HS.ly + HS.hoa) / 3;
//}
//void main()
//{
//	/*int i=0;
//	do
//	{
//		hocsinh HS;
//		nhap(HS);
//		xuli(HS);
//		xuat(HS);
//		printf("Ban co muon tieptuc ko?");
//		scanf_s("%f", &i);
//	} while (i != 0);	*/
//	hocsinh *mang;
//	int n;
//	cout << "Nhap vao so hoc sinh : ";
//	cin >> n;
//	fflush( stdin );
//	if (n > 0)
//	{
//		mang = new hocsinh[n];
//		for (int i = 0; i < n; i++) {
//			cout << "Nhap vao hoc sinh thu " << i << endl;
//			nhap( mang[i] );
//			xuli( mang[i] );
//		}
//		for (int i = 0; i < n; i++) {
//			cout << "Hoc sinh thu " << i << " la: " << endl;
//			xuat( mang[i] );
//		}
//	}
//}
