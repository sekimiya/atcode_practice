#include <iostream>
#include <stdlib.h>
#include <vector> 
#include <algorithm> 

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
    vector<int> f_stone_pos;

    //todo:重複文字を削除してsortしてintへ変換して出力

    return 0;
}