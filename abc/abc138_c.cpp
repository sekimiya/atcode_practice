#include <iostream>
#include <vector> 
using namespace std;
#include <bits/stdc++.h>

void test_data(int N, vector<double>v){
    N = 2;
    v = {3, 4};
    cout << v[0] << endl;
}

int input_data(int N, vector<double> v){
    cin >> N;

	for(int i=0; i<N; i++) {
		int x;
		cin >> x;
        v.push_back(x);
	};
}

double nabe(double x, double y){
    double ans = (x + y) / 2;
    return ans;
}

int main(){
    // int N = 3;
    // vector<double> v = {3, 4, 5};


    int N;
    vector<double> v;
    
    cin >> N;

	for(int i=0; i<N; i++) {
		int x;
		cin >> x;   
        v.push_back(x);
	};

    for(int i=0; i<v.size(); i++){
        // cout << v.at(i) << endl;
    }

    // vector<double> v_s;
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        // cout << v.at(i) << endl;
    }

    // double test_ans = nabe(x, y);
    double x = nabe(v.at(0), v.at(1));

    if(N>=3){
        for(int i=2; i<v.size(); i++){
        // cout << x << "+" << v.at(i) << endl;
        x = nabe(v.at(i), x);
        // cout << i << endl;
         }
        
        cout << x << endl;
        return 0;
    }
    else if(N<=2){
        cout << x << endl;
        return 0;
    }

    
   
    // ans.push_back(nabe(v.at(0), v.at(1)));
    // cout << "ans" << endl;
    // cout << x << endl;
    // ans.push_back( nabe(v.at(1), v.at(2)));

    // cout << test_ans << endl;
}