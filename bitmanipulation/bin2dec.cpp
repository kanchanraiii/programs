// To convert a binary number to decimal representation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int convert(string s){
    int len=s.length(), p2=1, num=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]=='1'){
            num+=p2;
        }
        p2*=2;
    }
    return num;
}

int main(){
    string s;
    cout<<"Enter a binary number:";
    cin>>s;
    int decimal = convert(s);
    cout<<"Decimal representation of "<<s<<" is: "<<decimal<<endl;
    return 0;
}