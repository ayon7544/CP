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
        string s[10];
        lld sum = 0;
        for (lld i = 0; i < 10; i++)
        {
            cin >> s[i];
            for (lld j = 0; j < 10; j++)
            {
                if (s[i][j] == 'X')
                {
                    if (i == 0 || i == 9 )
                    {
                        sum = sum + 1;
                    }
                    else if (i == 1 || i == 8)
                    {
                        sum = sum + 2;
                    }
                    else if (i == 2 || i == 7)
                    {
                        sum = sum + 3;
                    }
                    else if (i == 3 || i == 6)
                    {
                        sum = sum + 4;
                    }
                    else if (i == 4 || i == 5)
                    {
                        sum = sum + 5;
                    }
                }
                cout << sum << endl;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
