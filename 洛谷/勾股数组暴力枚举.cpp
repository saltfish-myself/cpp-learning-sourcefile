#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)                    //这里注意j从i开始，因为勾股数不能有重复的数字
        {
            for(k=j;k<=n;k++)                //这里也是从j开始
            {
                if(i*i+j*j==k*k)             //^不表示次方，想要直接运用次方要在前加头文件 
                                             // #include<cmath>，然后用pow（，）
                                            //完了完了，记住标注只能在一行下一行要重新做标注
                        cout << "(" <<i<<","<<j<<","<<k<<")"<< endl;
 
            }
        }
    }
    return 0;
}
 
