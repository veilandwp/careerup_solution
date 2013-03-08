#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> permutation(string str)
{
	vector<string> v;
	for(int i = 0; i < str.size(); i++)
	{
		string temp = str;
		vector<string> tempv;
		temp.erase(str[i]);
		tempv = permutation(temp);
		for(int j = 0; j < tempv.size(); j++)
		{
			v.push_back(tempv[j] + str[i]);
		}
	}
	return v;
}

int main()
{
	vector<string> t;
	string str("1234");
	t = permutation(str);
	for(int i = 0; i < t.size(); t++)
	{
		cout << t[i] << endl;
	}
	return 0;
}