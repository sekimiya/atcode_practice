#include <iostream>
#include <vector> 
using namespace std;

int main(){
	vector<double> a; // <T>でT型のvector

	int n = 2;
	cin >> n;

	while(n--) {
		int x;
		cin >> x;
		a.push_back(x);
	}
    
    double recip;

    for(int i=0; i<a.size(); i++){
        recip  += 1/a.at(i);
    }

    double f_recip;

    f_recip = 1/recip;

    cout<< f_recip <<endl;

}