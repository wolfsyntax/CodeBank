/**
	Author: Alpe, Jayson D. (Wolf Syntax)
	Problem Name: COIN
	
	(c) WolfSyntax. Syntax Error v5.2.10
	
**/

#include <iostream>

using namespace std;

int main(){
	
	int test;

	freopen("proba.in","r",stdin);

	int t;
	cin >> t; 

	while(t--){
		
		int n, sum, s, total = 0, needs = 0; cin >> n;
		int coins[n];

		for(int i = 0; i < n; i++){
			cin >> coins[i];
			total += coins[i];
		}
		
		cin >> sum; s = sum;
		if(total >= sum)
			for(int i = 0; i < n; i++){
				
				if(coins[i] == s){
					needs = 1;
					break;
				}

				
				if(sum > coins[i]){
					needs += coins[i];
					sum -= coins[i];
				}

				if(coins[i] >= sum){
					needs = 0;
					needs = s;
					coins[0];
				}

			}
		if(needs == 0) cout << "IMPOSSIBLE\n";
		else{
			cout << needs << endl;
		}
	}


	return 0;
}
