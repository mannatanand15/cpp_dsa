#include<iostream>
#include<cmath>
using namespace std;
// to print counting from 1 to 100
int counting(int a)
{
    for(int i=a;i<=100;i++){
        cout<<i<<endl;
    }
}
// to find simple interest
int simple(int principle,int rate,int time){
    int answer=(principle*rate*time)/100;
    cout<<answer<<endl;
}
//to print prime numebers between 1 to 100


//to convert decimal to binary number system(using division method)
int convert(int n){
    int binary=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        binary=bit*pow(10,i++)+binary;
        n=n/2;
        cout<<binary<<endl;
    }
}
// binary to decimal
int binarytodecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit=n%10;
        decimal=decimal+bit*pow(2,i++);
        n/=10;
    }
    return decimal;
}
//calling the functions
int main(){
    int n;
    cin>>n;
    counting(1);
    simple(100,20,30);
    convert(n);
}
