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
    int A[N+1] = {3,5,2};
    int B[N] = {4,5};

    int mons_sum = 0;
    int big_yuu;
    int little_yuu;

    for(int i=1; i<N; i++){
        //大きい番号の勇者
        if(A[i+1]>=0){
            //大きい勇者しか行けない街
            //討伐限界数と実際のモンスター数、小さい方を返す
            int big_tmp = min(A[i+1], B[i]);
            // big_yuu = B[i+1];
            // cout << B[]
            cout <<"A[i+1]: " << A[i+1] << endl;
            cout << "B[i]: "<< B[i] << endl;
            A[i+1] -= big_tmp;
            cout << "big_tmp: " << big_tmp << endl;
            mons_sum += big_tmp;
            // cout << mons_sum << endl;
        }

        //小さい番号の勇者
        //同様に
        if(A[i-1]>=0){
            //小さい勇者しか行けない街
            int little_tmp= min(A[i-1], B[i-1]);
            // little_yuu =B[i];
            // cout << A[i] << endl;
            // cout << B[i] << endl;
            A[i] -= little_tmp;
            cout << "A[i-1]: " << A[i-1]<<endl;
            cout << "B[i-1]: " << B[i-1]<<endl;
            cout << "little_tmp: " << little_tmp << endl;
            mons_sum += little_tmp;
            // cout << mons_sum << endl;
        }

       

        if(A[i]>=0){
            int tmp_which = min(B[i], B[i+1]);
            A[i] -= min(tmp_which, A[i]);
            mons_sum += tmp_which;
        }

        



        //間の街の討伐状況
        // if(big_yuu>=little_yuu){
        //     if(big_yuu>=A[i]){
        //         mons_sum += A[i];
        //     }
        //     if(big_yuu<A[i]){
        //         mons_sum += big_yuu;
        //     }
        // }
    
        // if(little_yuu<=little_yuu){
        //     if(little_yuu>=A[i]){
        //         mons_sum += A[i];
        //     }
        //     if(little_yuu<A[i]){
        //         mons_sum += little_yuu;
        //     }
        // }

    }

    cout << mons_sum << endl;

}