
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int n,m;
pair<int,int> p[100005] , q[100005];
lli lp = 0 , lq = 0;

int main()
{
	cin>>n;
	for (int i=0 ; i<n ; i++)
	{
		lli c,v;
		cin>>c>>v;
		lp += c;
		p[i] = make_pair(c , v);
	}
	
	cin>>m;
	for (int i=0 ; i<m ; i++)
	{
		lli c,v;
		cin>>c>>v;
		lq += c;
		q[i] = make_pair(c , v);
	}
	
	int ans = 0;
	if ( lp > lq )
	{
		ans = 1;
	}
	else if ( lp < lq )
	{
		ans = -1;
	}
	else
	{
		for (int i=0 ; i<min(n,m) ; i++)
		{
			if ( p[i].second > q[i].second )
			{
				ans = 1;
				break;
			}
			else if ( p[i].second < q[i].second )
			{
				ans = -1;
				break;
			}
			else
			{
				if ( p[i].first == q[i].first ) continue;
				if ( p[i].first > q[i].first )
				{
					if ( p[i].second > q[i+1].second ) ans = 1;
					else ans = -1;
					break;
				}
				else
				{
					if ( p[i+1].second > q[i].second ) ans = 1;
					else ans = -1;
					break;
				}
			}
		}
	}
	
	if ( ans == 1  ) cout<<"a>b\n";
	if ( ans == 0  ) cout<<"a=b\n";
	if ( ans == -1 ) cout<<"a<b\n";
	
	return 0;
}