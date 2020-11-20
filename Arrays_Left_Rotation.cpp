#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> a, int rotations)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[(i + rotations) % a.size()] << " ";
	}
}
/*
example: size=5, rotations=4 a[]={1,2,3,4,5}
a[(0+4)%5]=4
a[(1+4)%5]=0
a[(2+4)%5]=1
a[(3+4)%5]=2
a[(4+4)%5]=3
*/

int main()
{
	int n; //size of vector
	int d; //number of rotations

	cin >> n >> d;
	vector<int>numbers(n);

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	display(numbers, d);
}
