#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    string s,str;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
    getline(cin,str);

    map<char, int> mp;
    mp.insert(pair<char, int>('N', 3));
    mp.insert(pair<char, int>('E', 0));
    mp.insert(pair<char, int>('S', 1));
    mp.insert(pair<char, int>('W', 2));

    map<int , char> find_dir;
    find_dir.insert(pair<int , char>(0,'E'));
    find_dir.insert(pair<int , char>(1,'S'));
    find_dir.insert(pair<int , char>(2,'W'));
    find_dir.insert(pair<int , char>(3,'N'));

    map<int, pair<int, int>> mp_2;
    mp_2.insert(pair<int, pair<int, int>>(3, {0, 1}));
    mp_2.insert(pair<int, pair<int, int>>(0, {1, 0}));
    mp_2.insert(pair<int, pair<int, int>>(1, {0, -1}));
    mp_2.insert(pair<int, pair<int, int>>(2, {-1, 0}));

    int x_s = s[0] - '0', y_s = s[2] - '0', dir = mp[s[4]];

    char rotate,move;
    for(int i =0; i< str.length();i += 4){
        rotate = str[i];
        move = str[i+2];
        // cout<<rotate<<" "<<move<<"\n";
        if(rotate == 'L'){
            if(dir == 0){
                dir = 3;
            }else{
                dir = (dir - 1)%4;
            }
        }else{
            dir = (dir + 1)%4;
        }
        // cout<< dir;
        if((x_s + mp_2[dir].first) >= 0 && (x_s + mp_2[dir].first) <= x && (y_s + mp_2[dir].second) >= 0 && (y_s + mp_2[dir].second) <= y){
            x_s += mp_2[dir].first;
            y_s += mp_2[dir].second;
            // cout<<x_s<<"-"<<y_s<<" ";
        }else{
            cout<<x_s<<"-"<<y_s<<"-"<<find_dir[dir]<<"-ER";
            return 0;
        }
    }  
    cout<<x_s<<"-"<<y_s<<"-"<<find_dir[dir];
    return 0;
}