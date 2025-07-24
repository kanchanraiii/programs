// To convert a decimal number to binary representation
// TC -> Log(n) | SC -> Log(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string convert(int n){
    string res="";
    while(n>0){
        if(n%2==0){
            res+='0';
        }
        else{
            res+='1';
        }

        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
    string binary =convert(n);
    cout<<"Binary representation of "<<n<<" is: "<<binary<<endl;
    return 0;
}