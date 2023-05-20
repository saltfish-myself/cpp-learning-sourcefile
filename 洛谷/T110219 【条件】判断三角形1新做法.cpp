#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    switch (A + B > C && A + C > B && B + C > A)
    {
        case 0:
		cout << "no";
		break;
        case 1:
		cout << "yes";
    }
    return 0;
}
