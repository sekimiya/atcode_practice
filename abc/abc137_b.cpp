#include <iostream>
#include <stdlib.h>
#include <vector> 
using namespace std;
int main(){
    int stones = 2000001;
    int K = 3; //黒く塗られたK個の石
    int X = 7; //黒い石の座標

    // cin >> K >> X;

    //+に長い
    string right_stone;

    int right_pos;

    for(int i=X; i<=X+K-1; i++){
        right_stone += to_string(i);
    }

    //-に長い
    string left_stone;
    
    for(int i=X; i>=X-K+1; i--){
        left_stone += to_string(i);
    }

    string stone_pos = right_stone + left_stone;

    vector <int> f_stone_pos;


    for(int i=0; i<stone_pos.size(); i++){
        char tmp = stone_pos[i];
        f_stone_pos.push_back(stoi(tmp));

    }
    
    

    cout << stone_pos << endl;

    return 0;
}