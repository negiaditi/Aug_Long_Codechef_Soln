  
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;

        for (ll c = 1; c <= n; c++)
        {
            for (ll b = c; b <= n; b = b + c)
            {
                if (b % c == 0)
                {
                    for (ll a = c; a <= n; a = a + c)
                    {
                        if (a % b == c)
                            count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
