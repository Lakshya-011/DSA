#include<bits/stdc++.h>
using namespace std;

int fun(int n,int temp){
    if(n==0)
    return 0;
    int c=0;
    int r=n%10;
    if(r!=0 && temp%r==0)
    c++;

    return c+fun(n/10, temp);
}
int evenlyDivides(int n) {
        return fun(n, n);
    }
int main(){
    int n=20;
    int temp=n;
    cout<<evenlyDivides(n);
}