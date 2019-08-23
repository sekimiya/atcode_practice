#include <iostream>
using namespace std;

int main(){
    // double a = 6;
    double a;
    cin >> a;
    
    double sum;

    for(int i=1; i<=a; i++){
        sum += 1/a * 10000*i;
        // cout<<sum<<endl; 
    }

    cout << sum << endl;

}