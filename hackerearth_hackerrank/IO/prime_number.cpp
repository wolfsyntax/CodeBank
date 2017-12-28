#include <iostream>
#include <cstdio>
#include <cmath>

#define lli long long int
#define EPS 1e-7
//Accepted
using namespace std;

bool isPrime(lli n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(!(n%2) || !(n%3)) return false;
	lli s = (lli) (sqrt((double)(n)) + EPS);
	for(lli i = 5; i <= s; i+= 6)
		if(!(n%i)||!(n%(i+2))) return false;
	
	return true;
}

int main(){
	
	int prime[1001];
	
	for(int i = 0; i <= 1000; i++){
		prime[i] = (isPrime(i) == true ? 1 : 0);
	}

	int n; scanf("%d",&n);
	for(int i = 0; i < n; i++){
		if(prime[i] == 1)
			cout << i << ' ';
	} cout << endl;
	
	return 0;
}