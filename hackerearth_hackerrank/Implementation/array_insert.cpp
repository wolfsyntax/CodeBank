#include <iostream>
#include <cstdio>
/**
	Problem	: Array Insert
	Link	: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/
	Verdict	: Accepted
	Author	: Wolf Syntax
**/
using namespace std;
int main(){
	
	long int n, q; scanf("%ld%ld",&n,&q);
	long int arr[n];
	for(int i = 0; i < n; i++) scanf("%ld",&arr[i]);
	long int id, key, val;
	for(int i = 0; i < q; i++){
		scanf("%ld%ld%ld",&id,&key,&val);
		if(id == 1) arr[key] = val;
		else{
			long int sum = 0;
			for(int i = key; i <= val; i++) {
				sum += arr[i];
			}
			printf("%ld\n",sum);
		}
	}

	return 0;
}