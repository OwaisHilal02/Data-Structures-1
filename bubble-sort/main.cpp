#include <iostream>

using namespace std;
void bubble(int a[],int n){
for(int i=0;i<n;i++){
for(int j=n-1;j>=i+1;j--){
if(a[j]<a[j-1])
swap(a[j],a[j-1]);
}}
}
int main(){
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++){
cin>>a[i];}
bubble(a,n);
for(i=0;i<n;i++){
cout<<a[i]<<" ";}
}
