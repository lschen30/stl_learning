#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>

//using std::array;
using namespace std;

int main()
{
	array<double,4> ab{1,1,2,4};
	size_t i = 0;
	ab.fill(3.1415926);
	for(i = 0;i < ab.size();i++) {
		cout << ab.at(i) << endl;
	}

	//iterator
	array<string,4> str{"hello","lschen","hello","zhengyi"};
	for(auto iter = str.begin();iter < str.end();iter++) {
		cout << *iter << endl;
	}

	return 0;
}
