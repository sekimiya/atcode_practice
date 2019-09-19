#include <iostream>
#include <stdlib.h>
#include <vector> 
#include <algorithm> 

using namespace std;
int main(){
    // long N = 3;
    // vector<string> v = {"acornistnt", "peanutbomb", "constraint"};
    
    // long N =2;
    // vector<string> v = {"oneplustwo" ,"ninemodsix"};
    // // int N = 5;
    // vector<string> v = {
    // "abaaaaaaaa"
    // ,"oneplustwo"
    // ,"aaaaaaaaba"
    // ,"twoplusone"
    // ,"aaaabaaaaa"
    // };

    long N;
    vector<string> v;

    cin >> N;

	for(long i=0; i<N; i++) {
		string x;
		cin >> x;   
        v.push_back(x);
        sort(v[i].begin(),v[i].end());
	};

    // for(long i=0; i<N; i++){
    //     sort(v[i].begin(),v[i].end());
    //     // cout << v[i] << endl;
    // }

    long ans_n = 0;

    for(long i=0; i<N; i++){
        string tmp_i = v[i];
        for(long j=i+1; j<N; j++){
            string tmp_j = v[j];
            // if(i!=j && j!=i  && tmp_i == tmp_j)
            if(tmp_i == tmp_j){
                    ans_n ++;
                    // cout << "i" << "" << i << endl;
                    // cout << "j" << "" << j << endl;
            }
        }
    }
    
    cout << ans_n << endl;
}