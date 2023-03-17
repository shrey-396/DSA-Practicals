#include<iostream> 
using namespace std;
int main()
{
int t;
cin>>t;
while(t-- >0)
{
int n,c,k;
cin>>n>>c>>k;
int w[n];
for(int i=0;i<n;i++)
{
cin>>w[i];
}
int max=0,c1=0,sum=0;
for(int j=0;j<n;j++)
{
sum=sum+w[j];
c1++;
if(sum<=c && sum>=k)
{
if(max<c1)
{
max1=c1;
}
}
else if(sum > c)
{
sum=0;
c1=0;
}
}
cout<<max<<endl;
}
}