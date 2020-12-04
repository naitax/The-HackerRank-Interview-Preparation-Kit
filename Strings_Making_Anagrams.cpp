#include <iostream>
#include <string>

using namespace std;

const int characters = 26; // number of letter a-z

int makeAnagram(string a, string b)
{
	int holder1[characters] = { 0 };
	int holder2[characters] = { 0 };
	int result = 0;

	for (int i = 0; i < a.length(); i++)
	{
		holder1[a[i] - 'a']++;
	}

	for (int j = 0; j < b.length(); j++)
	{
		holder2[b[j] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		result += abs(holder1[i] - holder2[i]);
	}

	return result;
}

int main()
{
	string a;
	getline(cin, a);

	string b;
	getline(cin, b);

	int result = makeAnagram(a, b);

	cout << result;


	return 0;
}
