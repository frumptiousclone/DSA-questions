#include <bits/stdc++.h>
using namespace std;

int i = 0;
void printNo(int n){
 	if (i == n) return;
  	cout << i << endl;
  	i++;
 	printNo(n);
}

