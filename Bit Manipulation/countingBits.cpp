#include<bits/stdc++.h>
using namespace std;
int bits(int x){
        int c=0;
        while(x!=0){
            if(x&1)
            c++;

            x=x>>1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> temp;
        for(int i=0;i<=n;i++){
            temp.push_back(bits(i));
        }
        return temp;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> res = countBits(n);

        for(int i=0;i<=n;i++){
            cout<<res[i]<<" ";
        }

    }