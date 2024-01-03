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
        lld a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << c << endl;
        }
        else if (a == c)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
