#include<bits/stdc++.h>
using namespace std;
typedef unsigned ll;
ll arr[1000][1000] ;
ll gridTraveler(int m,int n){
    if(m==1 && n==1)return 1;
    else if(m==0||n==0)return 0;
    else if(arr[m][n]!=0)return arr[m][n];
    else{
        arr[m][n]=arr[n][m]=gridTraveler(m-1,n)+gridTraveler(m,n-1);
        return arr[m][n];
    }
}

int main()
{
    int n,m;

    while(1){
       cin>>m>>n;
       cout<<gridTraveler(m,n)<<endl;;
    }
}
