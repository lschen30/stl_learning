#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A("abcdef");
	string B("ABCDEF");
	string C("123456");
	string D("654321");

	int a = A.compare(B);
	int b = A.compare(0,1,B,0,1);
	int c = A.compare(0,1,A,1,1); //a compare to b
	int d = C.compare(0,3,D,0,3); // 123 compare 654

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	return 0;
}
