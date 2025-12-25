//HALF PYRAMID
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    for(int row=0;row<n;row++){
        for (int col=0;col<row+1;col++){
            cout<<"* ";
        }
    cout<<endl;
    }
    //INVERTED HALF PYRAMID
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //HOLOW HALF PYRAMID
    int totalcolumns=n-1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            if(row==0||row==1||row==n-1){
                cout<<"* ";
            }
            else{
                if(col==0|| col=totalcolumns-1){
                    cout<<"* ";
                }
                else{
                    cout<<" ";
                }
                
                cout<<" ";
            }
        }
            
        cout<<endl;
    }
   
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }








} 
