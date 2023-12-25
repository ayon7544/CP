#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define ui unsigned int
#define char_to_int(c) (c - '0')
#define int_to_char(c) (c + '0')
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lld testcase;
    cin >> testcase;
    while (testcase--)
    {
        string s;
        cin >> s;
        lld k = 0;
        if (s[0] != 'a')
        {
            k++;
        }
        if (s[1] != 'b')
        {
            k++;
        }
        if (s[2] != 'c')
        {
            k++;
        }
        if (k == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}