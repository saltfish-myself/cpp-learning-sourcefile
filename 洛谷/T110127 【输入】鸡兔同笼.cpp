#include<iostream>
using namespace std;
int main ()
{
	int x,y,rabbit,hen;//'X'is the number of head,'Y'is the number of feet.
	cin>>x>>y;
	rabbit = x - y / 2;
	rabbit = rabbit / 4;
	hen = x - rabbit;
	cout<<hen<<endl;
	cout<<rabbit;
	return 0;
}
