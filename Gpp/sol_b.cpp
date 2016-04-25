
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int n,n2;
vector<int> v; 

bool check( int z )
{
	multiset<int> s;
	for (int i=0 ; i<n2 ; i++) s.insert( v[i] );
	
	
	vector< pair<int,int> > ans;
	for (int i=0 ; i<n ; i++)
	{
		int m = (*s.begin());
		if ( z % m ) return false;
		
		int c = z / m;
		s.erase( s.begin() );
		
		multiset<int>::iterator si = s.find( c );
		if ( si == s.end() ) return false;
		s.erase( si );
		
		ans.push_back( make_pair( m , c ) );
	}
	
	
	cout<<"Yes\n";
	for (int i=0 ; i<n ; i++)
		cout<<ans[i].first<<" "<<ans[i].second<<"\n";
	
	return true;
}

int main()
{
	cin>>n; n2 = n*2;
	v.resize(n2);
	
	int mx = -1 , mn = 1e9 + 1;
	int zero = 0;
	for (int i=0 ; i<n2 ; i++)
	{
		cin>>v[i];
		mx = max( mx , abs(v[i]) );
		mn = min( mn , abs(v[i]) );
		zero += (v[i]==0);
	}
	
	if ( zero>0 )
	{
		if ( zero < n ) { cout<<"No\n"; return 0; }
		
		vector<int> p;
		zero = n;
		for (int i=0 ; i<n2 ; i++)
		{
			if ( v[i]==0 && zero ) { zero--; continue; }
			p.push_back( v[i] );
		}
		
		cout<<"Yes\n";
		for (int i=0 ; i<n ; i++)
			cout<<"0 "<<p[i]<<"\n";
		
		return 0;
	}
	
	if ( check( mx*mn ) ) return 0;
	if ( check( -1*mx*mn ) ) return 0;
	
	cout<<"No\n";
	
	return 0;
}