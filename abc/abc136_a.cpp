#include <iostream>
using namespace std;

int main(){

    int a, b , c;

    cin >> a >> b >>c;    

    //0以下にはならない
    int tmp = c - (a-b);
    if(tmp < 0){
        tmp = 0;
    }

    cout << tmp <<endl;
}