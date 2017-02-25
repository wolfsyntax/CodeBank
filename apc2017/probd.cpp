#include <iostream>
#include <cmath>

using namespace std;

#define LL long long int

int main(){
	
	LL test;
	LL x, y, r;

	freopen("probd.in","r", stdin);

	cin >> test;
	while(test--){
		int scase = 0, x1, y1; char c;
		cin >> x >> y >> r;
		cin >> scase;
		
		int healthy = 0, infected = 0;

		for(int i = 0; i < scase; i++){
			//cin.ignore();
			cin >> c >> x1 >> c >> y1 >> c;
//			cout << "X1 " << x1 << " and " << y1 << endl; 
			int distance = pow((x1-x),2) + pow((y1-y),2);

			if(distance < pow(r,2)) infected++;
			else healthy++;

		}

		cout << healthy << " HEALTHY " << infected << " INFECTED\n";

	}

	return 0;
}
