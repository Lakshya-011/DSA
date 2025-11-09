#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cout<<"Enter no in binary: ";
    cin>>n;

    int c=0;
    int c1=0;
    int i=0;
    while(i<n.size()){
        if(n[i]=='1')
        c++;
        else
        c1++;

        i++;
    }
    cout<<"Total SetBit : "<<c<<endl;
    cout<<"Total UnsetBit :" <<c1; 
}