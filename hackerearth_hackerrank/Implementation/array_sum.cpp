#include <iostream>
#include <cstdio>
#define lli long long int

using namespace std;
/**

	Problem	:	Array Sum
	Link	:	https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/
	Verdict	:	Accepted
	Author	:	Wolf Syntax

**/

int main(){

	lli n, sum; 
	while(cin >> n){
		lli arr[n]; sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += (long long int)(arr[i]);
		}
		cout << (long long int)sum << endl;
	}
	return 0;
}