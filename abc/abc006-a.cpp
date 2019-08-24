#include <iostream>
using namespace std;

int main(){

    int n = 3;
    cin >> n;
    
    int mod;

    mod = n % 3;

    if(mod == 0){
        cout << "YES" <<endl;
    }
    else if (mod == 2){
        cout << "NO" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
}