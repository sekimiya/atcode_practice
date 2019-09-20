#include<bits/stdc++.h>
#include <map>
using namespace std;

int main(){
string S;
string T;

cin >> S;
cin >> T;
int ans;

for(int i=0; i<3; i++){
    if(S[i] == T[i]){
        ans ++;
    }
}

cout << ans << endl;

}