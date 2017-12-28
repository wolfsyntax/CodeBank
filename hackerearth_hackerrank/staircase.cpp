#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int p = n-1;
    for(int i = 0; i < n; i++){
        string space(p,' ');
        string pound(i+1,'#');
        cout << space << pound << endl;
        p--;
    }
    return 0;
}
