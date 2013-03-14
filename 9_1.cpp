#include <iostream>
#include <vector>
using namespace std;

//我的解法 O（N * M）
void sortAAndB(vector<int> &A, vector<int> &B)
{
	if(A.size() == 0)
	{
		A = B;
		return;
	}		
	vector<int>::iterator itr;
	for(itr = B.begin(); itr != B.end(); itr++)
	{
		A.push_back(*itr);
		int i;
		for(i = A.size() - 2; i >= 0; i--)
		{
			if((*itr) < A[i])
				A[i + 1] = A[i];
			else
			{
				A[i + 1] = *itr;
				break;
			}
		}	
	}
}

//答案解法 O（N + M）
void merge(int * a, int * b, int n, int m)
{
	int k = n + m - 1;
	int i = n - 1;
	int j = m - 1;
	while(i >= 0 && j >= 0)
	{
		if(a[i] >= b[j])
			a[k--] = a[i--];
		else
			a[k--] = b[j--];
	}

	while(j >= 0)
		a[k--] = b[j--];
}

int main()
{
	int temp1[6] = {1, 3, 5};
	int temp2[3] = {2, 4, 5};
	vector<int> A(temp1, temp1 + 3);
	vector<int> B(temp2, temp2 + 3);
	sortAAndB(A, B);
	merge(temp1, temp2, 3, 3);
	for(int i = 0; i < 6; i++)
		cout << temp1[i] << "\t";
	return 0;
}