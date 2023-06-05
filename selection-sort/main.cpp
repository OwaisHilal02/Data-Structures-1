#include <iostream>
using namespace std;
void selection(int a[],int n){
int smallest,i,j;
for(j=0;j<n-1;j++){
smallest=j;
for(i=j+1;i<n;i++){
if (a[i]<a[smallest])
smallest=i;}
swap(a[j],a[smallest]);}
}
int main(){
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++)
cin>>a[i];
selection(a,n);
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}
