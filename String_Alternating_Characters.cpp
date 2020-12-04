#include <iostream>

using namespace std;

int alternatingCharacters(string s) {
     
     int count = 0;
    for (int i=0; i<s.length(); i++)
    {
       
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int tests;
    cin >> tests;
    
    string s;
    
    for (int i = 1; i <= tests; i++) 
    {
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << "\n";
    }
   
    return 0;
}
