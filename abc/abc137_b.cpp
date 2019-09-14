#include <iostream>
#include <stdlib.h>
#include <vector> 
#include <algorithm> 

using namespace std;
int main(){
    int stones = 2000001;
    int K = 3; //黒く塗られたK個の石
    int X = 7; //黒い石の座標

    cin >> K >> X;

    //+に長い
    // string right_stone;

    vector<int> ans;

    int right_pos;

    for(int i=X; i<=X+K-1; i++){
        ans.push_back(i);
    }

    //-に長い
    // string left_stone;
    
    for(int i=X; i>=X-K+1; i--){
        ans.push_back(i);
    }

    // sort(ans.begin(), ans.end());
    // unique(ans.begin(), ans.end());

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for(int i=0; i<ans.size(); i++) {
        cout << ans.at(i) << " ";
    }
    //todo:重複文字を削除してsortしてintへ変換して出力

    return 0;
}