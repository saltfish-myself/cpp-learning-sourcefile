#include <iostream>
#include <cstdio>
using namespace std;
//@start: 2020-08-09 17:52:19

int main()
{
    string s1,s2;
    int cnt=0;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++){
        if(s1[i]!=s2[i]){
            if(s1[i+1]=='o') s1[i+1]='*';
            else s1[i+1]='o';
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
