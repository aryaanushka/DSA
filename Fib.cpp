#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fibon(n);
//     n--;
//     int ans;
//     cout<<ans<<" ";
// return 0;
// }


// int fibon(int n){
//     if(n==0)
//     return 0;

//     if(n==1) 
//     return 1;

//     int ans=fibon(n-1)+(n-2);
//     return ans;
// }

int fib(int n);

int main(){
    int n;
    cin>>n;

    int ans=fib(n);
    cout<<ans<<" ";
    return 0;

}

int fib(int n){
    if(n==0)
    return 0;

    if(n==1) return 1;

   int ans=fib(n-1)+fib(n-2);
   return ans;

}
