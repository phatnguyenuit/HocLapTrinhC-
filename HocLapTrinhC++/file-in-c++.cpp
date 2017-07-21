/*
mode ios::app để chuyển con trỏ về cuối file khi ghi file
sẽ tạo ra file nếu chưa có file
*/

// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//write file
	ofstream myfile;
	myfile.open("example.txt",ios::app);
	myfile << "Writing this to a file continue!.\n";
	myfile.close();
	cout << "ghi file hoan tat !\n" << "Noi dung file la : \n";

	string line;
	ifstream file("example.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << '\n';
		}
		file.close();
	}
	else
		cout << "Unable to open file";
	return 0;
}