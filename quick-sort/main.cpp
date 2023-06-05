#include <iostream>

using namespace std;
int partition(int a[],int l,int h){
int P=a[l];
int i=l;
int j=h;
while(i<j){
while(a[i]<=P)
i++;
while(a[j]>P)
j--;
if(i<j){
swap(a[i],a[j]);}}
swap(a[l],a[j]);
return j;
}
void quick(int a[],int l, int h){
if(l<h){
int P= partition(a,l,h);
quick(a,l,P-1);
quick(a,P+1,h);
}
}
int main()
{
int n,L,R;
cin>>n;
int a[n],i;
for(i=0;i<n;i++)
cin>>a[i];
quick(a,0,n);
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}
