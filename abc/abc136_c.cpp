#include<bits/stdc++.h>
#include <map>
using namespace std;
// typedef long long long long;

int main(){
    long long N ;
    vector<long long> h;

    // N = 4;
    // h = {1, 3, 2, 1};

    cin >> N;
    for(long i=0; i<N; i++){
        cin >> h[i]; 
    }

    // long tmp_h = *max_element(h.begin(), h.end());;
    // long long tmp_h = h[N-1];
    // cout << tmp_h << endl;

    // string ans = "Yes";

    // for(long i=N-1; i=0; i--){
    //     if(h[i] <= tmp_h){
    //         tmp_h = h[i];
    //     }
    //     else if(h[i] > tmp_h){
    //         if(h[i]-1 < tmp_h){
    //             ans = "No";
    //         }
    //     }
    // }

    long long tmp_h = h[0];

    for(long long i=1; i<N; i++){
        if(h[i-1] > h[i]){
            cout << "No" << endl;
            return 0;
        }
        else {
            if (h[i] != h[i - 1]) {
                h[i] = h[i] - 1;
            }
        }
    }

    cout << "Yes" << endl;
    
	// for(long long i=N-1; i=0; i--){
	// 	if(h[i]-1 > tmp_h){
	// 		cout<< "No" <<endl;
	// 		return 0;
	// 	}
	// 	tmp_h = min(tmp_h, h[i]);
	// }
	// cout<< "Yes" <<endl;

    // cout << ans << endl;

    return 0;
}