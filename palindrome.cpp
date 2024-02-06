#include <iostream>
using namespace std;

bool palindrome(int n)
{   int m = n;
    int reversedNumber = 0;
    while (m!=0){
        reversedNumber = reversedNumber*10 + m%10;
        m = m/10;
    }
    return (reversedNumber == n) ? true:false;
}

int main(){
    cout << palindrome(1);
}

