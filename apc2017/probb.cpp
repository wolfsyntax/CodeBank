/**
	Author: Alpe, Jayson D. (Wolf Syntax)
	Problem Name: HAND SHAKES AGAIN
	
	(c) WolfSyntax. Syntax Error v5.2.10
	
	SAMPLE INPUT:
	4
	3
	89
	22
	104
	
	SAMPLE OUTPUT:
	3
	3916
	231
	5356
**/

#include <iostream>

using namespace std;

#define LL long long int

int main(){
	
	int test;

	freopen("probb.in","r",stdin);

	int t;
	cin >> t; 

	while(t--){
		LL n; cin >> n;
		cout << (n * (n-1))/2 << endl;
	}


	return 0;
}
