#include <iostream>
#include <vector> 
using namespace std;
#include <bits/stdc++.h>

int main(){
    // int N = 5;
    // int pn[N+1] = {0,2,4,3,5,1};
    
    int N;
    cin >> N;

    int pn[N+1];
	for(int i=1; i<N+1; i++) {
        pn[0] = 0;
		int x;
		cin >> x;
        pn[i] = x;
	};

    int ng_count=0;
    for(int i=1; i<N+1; i++){
        // cout << "i" << endl;
        // cout << i << endl;
        
        // cout << "pn" << endl;
        // cout << pn[i] <<endl;
        if(pn[i]!=i){
            swap(pn[i], pn[pn[i]]);
            ng_count++;
        }
        else{

        }
    }

    // cout << ng_count << endl;

    if(ng_count<=1){
        cout<< "OK" << endl;
    }
    else if(ng_count>=2){
        cout<< "NO" << endl;
    }
    else{
        
    }

    // for(int i; i<N; i++){}
}