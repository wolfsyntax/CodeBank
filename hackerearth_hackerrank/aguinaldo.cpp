#include <iostream>
#include <cstdio>
using namespace std;
//AC
int main(){

	long long int t, n,p; scanf("%ld",&t);
	while(t--){
		scanf("%lld%lld",&n,&p);
		
		printf("Php %lld\n",n*p);
	}
	

	return 0;
}