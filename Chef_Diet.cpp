#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=0,index=0;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(c+a[i]-k<0)
	        {
	            ans=0;
	            index=i+1;
	            break;
	        }
	        if(c+a[i]-k>=0)
	        {
	            c=(c+a[i])-k;
	            ans=1;
	        }
	    }
	    if(ans==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<" "<<index<<endl;
	}
	return 0;
}