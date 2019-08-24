#include <iostream>
#include <vector> 

using namespace std;

void winner(){
    cout << "You can win" <<endl;
}

void loser(){
    cout << "You will lose" <<endl;
}

int main(){
    string s = "aoki";
    string t = "@@@@";
    const string ref = "atcoder";
    
    cin >> s >> t;
    
    // vector<int> target_at_s; 
    // vector<int> target_at_t;

    for(int i=0; i<s.size(); i++){
        char s_tmp = s[i];
        char t_tmp = t[i];
        if(s == t){
            winner();
            break;
        }

        else if(s_tmp=='@'){
            if(ref.find(t_tmp)!=string::npos){
                loser();
                break;
            }
        }

        else if(t_tmp=='@'){
            if(ref.find(s_tmp!=string::npos)){
                loser();
                break;
            }
        }
        else{
            winner();
            break;
        }
    }
    //  @の場所を探索
    // for(int i=0; i<s.size(); i++){
    //     auto tmp_s = s.at(i);
    //     auto tmp_t = t.at(i);        
    //     // cout << tmp_s << endl;
    //     if(tmp_s == '@'){
    //         target_at_t.push_back(i);
    //     }
    //     else if(tmp_t == '@')
    //     {
    //         target_at_t.push_back(i);
    //     }
    // }


    // if(target_at_s && target_at_t ==0){
    //     cout << "You can win" << endl;
    // }

    //最後にflagチェック
    // int flag = 0;
    
    // for(int i=0; i<s.size; i++){
    //     if(s == t){
    //         flag = 1;
    //     }

    //     else if(s[i] == t[i]){


    //     }

    //     for(int j=0; j<ref.size(); j++){
    //         if(){}
    //     }

    // }

    // if (flag == 1){
    //     cout << "You can win" <<endl;
    // }
    // else if(flag == 0){
    //     cout << "You can lose" <<endl;
    // }

   

    // for(int i=0; i<target_at_s.size(); i++){
    //     for(int j=0; j<ref.size(); j++){
    //         if(s.at(target_at_s.at(i)) != ref.at(j)){
                
    //         }
    //     }
    // }
    
    // cout << target_at_s.size() <<endl;
    // cout << target_at_t.size() <<endl;

    // vector<string> statement_s;
    // vector<string> statement_t;

    

    //@の有無の判定、ないならスルー
    // if(target_at_s.size()!=0){
    //     for(int j=0; j<target_at_s.size(); j++) {
    //         for(int k=0; k<ref.size(); k++) { 
    //             string tmp_state = 
    //             statement_s.push_back(tmp_state);
    //         }
    //     }
    // }

    return 0;
}