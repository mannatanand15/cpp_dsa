#include<iostream>
using namespace std;
//FUNCTION FOR PRINITNG ALL THE TRIPLETS 
void printalltriplets(int arr[],int size){
    for(int i=0;i<size;i++){ //yeh loop 0 to n chal rha hai toh n time complexity
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
}
void threesum(int arr[],int size,int target){
    for(int i=0;i<size;i++){ 
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int target=70;
    printalltriplets(arr,size);
    threesum(arr,size,target);
    
}
