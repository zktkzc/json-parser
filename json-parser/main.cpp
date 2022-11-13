#include<iostream>
#include <fstream>
#include <sstream>
#include"json.h"
using namespace std;
using namespace yazi::json;

int main()
{
	ifstream fin("./test.json");
	stringstream ss;
	ss << fin.rdbuf();
	const string& str = ss.str();
	Json v;
	v.parse(str);

	bool isLogin = v["data"]["isLogin"];
	int current_level = v["data"]["level_info"]["current_level"];

	//cout << v.str() << endl;

	cout << isLogin << "\n" << current_level << endl;

	system("pause");
	return 0;
}