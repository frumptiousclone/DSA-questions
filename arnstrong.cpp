#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	int count = 0;
	int m = n;
	while (m!=0) {
		m = m/10;
		count++;
	} cout << count << endl;
    int armstrongValue = 0;
    int p = n;
	while (p!=0) {
		armstrongValue = armstrongValue + pow((p%10) , count);
		p = p/10;
	} cout << armstrongValue << endl;
	return armstrongValue == n ? true:false;
}
int main(){
	cout << checkArmstrong(18);
}