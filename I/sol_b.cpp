
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

#define mp make_pair

lli dis( lli x , lli y )
{
	return x*x + y*y;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,q; 
	
	vector< pair<lli,lli> > f;
	vector< pair<lli,lli> > b;
	
	multimap<lli,int> foods;
	set< pair<lli,int> > blacks;
	
	vector< pair<lli,lli> > ans;
	
	// --------------------------
	
	cin>>n;
	for (int i=0 ; i<n ; i++)
	{
		lli x , y;
		cin>>x>>y;
		f.push_back( mp(x,y) );
		foods.insert( mp(dis(x,y) , i) );
	}
	
	cin>>m;
	for (int i=0 ; i<m ; i++)
	{
		lli x , y;
		cin>>x>>y;
		b.push_back( mp(x,y) );
		blacks.insert( mp(dis(x,y) , i) );
	}
	
	cin>>q;
	while (q--)
	{
		char c; lli i,x,y;
		cin>>c;
		
		if ( c == 'F' )
		{
			lli nearestBlack = blacks.begin()->first;
			lli maxDis = nearestBlack / 4; 				// 2^2 = 4
			
			multimap<lli,int>::iterator s = foods.upper_bound( maxDis );
			if ( s == foods.begin() ) 
				break;
			
			s--;
			int id = s->second;
			ans.push_back( mp( f[id].first , f[id].second ) );
			foods.erase( s );
			
			if (foods.size() == 0)
				break;
		}
		else
		{
			cin>>i>>x>>y; i--;
			
			lli d = dis( b[i].first , b[i].second );
			set< pair<lli,int> >::iterator s = blacks.find( mp( d , i ) );
			blacks.erase( s );
			
			lli new_d = dis( x , y );
			b[i].first = x , b[i].second = y;
			blacks.insert( mp( new_d , i ) );
		}
	}
	
	cout<<ans.size()<<"\n";
	for (int i=0 ; i<ans.size() ; i++)
		cout<<ans[i].first<<" "<<ans[i].second<<"\n";
	cout<<"Go\n";
	
	return 0;
}