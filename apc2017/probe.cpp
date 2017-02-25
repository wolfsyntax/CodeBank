/**
  Author: Alpe, Jayson D.
  Problem Name: In-Gendered Species The Comeback
  (c) WolfSyntax. Syntax Error v5.2.10
  
  SAMPLE INPUT:
  
  2
  4
  Emtchi Female Yes
  Ohnj Male Yes
  Zajk Male No
  Chalah Female No
  6
  Emtchi Female Yes
  Ohnj Male Yes
  Zajk Male Yes
  Ialeen Female Yes
  Fz Male Yes
  Chalah Female No

  SAMPLE OUTPUT:
  
  Year 1: GPI = 1.00, Parity between males and females
  Year 2: GPI = 0.67, Disparity in favor of males

  
**/

#include <iostream>
#include <cstdio>

using namespace std;

int  main(){
	
	freopen("probe.in", "r", stdin);

	int test; cin >> test;
	for(int i = 1; i <= test; i++){
		
		int E, P = 0, P2 = 0; cin >> E;

		string names, gender, status;
		for(int j = 0; j < E; j++){
			cin >> names >> gender >> status;
			if(gender == "Male" && status == "Yes")
				P++;
			else if(gender == "Female" && status == "Yes")
				P2++;


		}
		double GPI = (double) P2 / (double) P;

		if(GPI == 1.0)
			printf("Year %d: GPI = %0.2f, Parity between males and females\n", i, GPI);
		else if(GPI > 1.0)
			printf("Year %d: GPI = %0.2f, Disparity in favor of females\n", i, GPI);
		else
			printf("Year %d: GPI = %0.2f, Disparity in favor of males\n",i,GPI);

	}

	return 0;
}
