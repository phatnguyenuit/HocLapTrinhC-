#pragma region Đọc xuất file trong C++ với thư viện <fstream>
/*
	Có 3 class để thao tác với file:
	ofstream: class này chỉ để ghi file
	ifstream: class này chỉ để đọc file
	fstream: class này có thể  đọc/ghi file
	-Mở file bằng hàm open(tên file,chế độ đọc/ghi file);
		Các chế độ đọc/ghi file (mode):
			ios::in : phục vụ thao tác đọc file
			ios::out : phục vụ thao tác ghi file
			ios::binary : phục vụ mở file nhị phân
			ios::ate : chuyển con trỏ về vị trí cuối file
			ios::app  : Tất cả các hành động ghi file đều bắt đầu từ vị trí cuối file , hay dùng để viết thêm nội dung file có sẵn
			ios::trunc : Nếu file mở có sẵn nội dung sẽ bị xoá và ghi đè nội dung mới
		Các chế độ mặc định theo class
			ofstream:	ios::out
			ifstream:	ios::in
			fstream:	ios::in | ios::out
		Hàm kiểm tra file có đang mở hay không?
			is_open() sẽ trả về true nếu mở file thành công và file ở trạng thái đang mở
		Ví dụ :
			ofstream myfile;
			myfile.open ("example.bin", ios::out | ios::app | ios::binary); 
			//dùng dấu "|" để ngăn cách nhiều mode
	-Đóng file bằng hàm close();
*/
#pragma endregion

#pragma region Code minh hoạ

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//write file
	ofstream myfile;
	myfile.open("example.txt", ios::trunc);
	//myfile << "1\t2\t3.12\t4";
	myfile << "PhatNguyen\n18\n";
	myfile.close();
	cout << "ghi file hoan tat !\n" << "Noi dung file la : \n";

	string line,line2;
	ifstream file("example.txt");
	float value;
	if (file.is_open())
	{
		/*while (getline(file, line))
		{
			cout << line << '\n';
		}*/
		while (file >> line >> line2) {
			cout << "value : " << line << " vs " << line2 << endl;
			//atoi(line2.c_str());
		}

		//vi du ve for loop voi file
		/*for (int i = 0; !file.eof(); i++) {
			if (i > 9) {
				file >> line >> line2;
			}
			else {
				continue;
			}
		}*/
		file.close();
	}
	else
		cout << "Unable to open file";
	return 0;
}

#pragma endregion
