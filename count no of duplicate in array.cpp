#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,d;
cin>>n;
int a[n],i;
for(i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
d=0;
for(i=0;i<n-1;i++){
    if(a[i]==a[i+1])
   d++;
}
cout<<d;
}


