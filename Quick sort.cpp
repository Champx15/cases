#include<iostream>
using namespace std;
int partition(int a[],int lb,int ub){
    int pivot=a[lb],start=lb,end=ub;
    while(start<end){
        while(pivot>=a[start])start++;
    while(pivot<a[end])end--;
    if(start<end) swap(a[start],a[end]);}
    swap(a[lb],a[end]);
    return end;
}
void quicksort(int a[],int lb,int ub){
    if(lb<ub){
        int partition_element=partition(a,lb,ub);
        quicksort(a,lb,partition_element-1);
        quicksort(a,partition_element+1,ub);
    }
}

int main(){
    int a[]={5,4,3,2};
    quicksort(a,0,3);
    for(int i: a){
        cout<<i<<" ";
    }
    return 0;
}