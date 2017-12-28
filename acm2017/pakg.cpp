#include <iostream>

using namespace std;
//Correct
int main(){

	int n,ctr;
	while(cin >> n){
		ctr = 1;
		for(int nx = 0; nx < n; ctr++){
			for(int i = 0; i < ctr; i++){
				if(nx < n) cout << "PAK\n";
				nx++;
			}
			
			for(int i = 0; i < ctr; i++){
				if(nx < n) cout << "GANERN\n";
				nx++;
			}
		}
	}

	return 0;
}
