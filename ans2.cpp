#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n<=1)
		return n;
	else 
		return n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	
	char ch[n];
	int i,j;
	for(i=0;i<n;i++)
		cin>>ch[i];
	
	sort(ch,ch+n);
	
	char str[n+1];
	cin>>str;
	
	int ans=0;
	for(j=0;str[j]!='\0';j++)
	{
		for(i=0;i<n;i++)
		{
			if(str[j]!=ch[i])
				ans=ans+fact(n-j-1);
			else if(str[j]==ch[i])
				break;
		}
	}
	cout<<ans;
	return 0;
}
