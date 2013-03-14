#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compareL(string str1, string str2)
{

	string str1_temp = str1;
	sort(str1_temp.begin(), str1_temp.end());
	string str2_temp = str2;
	sort(str2_temp.begin(), str2_temp.end());
	int a = str2_temp.compare(str1_temp);
	if(a <= 0)
		return false;
	return true;
}

int main()
{
	vector<string> vec;
	vec.push_back("vec");
	vec.push_back("ecv");
	vec.push_back("tok");
	vec.push_back("kot");
	vec.push_back("wp");
	vec.push_back("pw");
	bool test = compareL("vec", "ecv");
	bool test2 = compareL("ecv", "vec");
	sort(vec.begin(), vec.end(), compareL);
	return 0;
}