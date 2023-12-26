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
        lld a;
        cin >> a;
        lld arr[a];
        lld max = INT64_MAX;
        for (lld i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] < max)
            {
                max = arr[i];
            }
        }
        lld sum = 0;
        lld k = 0;
        for (lld i = 0; i < a; i++)
        {
            sum = arr[i] - max;
            k = sum + k;
        }
    }

    return 0;
}