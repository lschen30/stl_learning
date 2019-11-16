#include <iostream>
#include <string>

using namespace std;

int main()
{
	//assign 
	string str1("123456");
	string str;
	str.assign(str1);
	cout << str << endl;
	str.assign(str1,2,3);
	cout << str << endl;
	str.assign(str1,1,str1.npos);
	cout << str << endl;
	str.assign(5,'a');
	cout << str << endl;

	//iterator
	string::iterator itB;
	string::iterator itE;
	itB = str1.begin();
	itE = str1.end();
	str.assign(itB,(--itE));
	cout << str << endl;

	//erase
	str.erase((++str.begin()),str.end());
	cout << str << endl;

	//swap
	string str2("lschen");
	str.swap(str2);
	cout << str << endl;
	cout << str2 << endl;

	//insert
	string A("chen");
	string B("ls");
	B.insert(2,A);
	cout << B << endl;
	
	B.insert(0,"hello ",6);//insert hello before str B
	cout << B << endl;

	string C(" world");
	C.insert(0,"gee hello world",4,5);
	cout << C << endl;

	string D("hello");
	string E("rick");
	string::iterator itD,itB1,itE1;
	itD = E.begin();
	itB1 = D.begin();
	itE1 = D.end();
	E.insert(itD,itB1,itE1);
	cout << E << endl;

	//append()
	cout << ".append() function" << endl;
	string app("lschen ");
	string func("yaoqu gaode!");
	app.append(func.begin(),func.end());
	cout << app << endl;

	//replace
	string var = ("abcdefg");
	const string dest ("1234");

	var.replace(3,1,dest);
	cout << var << endl;

	var.replace(3,1,dest.c_str(),1,2);
	cout << var << endl;

	var.replace(var.begin(),var.end(),dest.begin(),(--dest.end()));
	cout << var << endl;
	return 0;
}
