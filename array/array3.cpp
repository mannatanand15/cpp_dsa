#include<iostream>
using namespace std;
void printpairs(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
bool checktwosum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                //found a pair whose sum is equal to target
                return true;
            }
        }
    }
    //when no such pair is found whose sum is equal to target
    return false;
}
//using pair datatype instead of void 
pair<int,int> checktwosum(int arr[],int size,int target){
    //assuming if answet not found the pair is (-1,-1)
    pair<int,int> ans=make_pair(-1,-1);
    //check all pairs
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums up target toh define values of each
                //METHOD-1 OF PRINTING
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            //yaha hi agar hume all pairs which give this sum print krna ho toh yeh 
            //alag se print krwa lenge in loop only
            //METHOD-2 OF PRINTING
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
    //agar koi pair nhi mila toh (-1,-1) return ho jayega as answer
    return ans;
}
int main(){
    int arr[]={10,20,5,15,30};
    int size=5;
    printpairs(arr,size);
    bool ans=checktwosum(arr,size,35);
    if(ans==true){
        cout<<"pair found"<<endl;
    }
    if(ans==false){
        cout<<"pair not found"<<endl;
    }
    pair<int,int> ans=checktwosum(arr,size,35);
    //to print results after calling the function
    //we use two && for defining the and operator
    if(ans.first==-1 && ans.second==-1){
        cout<<"pair not found "<<endl;
    }
    else{
        cout<<ans.first<<","<<ans.second<<endl;
    }
}
