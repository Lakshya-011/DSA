#include<bits/stdc++.h>
using namespace std;

int main(){
    string s=" hello i am lakshya";
    int vcount=0;
    int count=0;
    for(int i=0;i<s.size();i++){
        char c=tolower(s[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vcount++;
        }
        else if(c!=' ')
        count++;
    }
    cout<<"Vowels: "<<vcount<<endl;
    cout<<"Consonants: "<<count<<endl;
}