#include <bits/stdc++.h>
using namespace std;

int gcd (int a , int b)
{ 
	int GCD;
  vector <int> divisors ;
  for (int i = min(a,b); i>=1; --i){
   	if (a % i == 0 && b % i == 0){
   		GCD = i;
   		break;
   	}
}
   // int GCD = *(max_element(divisors.begin() , divisors.end()));
   return GCD;
}
int main() {
   int a,b;
   cin >> a >> b;
   cout << gcd(a,b);
}