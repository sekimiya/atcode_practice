#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){

    int a = -13;
    int b = 3;

    cin >> a >> b;
    // cout << a-b <<endl;
    // cout << a+b <<endl;
    // cout << a*b <<endl;

    vector <int> tmp;
    tmp.push_back(a+b);
    tmp.push_back(a-b);
    tmp.push_back(a*b);
    int max = * max_element(tmp.begin(), tmp.end());
    cout << max <<endl;
}