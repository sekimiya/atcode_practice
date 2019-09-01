#include <iostream>
#include <stdlib.h>
#include <vector> 

using namespace std;

int main(){

    string s = "SSBC";
    cin >> s;

    int count = 0;

    cout << s[0]<< endl;
    
    for (int i=0; i<4; i++){
        // cout << s[i] << endl;
        for (int j=0; j<4; j++){
             if(s[j] == s[i]){
                 count ++;
                 if(count = 2){
                     break;
                 }
             }
        }
        
    }

    // cout << count <<endl;
    if (count > 2){
        cout << "Yes" << endl; 
    }
    else {
        cout << "No" << endl;
    }
    
}