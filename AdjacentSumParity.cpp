#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0){

        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
}

}
