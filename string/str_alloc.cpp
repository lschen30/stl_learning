#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main()
{
	string str("lschen");
	basic_string <char> sl (str);
	basic_string <char> :: allocator_type aT = sl.get_allocator();
	string::size_type se = sl.size();
	string::size_type sd = str.size();
//	cout << aT << endl;
	cout << sl << endl;
	cout << se << endl;
	cout << sd << endl;
	return 0;
}
