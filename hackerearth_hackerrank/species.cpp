#include <iostream>
#include <map>
#include <cstdio>
//AC
#define lli long long int
using namespace std;

int main() {

	int t, n; cin >> t;
	string sname, gender, enrol;
	
	for(int i = 1; i <= t; i++) {
		
		cin >> n;
		map<string,int> male; 
		map<string,int> female;
		
		while(n--) {
			cin >> sname >> gender >> enrol;
			if(gender == "Male" && enrol == "Yes") male[gender]++;
			if(gender == "Female" && enrol == "Yes") female[gender]++;
		}
		double r = double(male["Male"])/double(female["Female"]);

 		printf("Year %d: GPI = %0.2f, %s\n",i,r,(r == 1.0 ? "Parity between males and females" : (r > 1.0 ? "Disparity in favor of females" : "Disparity in favor of males")));
		
	}
	
	return 0;
}