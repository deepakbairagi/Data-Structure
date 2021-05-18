#include<bits/stdc++.h>
using namespace std;
void printPrevGreater(int arr[],int n)
{
	stack<int> s;
	s.push(arr[0]);
	cout<<-1;
	for(int i=1;i<n;i++)
	{
		while(s.empty()==false && s.top()<=arr[i])
		{
			s.pop();
		}
		int span = s.empty()?-1:s.top();
		cout<<" "<<span;
		s.push(arr[i]);
	}
	
}
int main()
{
	int stock[]={20,30,10,5,15};
	printPrevGreater(stock,5);
	return 0;
}
