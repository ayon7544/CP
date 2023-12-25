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
        lld test;
        cin >> test;
        string s;
        cin >> s;
        lld x = 0, y = 0;
        lld p = 0;
        for (lld i = 0; i < test; i++)
        {
            if (s[i] == 'U')
            {
                x++;
            }
            else if (s[i] == 'D')
            {
                x--;
            }
            else if (s[i] == 'R')
            {
                y++;
            }
            else
            {
                y--;
            }
            if (x == 1 && y == 1)
            {
                p = 1;
                break;
            }
        }
        if (p == 0)
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