#include <iostream>
using namespace std;
/**
Các định dạng của các kiểu dữ liệu cơ bản trong C/C++
int %d;
long %ld;
float %f;
double %lf;
char %c;
char[] %s;
*/
/**
Cách lưu file code dưới dạng tiếng việt có dấu : vào File -> Advanced Save Option 
-> chọn kiểu encoding 'Unicode' code page 65001
	OK chỉ cần nhấn OK là xong
*/
/**
	 Sử dụng thư viện <iostream> để thực hiện nhập xuất tương tự với prinf và scanf
	 thư viện <iostream> hỗ trợ nhập xuất tương tự <stdio.h> 
	 prinf -> cout
	 scanf -> cin
	 _Các bước để sử dụng thư viện nhập xuất  với <iostream>
	 +B1 : Include thư viện với từ khoá #include <iostream>
	 +B2 : Tiếp tục khai báo sau câu #include : using namespace std;
	 +B3  Sử dụng 'cout' như printf
	 vd : cout << "Hello World" << endl;
	 với từ khoá 'endl' nghĩa là xuống dòng tương đương với "\n"

	 +B4 Sử dụng 'cin' như là scanf ...Dùng cin sẽ có ưu điểm không cần nhớ chuỗi định dạng "%d",.....hay những chuỗi định dạng khác
	 vd Sử dụng cin để nhập biến như scanf
	 int a;
	 float b;
	 double c;
	 char d;
	 cin >> a >> b >> c >> d;
	 hoặc dùng xen kẽ với cout như dùng xen kẽ printf và scanf
	 cout << "Nhap vao a : ";
	 cin >> a;
*/

//void main() {
//	int a;
//	float b;
//	double c;
//	char d;
//	cout << "Hello World!" << endl;
//	//cin >> a >> b >> c >> d;
//	//cout << a << b << c << d;
//	cin >> a;
//	cout << a << endl;
//
//}
