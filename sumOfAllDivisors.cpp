#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
	int sumOfAllDivisors = 0;
	for (int j = 1; j<=n; j++){
       for (int i = 1; i<=sqrt(j); i++){
		   if (j%i == 0 && j/i == i) {
			   sumOfAllDivisors = sumOfAllDivisors + i;
		   } else if (j%i == 0) sumOfAllDivisors = sumOfAllDivisors + (i + j/i);
		}
	}
    return sumOfAllDivisors;
}
int main() {
    cout << sumOfAllDivisors(10);
    return 0;
}