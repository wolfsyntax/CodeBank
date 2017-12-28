#include <iostream>
#include <cstdio>
#include <cstring>
/**
	Problem	: Count Numbers
	Link	: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-46/
	Verdict	: Accepted
	Author	: Wolf Syntax
**/
using namespace std;

int main(){
	
	int t,n; scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char word[10001];
		scanf("%s",word);
		int ctr = 0; bool prev, next; prev = next = false;
		for(int i = 0; i < n-1; i++){
			if(word[i] >= 48 && word[i] <= 57)
				prev = true;
			else prev = false;
			
			if(word[i+1] >= 48 && word[i+1] <= 57)
				next = true;
			else next = false;
			
			if(prev == true && next == false) ctr++;
			
		}
		if(word[n-1] >= 48 && word[n-1] <= 57) ctr++;
		
		printf("%d\n",ctr);
		//printf("%s %d\n",word,strlen(word));
	}
	return 0;
}