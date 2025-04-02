#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,3,4,5},target=6,i,j,k;
  int size=sizeof(a)/sizeof(a[0]);
  for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        k=a[i]+a[j];
        if(target==k){
          cout<<"["<<i<<","<<j<<"]";
          
        }
        
    }
  }
  
} 