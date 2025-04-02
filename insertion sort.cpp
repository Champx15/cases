#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,3,2},i,j,key,n;
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i: a) cout<<i<<" ";
    return 0;
}