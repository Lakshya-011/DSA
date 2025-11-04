#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int m) {
    int temp,s=m+1;
    int e=arr.size()-1;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
    int main(){
        vector<int> arr={1, 2, 3, 4, 5, 6, 7};
        int m;cin>>m;

        reverseArray(arr,m);

        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }