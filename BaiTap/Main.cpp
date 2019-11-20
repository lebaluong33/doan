#include <iostream>
#include <string>
#include"BaiBaoKhoaHoc.h"
using namespace std;
int main()
{
	string a;
	string* f = new string[2];
	for (int i = 0; i <= 1; i++) {
		f[i] = "xxx";
	}
	BaiBaoKhoaHoc b1("a","b","c","d",1,2,"e",f,f);
	b1.show();
	system("pause");
	return 0;
}