#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_toys(vector <int> x, int budget)
{
	sort(x.begin(), x.end()); // sort prices in the ascending order
	int sum = 0;
	int count = 0;
	int i = 0;
	
	for (int i = 0; i < x.size(); i++)
	{
		sum += x[i];
		count++;
		if (sum >= budget) break;
		
	}
	count--;
	return count;
}

int main()
{
	int n; //number of priced toys;
	int k; //amount to spend

	cin >> n >> k;

	vector <int> prices(n);
	for (int i = 0; i < n; i++)
	{
		cin >> prices[i];
	}

	int results = max_toys(prices, k);
	cout << results;
	return 0;
}
