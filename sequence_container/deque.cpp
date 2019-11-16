#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	deque<string> words{"hello","lschen","hello","zhengyi"};

	deque<string> str {words};

	cout << str.at(3) << endl;
	
	words.pop_back();
	words.push_back("rick");

	for(auto i = words.begin();i < words.end();i++) {
		cout << *i << endl;
	}

	str.pop_front();
	str.push_front("hey");

	for(auto j = str.begin();j < str.end();j++) {
		cout << *j << endl;
	}
	return 0;
}
