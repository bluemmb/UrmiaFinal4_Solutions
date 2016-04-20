/*
<title> IN THE NAME OF GOD </title>
<p1> I'm faraz azadi ;) <p1>
<account's in algorithm's contest site> frez & frez_95 </account's>
<Github> frez-95 </Github>
*/
// code compile and test in g++(5.2.1) in Ubuntu
#define EPS 1e-7
#include<iostream>
using namespace std;

int main()
{
	int n,t;cin>>n>>t;
	string str;cin>>str;
	bool bol=true;t--;
	for(int i=0;i<(int)str.length();i++)
	{
		if(str[i]=='|')
		{
			if(t%2==0)
			{
				if(bol)
					str[i]='>';
				else str[i]='<';
				bol=!bol;
			}
		}
		else if(str[i]=='>')
		{
			if(t%4==0 || t%4==2)str[i]='|';
			else if(t%4==1)str[i]='<';
		}
		else
		{
			if(t%4==0 || t%4==2)str[i]='|';
			else if(t%4==1)str[i]='>';
		}
	}
	cout<<str;
	return 0;
}
