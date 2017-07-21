#pragma region Mảng 2 chiều và cách sử dụng
/*
	Part 0 : Khái niệm về mảng 2 chiều ( đa chiều );
		Với mảng 1 chiều ta có mang = {phần tử 1, phần tử 2,....,phần tử n} với mỗi phần tử trong mảng mang giá trị
		thuộc các kiểu dữ liệu cơ bản của C++ như int, float, double...
		Tương tự với ý niệm của mảng 1 chiều ta có :
			Mảng 2 chiều có dạng mang = {phần tử 1, phần tử 2,....,phần tử n} với mỗi phần tử trong mảng là 1 mảng 1 chiều
			vd : mang = { {0,1,2}, {3,4,5}, {6,7,8} };
			=> mang[0] = {0,1,2};
			=> mang[0][0] = 0;
	Part 1 : Khai báo mảng 2 chiều :
		Có 3 cách khai báo mảng 2 chiều ( ma trận ) :
		-Tường minh : <kiểu dữ liệu> <tên mảng>[số dòng][số cột]
			vd :	int mang[2][2] ; // Ma trận 2 dòng 2 cột với từng phần tử mang kiểu int
			float mang[2][4] ; // Ma trận 2 dòng 2 cột với từng phần tử mang kiểu float
		- Không tường minh :
			+Dùng từ khoá typedef
				Bước 1 : typedef <kiểu dữ liệu> <tên thay thế>[số dòng][số cột];
				Bước 2 : <từ khoá thay thế> mt1; // Nghĩa là khai báo 1 mảng 2 chiều tên là mt1 với kiểu dữ liệu là <tên thay thế>
				vd :	typedef <kiểu ữ liệu> MATRIX[2][2];
						MATRIX mt1;
			+Dùng con trỏ 1 chiều và 2 chiều khi biết số dòng hoặc không biết cả 2
				a) Khi biết số dòng của mảng 2 chiều
					khai báo : <kiểu dữ liệu> *p[sodong]; //mảng con trỏ 1 chiều
					khởi tạo : for(i in sodong)
									p[i] = new int[socot];
				b) Khi không có số dòng và số cột của mảng 2 chiều
					khai báo : <kiểu dữ liệu> **p; //con trỏ 2 chiều
					khởi tạo : 
								p = new <kiểu dữ liệu> [sodong];
								for(i in sodong)
									p[i] = new int[socot];
	Part 2 : Truy xuất phần tử và duyệt mảng 2 chiều
		-Truy xuất
		Chỉ cần gọi <tên mảng 2 chiều>[chỉ số dòng][chỉ số cột] là truy xuất được phần tử ở vị trí dòng <chỉ số dòng> và cột <chỉ số cột>
		vd : int value = mang[0][1]; // truy xuất phần tử ở dòng 0 cột 1 
		NOTE : chỉ số dòng và cột đều bắt đầu từ 0
		-Duyệt mảng 2 chiều : Chỉ cần duyệt lần lượt từng dòng và từng cột tương ứng với dòng đang duyệt
			for(i in <số dòng>){
				for( j in <số cột> ){
					//thao tác
				}
			}
		vd : 
		Nhập mảng 2 chiều
		for (int i = 0; i < sodong; i++) {
			for (int j = 0; j < socot; j++) {
				mang[i][j] = 100; // gán giá trị cho phần tử thứ ij bằng 100;
			}
		}
		Xuất mảng 2 chiều
		for (int i = 0; i < sodong; i++) {
			for (int j = 0; j < socot; j++) {
				//thao tác xuất
			}
		}


*/

#pragma endregion

//nên dùng từ khoá const để khai báo hằng số để xác định rõ ràng kiểu dữ liệu của hằng số
const int sodong = 2;
const int socot = 2;
#include <iostream>
using namespace std;

void main() {
	//khai báo tường minh
	int matran[sodong][socot];

	//khai báo không tường minh
	typedef int matrix[sodong][socot];
	matrix mt;

	//khai báo dạng con trỏ
	int *p[sodong]; //mảng con trỏ 1 chiều 
	int **max; // con trỏ 2 chiều

	//Khởi tạo mảng 2 chiều bằng mảng con trỏ 1 chiều
	for (int i = 0; i < sodong; i++)
		p[i] = new int[socot];

	//khởi tạo mảng 2 chiều bằng con trỏ 2 chiều
	max = new int* [sodong];
	for (int i = 0; i < sodong; i++)
		max[i] = new int[socot];

	//cách sử dụng mảng 2 chiều để nhập xuất tương tự với kiểu khai báo mảng 2 chiều tường minh

	//nhập ma trận matran
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			matran[i][j] = 100; // gán giá trị cho phần tử thứ ij bằng 100;
		}
	}

	//nhập ma trận mt 
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			mt[i][j] = 200; // gán giá trị cho phần tử thứ ij bằng 100;
		}
	}

	cout << "=======================================================" << endl;
	cout << "Xuat mang 2 chieu khai bao tuong minh matran[" << sodong << " ][ " << socot << " ]" << endl;
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			cout << "matran[ " << i << " ][ " << j << " ] : " << matran[i][j] << endl;
		}
	}
	cout << "=======================================================" << endl;
	cout << "Xuat mang 2 chieu khai bao tuong minh mt" << endl;
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			cout << "mt[ " << i << " ][ " << j << " ] : " << mt[i][j] << endl;
		}
	}
	cout << "=======================================================" << endl;
}