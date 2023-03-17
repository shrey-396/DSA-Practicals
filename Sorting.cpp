#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin>>n;
    int x[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>x[i][j];
        }
    }
    int sel; cin>>sel;
   
    //--------------------bubble sort------------------------------------
    if(sel==1){
        bool swapped;
        int cnt1=0 , cnt2=0;
        for(int i=0;i<n-1;i++){
            swapped = 0;
            for(int j=0;j<n-i-1;j++){
                cnt1++;
                if(x[j][1]>x[j+1][1]){
                    swap(x[j][1],x[j+1][1]);
                    swap(x[j][0],x[j+1][0]);
                    swapped = 1;
                    cnt2++;
                }
            }
            if(swapped == 0)
            break;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<cnt1<<endl<<cnt2<<endl;
        cout<<x[0][0]<<","<<x[1][0];
    }
   
    //-----------------------selection sort---------------------------------
    if(sel==2)
    {
        int cnt1=0 , cnt2=0;
        for(int i=0 ; i<n-1 ; i++)
        {
            int min = i;
            for(int j=i+1;j<n;j++)
            {
                cnt1++;
                if(x[j][1]<x[min][1]){
                    min = j;
                }
            }
            if(min!=i){
                cnt2++;
                int temp = x[i][1];
                x[i][1] = x[min][1];
                x[min][1] = temp;

                int temp1 = x[i][0];
                x[i][0] = x[min][0];
                x[min][0] = temp1;
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
            cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<cnt1<<endl<<cnt2<<endl;
        cout<<x[0][0]<<","<<x[1][0];
    }
   
   
    return 0;
}
