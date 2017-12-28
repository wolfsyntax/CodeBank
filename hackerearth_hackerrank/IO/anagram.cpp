#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
//Accepted
using namespace std;

int main(){

	int t; string a,b; cin >> t;
	
	while(t--){
		cin >> a >> b;

		map<char,int> counts;
		set<char> del;
		int a_len = a.length(), b_len = b.length();
		
		for(int i = 0; i < a.length(); i++){
			for(int j = 0; j < b.length(); j++){
				if(a[i] == b[j]) {
					a_len--;
					b_len--;
					b.erase(j,1);
					break;
				}
			}
		}
		cout << (a_len + b_len) << endl;
	}
	
	return 0;
}
