#include <iostream>
#include <vector> 
using namespace std;

int main(){
    
    // std::vector<int> vec;

    // for (int i=0; i<vec.size(); i ++){
    //     cout << vec.at(i) << endl;
    // }
    
    int l;
    vector<int> vec;

    while(cin>>l){
        vec.push_back(l);
        cout << vec.at(l);
    }

    int min = vec.at(1);
    for (int i=1; i<vec.size(); i++) {
        if(min>vec.at(i)){
            min = vec.at(i);
        }
    }
    cout << min << endl;
}