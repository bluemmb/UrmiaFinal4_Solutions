#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	string s;
	int ans[4];
	for (int i=0;i<10;i++)
	{
		cout<<i<<i<<i<<i<<endl;
		cout.flush();
		cin>>s;
		if (s[0]=='G')
			ans[0]=i;
		if (s[1]=='G')
			ans[1]=i;
		if (s[2]=='G')
			ans[2]=i;
		if (s[3]=='G')
			ans[3]=i;
	
	}
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	return 0;
} 