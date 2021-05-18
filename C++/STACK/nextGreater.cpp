#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(int arr[],int n)
{
	stack<int> s;
	vector<int> res (n);
	s.push(arr[n-1]);
	for(int i=n-1;i>=0;i--)
	{
		while(s.empty()==false && s.top()<=arr[i])
		{
			s.pop();
		}
		if(s.empty())
			res[i]=-1;
		else
			res[i]=s.top();
	
		s.push(arr[i]);
	}
	return res;
}
int main()
{
	int elem[]={1,3,2,4};
	vector<int> prt=nextGreater(elem,4);
	for(int i=0;i<4;i++)
	{
		cout<<prt[i]<<" ";
	}
	return 0;
}
