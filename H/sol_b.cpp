
#include <bits/stdc++.h>
typedef long long int lli; 
using namespace std;
 
int main()
{
	bool a[10];
	string s;
	
	cout<<"0123"<<"\n"; cout.flush();
	cin>>s;
	if (s=="GGGG") return 0;
	for (int i=0,j=0 ; i<4 ; i++,j++) a[j] = (s[i]!='R');
	
	cout<<"4567"<<"\n"; cout.flush();
	cin>>s;
	if (s=="GGGG") return 0;
	for (int i=0,j=4 ; i<4 ; i++,j++) a[j] = (s[i]!='R');
	
	cout<<"8901"<<"\n"; cout.flush();
	cin>>s;
	if (s=="GGGG") return 0;
	for (int i=0,j=8 ; i<2 ; i++,j++) a[j] = (s[i]!='R');
	
	// --------------------------------------------------------------
	
	string v; v.resize(4);
	for (int i=0,j=0 ; i<=9 ; i++) 
		if (a[i]) v[j++] = i+'0';
	
	// --------------------------------------------------------------
	
	bool f = false;
	do
	{
		cout<<v<<"\n"; cout.flush();
		
		cin>>s;
		f = (s[0]=='G') && (s[1]=='G') && (s[2]=='G') && (s[3]=='G');
		
		next_permutation( v.begin() , v.end() );
	} 
	while ( f==false );
	
    return 0;
}