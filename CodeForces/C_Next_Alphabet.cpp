#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c == 'z')
    {
        cout << 'a';
    }
    else if (c == 'Z')
    {
        cout << 'A';
    }
    else
    {
        cout << char(c + 1);
    }
    return 0;
}