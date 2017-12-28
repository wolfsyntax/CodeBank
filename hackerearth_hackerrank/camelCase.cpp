#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>
//AC
using namespace std;


int main(){
    string s;
    cin >> s;
	
	int ctr = 1, ipos = s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	while(ipos != string::npos){
		ctr++;
		ipos = s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ",ipos+1);
	}
	cout << ctr << endl;
    return 0;
}
