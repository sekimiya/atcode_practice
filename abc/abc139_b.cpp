#include<bits/stdc++.h>
#include <map>
using namespace std;

int main(){
int a;
int b;

//tap
cin >> a;
//kuti
cin >> b;
int tap = 1;

int ans;

while(tap < b ){
    tap += a-1;
    ans ++;
}

cout << ans << endl;

}