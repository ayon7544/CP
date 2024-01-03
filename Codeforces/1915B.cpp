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
        char arr[3][3];
        lld x, y;
        for (lld i = 0; i < 3; i++)
        {
            for (lld j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '?')
                {
                    x = i;
                }
            }
        }
        string s;
        for (lld i = 0; i < 3; i++)
        {
            if (arr[x][i] != '?')
            {
                s = arr[x][i] + s;
            }
        }
        string s1 = "ABC";
        set_symmetric_difference(s1.begin(), s1.end(), s.begin(), s.end(), inserter(uncommon_values, uncommon_values.begin()));
    }
    return 0;
}