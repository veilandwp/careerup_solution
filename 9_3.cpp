/**************************************************************
1，注意递归的终止条件
2，注意不使用递归
***************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int findIndex(int *array, int begin, int end, int value)
{
	if(begin > end)
		return -1;
	int mid = (begin + end) / 2;
	if(array[begin] < value)
	{
		if(array[begin] < array[mid])
		{
			if(value < array[mid])
				end = mid - 1;
			else if(value > array[mid])
				begin = mid + 1;
			else
				return mid;
		}
		else
			end = mid - 1;
	}
	else if(array[begin] > value)
	{
		if(array[end] > array[mid])
		{
			if(value > array[mid])
				begin = mid + 1;
			else if(value < array[mid])
				end = mid - 1;
			else
				return mid;
		}
		else
			begin = mid + 1;
	}
	else
		return begin;
	return findIndex(array, begin, end, value);
}

int main()
{
	int array[] = {15, 16, 19, 20, 0, 1, 3, 4, 5, 7, 10, 14};
	cout << findIndex(array, 0, 11, 2) << endl;
	return 0;
}