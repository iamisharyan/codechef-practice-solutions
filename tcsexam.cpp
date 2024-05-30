#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a >>b >>c;
    int x,y,z;
    cin>>x >>y >>z;
    
    if(a+b+c > x+y+z){
        cout<<"dragon";cout<<endl;
    }else if(a+b+c < x+y+z){
        cout<<"sloth";cout<<endl;
    }else if(a>x){
        cout<<"dragon";cout<<endl;
    }
    else if(a<x){
        cout<<"sloth";cout<<endl;
    }
    else if(b>y){
        cout<<"dragon";cout<<endl;
    }
    else if(b<y){
        cout<<"sloth";cout<<endl;
    }
    else{
        cout<<"tie";cout<<endl;
    }

    }
}