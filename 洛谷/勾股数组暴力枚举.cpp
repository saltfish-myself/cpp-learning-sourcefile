#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)                    //����ע��j��i��ʼ����Ϊ�������������ظ�������
        {
            for(k=j;k<=n;k++)                //����Ҳ�Ǵ�j��ʼ
            {
                if(i*i+j*j==k*k)             //^����ʾ�η�����Ҫֱ�����ôη�Ҫ��ǰ��ͷ�ļ� 
                                             // #include<cmath>��Ȼ����pow������
                                            //�������ˣ���ס��עֻ����һ����һ��Ҫ��������ע
                        cout << "(" <<i<<","<<j<<","<<k<<")"<< endl;
 
            }
        }
    }
    return 0;
}
 
