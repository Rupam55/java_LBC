#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> freq(26, 0);
    for (auto it : s)
        freq[it - 'a']++;

    int ans = 0;
    char last;
    bool flag;

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] == 0)
            continue;

        for (int j = i + 1; j < freq.size(); j++)
        {

            if (freq[j] == 0)
                continue;

            last = -1;
            flag = true;
            for (const char &c : s)
            {
                if (c == char(i + 'a') || c == char(j + 'a'))
                {
                    if (last == c)
                    {
                        flag = false;
                        break;
                    }
                    last = c;
                }
            }

            if (flag && abs(freq[i] - freq[j]) <= 1)
                ans = max(ans, freq[i] + freq[j]);
        }
    }
    cout << ans;

    return 0;
}