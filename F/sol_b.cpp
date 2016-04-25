
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

char s[100005];
char h[100005]; int hi = 0;

int main()
{
	int n; cin>>n;
	cin>>s;
	
	bool first = true;
	for (int i=0 ; i<n ; i++)
	{
		h[hi] = s[i];
		hi++;
		
		if ( hi >= 4 && h[hi-4]=='W' && h[hi-3]=='A' && h[hi-2]=='T' && h[hi-1]=='A' )
		{
			hi -= 4;
			if ( hi && h[hi-1]!=' ' )
			{
				h[hi] = ' ';
				hi++;
			}
		}
	}
	
	if ( h[hi-1] == ' ' ) hi--;
	h[hi] = '\0';
	
	cout<<h<<"\n";
	
	return 0;
}