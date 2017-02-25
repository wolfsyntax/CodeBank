#include <iostream>
#include <cstring>

#define LL long long int

using namespace std;

int main(){
	
	freopen("probf.in","r",stdin);

	LL k, n; cin >> k;

	for(LL i = 1; i <= k; i++){
		
		cin >> n;
		
		LL path[n], ctr = 0;
		
		memset(path,0,sizeof(path));
		
		LL euler[n][n];

		for(LL j = 0; j < n; j++)
			for(LL k = 0; k < n; k++){
				cin >> euler[j][k];
				path[j] += euler[j][k];
			}

		for(LL j = 0; j < n; j++)
			if(path[j] % 2== 0) ctr++;
		cout << "CASE " << i << ": ";
		if(ctr != n) cout << "NO EULERIAN PATH CAN BE FOUND\n";
		else cout << "EULERIAN PATH EXISTS\n";


	}


	return 0;
}
