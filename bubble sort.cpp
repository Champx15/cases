#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,3,2},i,j,n;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
    for(int i: a) cout<<i<<" ";
    return 0;
}