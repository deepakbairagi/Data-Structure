#include<bits/stdc++.h>
using namespace std;
void stockSpan(int arr[],int n)
{
	stack<int> s;
	s.push(0);
	cout<<1;
	for(int i=1;i<n;i++)
	{
		while(s.empty()==false && arr[s.top()]<=arr[i])
		{
			s.pop();
		}
		int span = s.empty()?i+1:i-s.top();
		cout<<span;
		s.push(i);
	}
	
}
int main()
{
	int stock[]={60,10,20,15,35,50};
	stockSpan(stock,6);
	return 0;
}
