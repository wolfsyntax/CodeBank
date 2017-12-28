#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/**
#	Problem	:	plus-minus
#	Link	:	https://www.hackerrank.com/challenges/plus-minus/problem	
#	Verdict	:	AC
**/

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
	int positive,negative, neutral; positive = negative = neutral = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
	   if(arr[arr_i] > 0) positive++;
	   else if(arr[arr_i] < 0) negative++;
	   else neutral++;
	   
    }
	
	printf("%.6f\n%.6f\n%.6f\n",(double)positive/(double)n,(double)negative/(double)n,(double)neutral/(double)n);
    
	return 0;
}
 