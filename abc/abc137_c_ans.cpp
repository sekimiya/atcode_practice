#include<bits/stdc++.h>
#include <map>
using namespace std;
// typedef long long long long;

int main(){
    long long n = 3; 
    
    cin >> n;
    
    // map<string, long long> m;

    // long n = 3;
    // map<string, long long> m = {{"acornistnt", 1}, {"peanutbomb", 2} ,{"constraint", 3}};
    map<string, long long> m;
    
    // vector<string> ss = {"acornistnt", "peanutbomb","constraint"};

    // for(long long i=0; i<n; i++){
    //     string s = ss.at(i);
    //     sort(s.begin(), s.end());
    //     m.insert(make_pair(s, i));
    // }

    for(long long i=0; i<n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }

    long long ans=0;

    for(auto p : m){
        long long x = p.second;
        // cout << "x = " << x <<endl;
        ans += x * (x-1)/2;
    }
    
    cout << ans << endl;
    return 0;
}