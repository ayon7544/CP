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
        lld arr[test];
        lld k = 0;
        lld m = INT64_MAX;
        for (lld i = 0; i < test; i++)
        {
            cin >> arr[i];
            if (arr[i] < m)
            {
                m = arr[i];
                k = i;
            }
        }
        arr[k] = arr[k] + 1;
        lld pro = 1;
        for (lld i = 0; i < test; i++)
        {
            pro = pro * arr[i];
        }
        cout << pro << endl;
    }
    return 0;
}