#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	list<string> str {"hello","rick","hi","morty"};
	str.push_back("jesca");
	str.push_front("gee");

	//display
	cout << "display list in status 1 " << endl;
	auto iter1 = str.begin();
	while(iter1 != str.end()) {
		cout << *iter1 << endl;
		iter1++;
	}

	str.emplace_back("lucy");
	str.emplace_front("wow");

	//display
	cout << "display list in status 2 " << endl;
	auto iter2 = str.begin();
	while(iter2 != str.end()) {
		cout << *iter2 << endl;
		iter2++;
	}


	list<int> values{1,2,2,3,3,4,5,6};
	values.insert(values.begin(),0);
	values.remove(6);
	values.unique();
	//display 
	auto iter3 = values.begin();
	while(iter3 != values.end()) {
		cout << *iter3 << endl;
		iter3++;
	}

	//list sort
	list<int> value{1,2,3,4,5,9,8,7,6};
	value.sort(greater<int>());
	auto iter4 = value.begin();
	while(iter4 != value.end()) {
		cout << *iter4 << endl;
		iter4++;
	}

	//list merge
	list<string> st1{"hello"};
	list<string> st2{"lschen"};
	st1.merge(st2);
	auto iter5 = st1.begin();
	while(iter5 != st1.end()) {
		cout << *iter5 << " ";
		iter5++;
	}
	cout << endl;

	return 0;

}
