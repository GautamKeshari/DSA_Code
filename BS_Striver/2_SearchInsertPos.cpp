#include<bits/stdc++.h>
int searchInsert(vector<int>& v, int m)
{
	// int x=lower_bound(v.begin(), v.end(), m);  => wrong because it returns only iterator
	int x=lower_bound(v.begin(), v.end(), m)-v.begin(); 
	return x;
}