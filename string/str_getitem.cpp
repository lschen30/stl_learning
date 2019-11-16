#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string cs ("willab.cn");
	string s("lschen");	
	char temp = 'a';
	char temp_1 = 'a';
	char temp_2 = 'a';
	char temp_3 = 'a';
	char temp_4 = 'a';
	char temp_5 = 'a';
	char temp_6 = 'a';

	char &r = s[0];
	char *p = &s[1];

	r = 'L';
	*p = 'S';
	cout << s << endl;


	temp = s[2];
	temp_1 = s.at(2);
	temp_2 = s[s.length()-1];
	temp_3 = cs[cs.size()-2];
	temp_4 = s.at(s.size()-1);
	temp_5 = cs.at(s.length()-2);

	cout << temp << endl;
	cout << temp_1 << endl;
	cout << temp_2 << endl;
	cout << temp_3 << endl;
	cout << temp_4 << endl;
	cout << temp_5 << endl;

	return 0;
}
