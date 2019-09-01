#include <iostream>
#include <stdlib.h>
#include <vector> 
using namespace std;

int main(){
    string s = "0024";
    
    cin >> s;    
 
    for (int i=0; i<4; i++){
        char tmp = s[i];
        if(i>=1){
            // cout << s[i] << endl;
            // cout << s[i-1] << endl;
            if( s[i-1] == s[i]){
                cout << "Bad" << endl;
                return 0;
            }
        }
    }

    cout << "Good" <<endl;
    return 0;
}