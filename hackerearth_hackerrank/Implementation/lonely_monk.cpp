#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

/**
	Problem	: Lonely Monk
	Link	: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lonely-monk-code-monk/
	Verdict	: Accepted
**/
using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	
	int n, SIZE; scanf("%d",&n);
	
	vector<int>arr(n); 
	
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	//Code Snippets - GeekforGeeks
	long long int temp[2] = {1, 0};
	long long int sum = 0;
	
	for (int i=0; i<=n-1; i++)
    {
		sum = ( (sum + arr[i]) % 2 + 2) % 2;
        temp[sum]++;
    }
		
	printf("%lld\n",((temp[0]*(temp[0]-1)/2)+(temp[1]*(temp[1]-1)/2)));
	
	return 0;
}