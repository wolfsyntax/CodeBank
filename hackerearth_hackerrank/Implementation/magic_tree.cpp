#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
//#include <sstream>
#include <cmath>

#define lli long long int
/**
	Problem	: Magical Tree
	Link	: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/magical-tree/
	Accepted
**/

using namespace std;

int main(){
	
	lli n, t; string str; cin >> n;
	
	for(lli i = 0; i < n+1; i++){
		
		size_t pos, prev = 0;
		getline(cin,str);
		lli sum = -1, a, tmp, flag = 0;
		char op;
		
		while((pos = str.find_first_of("+-",prev)) != string::npos){
			tmp = atoi(str.substr(prev,pos-prev).c_str());
			if(flag == 0) sum = tmp;
			else{ 
				
				a = tmp;
				if(op == '-') sum -= a;
				else sum += a;
			}
			
			flag = 1; op = str[pos];
			
			prev = pos+1;
		}
		if(prev < str.length()){
			tmp = atoi(str.substr(prev,string::npos).c_str());
			if(op == '+') sum += tmp;
			else sum -= tmp;
			
		}
		
		if(i == 1) t=sum;
		else if(i > 1) t = max(t,sum);
		
	}
	cout << t << endl;
	return 0;
}