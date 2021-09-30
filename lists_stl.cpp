#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void show(list<int>t)
{
	list<int>::iterator gt;
	for(gt=t.begin(); gt!=t.end(); gt++)
	{
		cout<<*gt<<"	";
	}
}

int main()
{
	list <int> g;
	
	for(int i=0; i<10;i++)
	{
		g.push_back(2*i);
	}
	
	show(g);
	
	g.reverse();
	cout<<endl;
	show(g);
}
