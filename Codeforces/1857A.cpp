#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define ui unsigned int
#define char_to_int(c) (c - '0')
#define int_to_char(c) (c + '0')

int main()
{

    lld testcase;
    cin >> testcase;
    while (testcase--)
    {
        lld elements;
        cin >> elements;
        lld arr[elements];
        vector<lld> odd, even;
        for (lld i = 0; i < elements; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
            {
                odd.push_back(arr[i]);
            }
            else
            {
                even.push_back(arr[i]);
            }
        }
        if (elements % 2 == 0)
        {
            if (odd.size() % 2 != 0 && even.size() % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (odd.size() % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}