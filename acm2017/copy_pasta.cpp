#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
/**
	Accepted
**/
using namespace std;

int main(){
	
	int t, n; scanf("%d",&t);
	while(t--){
		
		scanf("%d",&n);
		string tmp;
		set<string>pasta;
		
		map<string,int>baked;
		map<string,int>inventory;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			if(baked[tmp] == 1)
				inventory[tmp]++;
			
			if(baked[tmp] == 0)
				baked[tmp] = 1;
				
			pasta.insert(tmp);
						
		}
		
		vector<string> vec(pasta.begin(),pasta.end());
		
		if(inventory.size() == 0) 
			cout << "0" << endl;
		else if(inventory.size() == 1)
			cout << inventory[tmp] << endl;
		else{
			
			int prev = 0, next = 1, dup = 0;
			
			for(int i = 0; i < vec.size()-1; i++){
				if(inventory[vec[prev]] == inventory[vec[next]]){
					dup += inventory[vec[prev]];
					inventory[vec[prev]] = inventory[vec[next]] = 0;
					break;
				} else {
					
					if(inventory[vec[prev]] == 0) prev += 2;
					if(inventory[vec[next]] == 0) next++;
					
					if(inventory[vec[prev]] != inventory[vec[next]]){
						
						if(inventory[vec[prev]] > inventory[vec[next]]){
							inventory[vec[prev]] -= inventory[vec[next]];
							dup += inventory[vec[next]];
							inventory[vec[next]] = 0;
						}else {
							inventory[vec[next]] -= inventory[vec[prev]];
							dup += inventory[vec[prev]];
							inventory[vec[prev]] = 0;
						}
					}
					
					
				}
					
			}
			if(vec.size() > 1){
				if(inventory[vec[next]] != 0) dup += inventory[vec[next]];
				if(inventory[vec[prev]] != 0) dup += inventory[vec[prev]];
			}
			cout << dup << endl;
		}
		
	}
	
	return 0;
}
