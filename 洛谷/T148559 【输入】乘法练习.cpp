#include<bits/stdc++.h> 
using namespace std;
int main ()
{
	long long number;
	long first;
	long second;
	long third;
	long one;//个位 
	long two;
	long three;
	long four;
	long five;
	long six;
	long seven;
	long eight;
	long nine;//最高位 
	cin>>number;
	nine = number / 100000000;
	eight = number / 10000000 - nine * 10;
	seven = number / 1000000 - eight * 10 - nine *100;
	first = nine * 100 + eight * 10 + seven * 1;
	//cout<<first;
	six = number / 100000 - first * 10;
	five = number / 10000 - first * 100 - six * 10;
	four = number / 1000 - first * 1000 - five * 10 - six * 100;
	second = six*100 + five * 10 + four * 1;
//	cout<<first<<" "<<second;
	three = number / 100 - second * 10 - first * 10000;
	two = number / 10 - second * 100 - three * 10 - first * 100000;
	one = number / 1 - second * 1000 - two * 10 - three * 100 - first * 1000000;
	third = three*100 + two * 10 + one * 1;
//	cout<<first<<" "<<second<<" "<<third;
	cout<<first * second * third;
//	cout<<five<<endl;
//	cout<<six;
//	cout<<first;
	
	
	return 0;
}
