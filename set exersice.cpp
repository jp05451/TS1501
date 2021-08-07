#include<iostream>
#include<fstream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> myset;
	fstream name;
	name.open("name.txt", ios::in);
	string str;
	getline(name, str);
	do {
		myset.insert(str);
		getline(name, str);
	} while (!name.eof());
	for (auto it=myset.begin(); it!=myset.end();it++)
	{
		cout << *it<<endl;
	}
	name.close();
}