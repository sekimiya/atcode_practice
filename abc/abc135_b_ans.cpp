#include <iostream>
#include <vector> 
using namespace std;
using std::swap;

#include <bits/stdc++.h>

int main(){  
    int N;
    int pn[N+1];

    // Yes
    // int N = 5; 
    // int pn[N+1] = {0,1,2,3,4,5};
    
    // No
    // int N = 5;
    // int pn[N+1] = {0, 2, 4, 3, 5, 1};

    cin >> N;
	pn[0] = 0;
    for(int i=1; i<N+1; i++) {
		cin >> pn[i];
	};

    int ng_num = 0;

    for(int i=1; i<N+1; i++){
            // cout << "i is " << i << endl;
            // cout << "pn[i] is "<< pn[i] <<endl; 
        if(i != pn[i]){
            // cout << "i is " << i << endl;
            // cout << "pn[i] is "<< pn[i] <<endl; 
            ng_num ++;
            if(pn[i] == pn[pn[i]]){
                swap(pn[i], pn[pn[i]]);
            }
            else if(pn[i] != pn[pn[i]]){
                cout << "NO" << endl;
                return 0;
            }

        }

    }

    if(ng_num<=2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }
}