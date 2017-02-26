/**
	Author: Alpe, Jayson D. (Wolf Syntax)
	Problem Name: COIN
	
	(c) WolfSyntax. Syntax Error v5.2.10
	
**/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int test;

	freopen("proba.in","r",stdin);

	int t;
	cin >> t; 

	while(t--){
		
		int n, sum, s, total = 0, needs = 0; cin >> n;
		int coins[n];
		int maxv = -1;
		for(int i = 0; i < n; i++){
			cin >> coins[i];
			maxv = max(maxv, coins[i]);
			total += coins[i];
		}
		
		cin >> sum; s = sum;
		
		if(total > sum){

			if(sum > maxv){
				sum -= maxv;
				needs++;
			}

			for(int i = n-1, j = 0; i > 0; i--){
				
				if(coins[i] != maxv && coins[i] == sum){
						needs++;
						break;
				}
				if(s == coins[j] || s == coins[i]) {needs = 1; break;}
				
				if(coins[j] > sum && coins[j] - sum != 0){
					needs += sum;
					break;
				}
				j++;
			}//end for
		}else if(total == sum){
			needs = n;
		}

		if(needs == 0) cout << "IMPOSSIBLE\n";
		else{
			cout << needs << endl;
		}
	}


	return 0;
}
