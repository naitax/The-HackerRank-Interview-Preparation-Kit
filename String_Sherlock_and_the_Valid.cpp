#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int characters = 26;

void isValid(string s)
{
    int holder[characters] = { 0 };

    for (int i = 0; i < s.length(); i++)
    {
        holder[s[i] - 'a']++;
    }
    
    sort(holder, holder + 26);
    int i = 0;
    while (holder[i] == 0)
    {
        i++;
    }
    int min = holder[i];
    int max = holder[25];

    if (min == max)  cout << "YES";
    else if (((max - min == 1) && (max > holder[24])) || (min == 1) && (holder[i + 1] == max))
        cout << "YES";
    else cout << "NO";
    
}

int main()
{
    string s;
    getline(cin, s);
    isValid(s);
   
    return 0;
}
