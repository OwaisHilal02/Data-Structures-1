 #include <iostream>
    using namespace std;
    void insertion (int a[], int n){
    int j,i,key;
    for(j=1;j<n;j++){
    key = a[j];
    i = j-1;
    while(i>=0 && a[i]> key){
    a[i+1] = a[i];
    i = i-1;}
    a[i+1] = key;}// 3amaliet el hasher
    }
    int main()
    {
    int n;
    cin>>n;
    int key,i,j,a[n];
    for(j=0;j<n;j++){
    cin>>a[j];}
    insertion (a,n);
    for(j=0;j<n;j++){
    cout<<a[j]<<" ";}
    }
