#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
	vector<string> str{"hello ","lschen ","hello ","zhengyi"};
	vector<string> words{make_move_iterator(str.begin()),make_move_iterator(str.end())};
	cout << "str: " << *str.begin() << endl;
	cout << "words: " << *words.begin() << endl;

	//get size,capacity of vector
	auto size = words.size();
	auto cap = words.capacity();
	cout << size << endl;
	cout << cap << endl;
	//resize to 3
	//words.resize(3);
	//cap = words.capacity();
	//cout << cap << endl;

	cout << words.front() << endl;
	cout << words.back() << endl;

	//vector<string> word(10);
	//copy(istream_iterator <string> {cin},istream_iterator <string> {},back_inserter(word));

	//for(auto i = word.size();i > 0;i --) {
	//	cout << *(word.begin()++) << endl;
	//}
	vector<string> word(2);
	word.push_back("lschen");
	cout << word[2] << endl;

	string str1("abcdef");
	word.emplace_back(str1,1,3);
	cout << word[3] << endl;

	auto aiter = word.emplace(++word.begin(),"rick");	

	array<string,3> arr {"abc","def","ghi"};

	//insert a item to word vector
	word.insert(++word.begin(),"a word");

	//insert a seq to word vector
	word.insert(++word.begin(),(arr.begin()),arr.end());

	//display the vertor
	auto iter = word.begin();
	while(iter != word.end()) {
		cout << *iter << endl;
		iter++;
	}

	vector<string> vec{"one","two","three","four"};
	auto pos = find(vec.rbegin(),vec.rend(),"one");
	vec.insert(pos.base(),"rick");
	auto ter = vec.begin();
	while(ter != vec.end()) {
		cout << *ter << endl;
		ter++;
	}
	
	return 0;
}
