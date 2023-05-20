// 搞一搞int...这里不用long long , 但是int的第31位可能是1，所以用unsigned，否则慢速乘法会爆
#include<cstdlib>
#include<iostream>
#include<fstream>
#define uint unsigned int
using namespace std;


uint ksc(uint a, uint b, uint modu) // 计算a*b mod (modu), 防止a*b爆int,采用模拟竖式
{
  uint ans = 0;
  a = a%modu;
  while(b)
    {
      if(b&1) ans = (ans+a)%modu;
      a=(a<<1) % modu;
      b>>=1;
    }
  return ans;
}

uint ksm(uint a, uint u, uint modu) // 计算a^u % modu
{
  uint ans = 1;
  while(u)
    {
      if(u&1) ans= ksc(ans,a,modu);
      u>>=1;
    }
  return ans;
}

uint miller_robin(uint p) // 判断p是否为质数
{
  if( p == 2) return 1;
  if( p%2 == 0 || p <= 1) return 0;
  uint u = p-1;
  uint t = 0;
  while((u&1) == 0) u>>=1,t++;
  uint kase = 5; 
  while(kase--)
    {
      uint a = rand() % (p-1) + 1;
      uint x = ksm(a,u,p);
      for(uint i = 1; i <= t; i++)
      {
        uint y = ksc(x,x,p);
        if( y == 1 && x != p-1 && x != 1) return 0;
        x = y;
      }
      if( x != 1) return 0;
    }
  return 1;
}

uint gcd(uint a, uint b)
{
  return b==0? a: gcd(b,a%b);
}

int f(int x, int modu, int c)
{
  return (ksc(x,x,modu) + c)%modu;
}

uint pollard_rho(int x)
{
  if(miller_robin(x)) return 0; // ERROR! is a prime!
  long long a = rand() % (x-1) +1;
  long long b = a;
 A: // 这里用了很不好的goto语句...
  long long c = rand() % 12345677;


  while(1)
    {
      a = f(a,x,c);
      b = f(b,x,c);
      b = f(b,x,c);

      if( a == b) // RING!
    goto A;
      uint d = gcd( abs(b-a), x);

      if( d> 1 && d < x)
    return d;
    }
}
      


int main()
 {
  uint N;
  cin>>N;

  uint t1 = pollard_rho(N);
 uint t2 = N/t1;
 cout<<max(t1,t2);
  return 0;
}
