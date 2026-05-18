
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //upright pyramid
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted pyramid
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    //inverted hollow triangle
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            if(col==0||col==n-1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}
