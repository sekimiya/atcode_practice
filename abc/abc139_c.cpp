#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<int> h;

    // N = 5;
    // h = {10, 4, 8, 7, 3};

    // N = 7;
    // h = {4, 4, 5, 6, 6, 5, 5};

    // N = 4;
    // h = {1, 2, 3, 4};

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<int> ans;
    int max_tmp = 0;

    for(int i=1; i<N; i++){
        if(h[i-1] >= h[i]){
            max_tmp ++;   
            // cout << max_tmp << endl;  
        }
        else if (h[i-1] < h[i]){
            // ans.push_back(max_tmp);
            max_tmp = 0;
        }
        else {
            // ans.push_back(max_tmp);
            // h.push_back(max_tmp);
            max_tmp = 0;
        }
        ans.push_back(max_tmp);
    }

    std::vector<int>::iterator iter = std::max_element(ans.begin(), ans.end());
    size_t index = std::distance(ans.begin(), iter);

    // cout << "max is " <<endl;
    cout << ans[index] << endl;

  return 0;
}