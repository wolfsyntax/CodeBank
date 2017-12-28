#include <cmath>
#include <iostream>
#include <map>

using namespace std;
//AC
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	
	int a,b,c;
	
	while(cin >> a >> b >> c){
		map<int,string> oldest; oldest[a] = "Alvin\n"; oldest[b] = "Berto\n"; oldest[c] = "Carlo\n";
		cout << oldest[max(max(a,b),c)];
	}

    return 0;
}
