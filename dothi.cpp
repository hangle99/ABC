#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	vector <vector<int > > a;
	int x,y, k, m;
	cin>>x>>y;
	a= vector <vector<int > > (x, vector<int>(y,0));
	for (int i= 0; i< y; i++ )
	{
		cin>>k>>m;
		a[k-1][m-1] = 1;
		a[m-1][k-1] =1;
	}
	for (int i= 0; i< x; i++ )
	{
		for (int j= 0; j< x; j++ )		
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	set<int >A,B;
	for (int i= 0; i<x; i++)
	{
		for (int j=i; j<x; j++)
			if (a[i][j])
			{
				A.insert(i+1);
				B.insert(j+1);
			}
	}
	//cout<<A.size();
	return 0;
}