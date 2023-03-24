#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // for strings with spaces

    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout << "The Reversed string is: " << s << endl;

    return 0;
}
