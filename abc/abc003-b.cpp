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
    string s = "atocode";
    string t = "codatoo";

    const string ref = "atcoder";
    
    cin >> s >> t;

    for(int i=0; i<s.size(); i++){
        char s_tmp = s[i];
        char t_tmp = t[i];

        //即座に負けになるパターン
        //@なしの文字列単純不一致
        //単純不一致
        if(s_tmp != t_tmp && s_tmp!='@' && t_tmp!='@'){
            loser();
            return 0;
        }

        if(s_tmp != '@' && t_tmp != '@' && t_tmp != s_tmp){
            if(ref.find(t_tmp)==string::npos){
                loser();
                return 0;
            }
            else if(ref.find(s_tmp)==string::npos){
                loser();
                return 0;
            }
        }
        //sが@、tがatcode以外
        else if(s_tmp == '@' && t_tmp != '@' && t_tmp != s_tmp){
            if(ref.find(t_tmp)==string::npos){
                loser();
                return 0;
            }
            else if(t_tmp == s_tmp){

            }
            else{

            }
        }
        //tが@、sがatocode以外
        else if(s_tmp != '@' && t_tmp == '@' && t_tmp != s_tmp){
            if(ref.find(s_tmp)==string::npos){
                loser();
                return 0;
            }
            else if(t_tmp == s_tmp){

            }
            else{

            }
        }

        else if(s_tmp == t_tmp){

        }
    }

    winner();
    
    return 0;
}