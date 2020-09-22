// crazy zack

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

ll infi = (ll)1e15;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,s);

    vector<string> arr;
    string s2="";
    for(int i = 0; i<=s.length(); i++){
        if(s[i]== ' ' || i == s.length()){
            arr.push_back(s2);
            s2="";
        }else{
            s2+=s[i];
        }
    }

    vector<int> value;

    for(auto it : arr){
        string s3 = it;
        int val = 0, n = s3.length();
        for(int i = 0, j = n-1 ; j >= i ; i++,j--){
            if(i == j){
                val +=abs(s3[i] - '`');
            }else{
                val += abs(s3[i] - s3[j]);
            }
        }
        value.push_back(val);
    }

    for(auto it : value){
        cout<<it;
    }
    return 0;
}