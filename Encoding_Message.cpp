#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n%2==1)
	    {
	        for(int i=0;i<n-1;i=i+2)
	        {
	            swap(s[i],s[i+1]);
	        }
	    }
	    else
	    {
	        for(int i=0;i<=n-2;i=i+2)
	        {
	            swap(s[i],s[i+1]);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        int a=s[i];
	        s[i]=122-(a%97);
	    }
	    cout<<s<<endl;
	    t--;
	}
	return 0;
}