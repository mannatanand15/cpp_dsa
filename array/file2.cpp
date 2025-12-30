//SORTING THE ZEROES AND ONES IMP QUESTION

#include<iostream>
#include<algorithm>
using namespace std;

void count(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for (int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount=zerocount+1;
        }
        if (arr[i]==1){
            onecount=onecount+1;
        }
        
    }
    //insertion
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
    for(int i=zerocount+1;i<size;i++){
        arr[i]=1;
    }
    //METHOD 2: using fill
    fill(arr,arr+zerocount,0);
    fill(arr+zerocount,arr+size,1);
}
int main(){
    int arr[]={0,1,0,0,1,0};
    int size=6;
    count(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    //METHOD-3: using sort function included under the header file <algorithm>
    sort(arr,arr+size);
}
