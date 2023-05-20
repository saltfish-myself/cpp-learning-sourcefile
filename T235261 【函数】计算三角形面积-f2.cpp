
#include<iostream>
#include<cmath>
using namespace std;
double triangel_area(double a,double b,double c);
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<triangel_area(a,b,c)<<endl;
    return 0;
}
double triangel_area(double a,double b,double c)
{
    if(a+b>c || a+c>b || b+c>a)
    {
        double p = (a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    return 0.0;
}
