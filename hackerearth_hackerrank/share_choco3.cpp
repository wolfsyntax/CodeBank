#include <cstdio>
//AC
using namespace std;

int main(){

	long long int n,a,b,c;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%s",(a*b > c ? "World record!\n": (a*b < c ? "Try again next time :(\n": "Joint world record...\n")));	
	}
	
	return 0;
}