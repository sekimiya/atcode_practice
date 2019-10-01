#include <iostream>
#include <stdlib.h>
#include <vector> 
#include <algorithm> 

using namespace std;


int main(){
    // int N;
    // vector<int> A;
    // vector<int> B;
    
    // cin >> N;

    // for(int i=0; i<N+1; i++){
    //     cin >> A[i];
    // }

    // for(int i=0; i<N; i++){
    //     cin >> B[i];
    // }

    // output = 9 
    int N = 2;
    vector<int> A = {3,5,2};
    vector<int> B = {4,5};

    int mons_sum;
    int big_yuu;
    int little_yuu;
    for(int i=N-1; i>=0; i--){
        //大きい番号の勇者
        if(A[i+1]>=0){
            //大きい勇者しか行けない街
            mons_sum += B[i+1];
            big_yuu = B[i+1];
            // cout << B[]
            // cout << mons_sum << endl;
        }

        //小さい番号の勇者
        if(A[i]>=0){
            //小さい勇者しか行けない街
            mons_sum += B[i-1];
            little_yuu =B[i];
            
            cout << mons_sum << endl;
        }

        //間の街にどっちの勇者が行くか 
        if(big_yuu>=little_yuu){
            if(big_yuu>=A[i]){
                mons_sum += A[i];
            }
            if(big_yuu<A[i]){
                mons_sum += big_yuu;
            }
        }
    
        if(little_yuu<=little_yuu){
            if(little_yuu>=A[i]){
                mons_sum += A[i];
            }
            if(little_yuu<A[i]){
                mons_sum += little_yuu;
            }
        }

    }

    cout << mons_sum << endl;

}