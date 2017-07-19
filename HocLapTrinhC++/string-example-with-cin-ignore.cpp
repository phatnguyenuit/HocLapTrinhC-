///*
//Ví dụ về string và cin khi không nhận được dòng đầu tiên của getline(cin,<ten bien string>);
//Để nhận string từ input của người dùng thì ta làm như sau :
//string ten;
//fflush(stdin) ;// xoá bộ nhớ đệm
//getline(cin, <tên biến string>);
//
//nếu trước hàm nhập string có thêm hàm nhập khác thì nên gọi : cin.ignore(); để bỏ đi dấu "/n" của input trước
//như trong ví dụ
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//struct hocsinh {
//	string hoten;
//};
//void nhap(hocsinh& hs) {
//	cout << "Nhap vao ten hs : ";
//	fflush(stdin);
//	getline(cin, hs.hoten);
//}
//void xuat(hocsinh hs) {
//	cout << hs.hoten;
//}
//void main() {
//	hocsinh danhsach[2];
//	int n;
//	cout << "Nhap vao so hoc sinh : ";
//	cin >> n;
//	cin.ignore();
//	//dùng cin.ignore () để xoá đi buffer cũ và kí tự "\n" của input trước là cin >> n
//	if (n > 0) {
//		for (int i = 0; i < n; i++) {
//			nhap(danhsach[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			cout << "Hoc sinh " << i + 1 << " : ";
//			xuat(danhsach[i]);
//			cout << endl;
//		}
//	}
//
//}