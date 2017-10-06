#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	std::map<long long, std::string>map1;
	long long m;
	std::string s;

	cout << "Enter employee number : "; cin >> m;
	cout << "What is your name : "; cin >> s;

	map1.insert(pair<long long, std::string>(m, s));

	cout << "Enter employee number : "; cin >> m;
	cout << "What is your name : "; cin >> s;

	map1.insert(pair<long long, std::string>(m, s));

	cout << "Enter employee number : "; cin >> m;
	cout << "What is your name : "; cin >> s;

	map1.insert(pair<long long, std::string>(m, s));

	std::map<long long, std::string>::iterator mapIter;
	mapIter = map1.begin();

	for (; mapIter != map1.end(); mapIter++){
		cout << mapIter->first << " " << mapIter->second << endl;
	}

	system("pause");
}