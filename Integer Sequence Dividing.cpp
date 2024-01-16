// https://codeforces.com/contest/1102/problem/A
int main(){
 int n,t,j; 
 t = 0;
 cin >> n;
 if (n%2 == 0) {
    for (int i = 1; ;i++){
    j = n/2 - i;
    if(i == j){
        t--;
      } 
    if (j<=0){
    break;
  } t++;
    // cout << t << endl;
  }
   cout << ((t%2 == 0) ? t/2:(t+1)/2);
 }
 else {
    cout << 0;
 }

}
