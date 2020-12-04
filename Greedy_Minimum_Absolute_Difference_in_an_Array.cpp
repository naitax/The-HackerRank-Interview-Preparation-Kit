#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n; //length of 
	int x;
	cin >> n;
	int* arr;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr+n);
	
	int min = abs(arr[1] - arr[0]);

	for (int i = 2; i < n; i++)
	{
		if ((abs(arr[i] - arr[i - 1]) < min))
		{
			min = abs(arr[i] - arr[i - 1]);
		}
	}
	
	cout << min;

}
