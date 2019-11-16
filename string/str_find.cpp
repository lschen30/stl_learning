#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("lschen");

	string::size_type a = str.find('s',0);
	string::size_type b = str.rfind('c',0);
	cout << (int)a << endl;
	cout << (int)b << endl;

	a = str.find("ls",0);
	b = str.rfind("sc",6);
	cout << a << endl;
	cout << b << endl;


	return 0;
}
