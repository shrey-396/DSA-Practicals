#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int x;
cin>>x;
int i;

for(i=0;i<n;i++)
{
if(arr[i]==x)
{
cout<<i<<endl;
cout<<i+1<<endl;
break;
}
}
if(i==n)
{
cout<<"Element "<< x <<" is not present in the array"<<endl;
cout<<n;
}
return 0;
}