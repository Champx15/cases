#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,3,2},i,j,n;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++){
        int  min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j;
        }
        if(min!=i) swap(a[min],a[i]);
    }

    for(int i: a) cout<<i<<" ";
    return 0;
}