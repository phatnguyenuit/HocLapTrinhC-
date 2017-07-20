//#include <stdio.h>
//struct sophuc {
//	float phanthuc, phanao;
//};
//void nhap( sophuc &x ) {
//	printf( "Nhap vao phan thuc cua so phuc : " );
//	scanf_s( "%f", &x.phanthuc );
//	printf( "Nhap vao phan ao cua so phuc : " );
//	scanf_s( "%f", &x.phanao );
//}
//sophuc cong2sophuc( sophuc &x, sophuc &y ) {
//	sophuc tong;
//	tong.phanthuc = x.phanthuc + y.phanthuc;
//	tong.phanao = x.phanao + y.phanao;
//	return tong;
//}
//sophuc tru2sophuc( sophuc &x, sophuc &y ) {
//	sophuc hieu;
//	hieu.phanthuc = x.phanthuc - y.phanthuc;
//	hieu.phanao = x.phanao - y.phanao;
//	return hieu;
//}
//sophuc nhan2sophuc( sophuc &x, sophuc &y ) {
//	sophuc tich;
//	tich.phanthuc = x.phanthuc * y.phanthuc - x.phanao * y.phanao;
//	tich.phanao = x.phanthuc * y.phanao + x.phanao * y.phanthuc;
//	return tich;
//}
//sophuc chia2sophuc( sophuc &x, sophuc &y ) {
//	sophuc tich, thuong, ylienhop;
//	if (y.phanthuc*y.phanao != 0) {
//		ylienhop.phanthuc = y.phanthuc;
//		ylienhop.phanao = -y.phanao;
//		tich = nhan2sophuc( x, ylienhop );
//		float a = y.phanthuc * y.phanthuc + y.phanao * y.phanao;
//		thuong.phanthuc = tich.phanthuc / a;
//		thuong.phanao = tich.phanao / a;
//	}
//	else
//	{
//		thuong.phanthuc = 0;
//		thuong.phanao = 0;
//	}
//	return thuong;
//}
//void xuat( sophuc &x ) {
//	printf( "So phuc %f + %fi \n", x.phanthuc, x.phanao );
//}
//void main() {
//	sophuc so1, so2, tong, hieu, tich, thuong;
//	int luachon;
//	bool danhap = false;
//	do
//	{
//		printf( "|------------------------------------------|\n" );
//		printf( "|--1.Nhap 2 so phuc                        |\n" );
//		printf( "|--2.Cong 2 so phuc                        |\n" );
//		printf( "|--3.Tru 2 so phuc                         |\n" );
//		printf( "|--4.Nhan 2 so phuc                        |\n" );
//		printf( "|--5.Chia 2 so phuc                        |\n" );
//		printf( "|--6.Thoat                                 |\n" );
//		printf( "|------------------------------------------|\n" );
//		printf( "---->Nhap vao lua chon cua ban :  " );
//		scanf_s( "%d", &luachon );
//		printf( "\n" );
//		switch (luachon)
//		{
//		case 1: {
//			printf( "1.Nhap 2 so phuc \n" );
//			nhap( so1 );
//			xuat( so1 );
//			nhap( so2 );
//			xuat( so2 );
//			danhap = true;
//			break;
//		}
//		case 2: {
//			if (danhap == true)
//			{
//				printf( "2.Cong 2 so phuc " );
//				tong = cong2sophuc( so1, so2 );
//				printf( "\nTong cua 2 so phuc la : " );
//				xuat( tong );
//			}
//			else
//				printf( "\nBan chua nhap 2 so phuc \n" );
//			break;
//		}
//		case 3: {
//			if (danhap == true) {
//				printf( "3.Tru 2 so phuc \n" );
//				hieu = tru2sophuc( so1, so2 );
//				printf( "\nHieu cua 2 so phuc la : " );
//				xuat( hieu );
//			}
//			else
//				printf( "\nBan chua nhap 2 so phuc \n" );
//			break;
//		}
//		case 4: {
//			if (danhap == true) {
//				printf( "4.Nhan 2 so phuc \n" );
//				tich = nhan2sophuc( so1, so2 );
//				printf( "\nTich cua 2 so phuc la : " );
//				xuat( tich );
//			}
//			else
//				printf( "\nBan chua nhap 2 so phuc \n" );
//			break;
//		}
//		case 5: {
//			if (danhap == true) {
//				printf( "5.Chia 2 so phuc \n" );
//				thuong = chia2sophuc( so1, so2 );
//				if (thuong.phanthuc * thuong.phanao != 0) {
//					printf( "\nThuong cua 2 so phuc la : " );
//					xuat( thuong );
//				}
//				else
//
//					printf( "Loi! Khong chia duoc " );
//			}
//			else
//				printf( "\nBan chua nhap 2 so phuc \n" );
//			break;
//		}
//		case 6: {
//			printf( "6.Thoat \n" );
//			break;
//		}
//		default: {
//			printf( "Nhap lai lua chon cua ban \n" );
//			break;
//		}
//		}
//	} while (luachon != 6);
//}