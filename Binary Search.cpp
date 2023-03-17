#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int n; cin>>n;
int x[n][2];
for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)
{
cin>>x[i][j];
}
}
int key; cin>>key;
int s=0,e=n-1,mid=(s+e)/2,cnt=0;
while(s<=e)
{
cnt++;
if(x[mid][0]==key)
{
cout<<x[mid][1]<<endl;
cout<<cnt;
break;
}
else if(x[mid][0]<key)
{
s = mid + 1;
}
else
{
e = mid - 1;
}
mid = (s+e)/2;
}
if(s>e)
{
cout<<"Not submitted";
}
return 0;
}