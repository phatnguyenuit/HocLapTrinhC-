#include <stdio.h>
struct hocsinh
{
	char hoten[100];
	float toan=-1.0, ly=-1.0, hoa=-1.0, diemTB;
};
void nhap(hocsinh &HS)
{
	//printf("Diem toan la %f",HS.toan);
	printf("Nhap ten hs: ");
	scanf_s("%s", HS.hoten, 100);

	//xu ly diem
	while (HS.toan > 10 || HS.toan < 0)
	{
		printf("Nhap diem toan : ");
		scanf_s("%f", &HS.toan);
		//printf("Diem toan la %f", HS.toan);
	}
	while (HS.ly > 10 || HS.ly < 0)
	{
		printf("Nhap diem ly");
		scanf_s("%f", &HS.ly);
	} 
	while (HS.hoa > 10 || HS.hoa < 0)
	{
		printf("Nhap diem hoa");
		scanf_s("%f", &HS.hoa);
	} 
}
void xuat(hocsinh HS)
{
	printf("Ten HS la %s\n", HS.hoten);
	printf("Diem toan la %2.2f\n", HS.toan);
	printf("Diem ly la %2.2f\n", HS.ly);
	printf("Diem hoa la %2.2f\n", HS.hoa);
	printf("Diem TB la %2.2f\n", HS.diemTB);
}
void xuli(hocsinh &HS)
{
	HS.diemTB = (HS.toan + HS.ly + HS.hoa) / 3;
}
void main()
{
	int i=0;
	do
	{
		hocsinh HS;
		nhap(HS);
		xuli(HS);
		xuat(HS);
		printf("Ban co muon tieptuc ko?");
		scanf_s("%f", &i);
	} while (i != 0);	
}


























