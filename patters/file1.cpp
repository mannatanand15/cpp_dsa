 #include<iostream>
using namespace std;
// int m=0;
int main(){

//     //SQUARE PATTERN
//     //4 rows and har row mein 4 stars
//     //total rows=4
//     //total column=4
//     //row=outer
//     //col=inner

//     //outer loop 
    for (int row=0;row<4;row++){
        //inner loop run krungi
        for (int col=0;col<4;col++){
            cout<<"* ";
        }
        cout<<endl;   //line change krne ke liye
    }
//     //RECTANGLE PATTERN
     int length,width; //declaring a variable
    cout<<"enter length=";
    cin>>length;
    cout<<"enter width=";
    cin>>width;
    for (int row=0;row<length;row++)
    {
    for (int col=0;col<width;col++){
        cout<<"* ";
        }
        cout<<endl;
    }
//     //HOLOW RECTANGLE
//     //outer-rows
    for(int row=0;row<length;row++){
        //inner-columns
        for(int col=0;col<width;col++){
            if(row==0||row==length-1){
                cout<<"*";
            }
                //middle rows
            else{ 
                if(col==0||col==width-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";

                }
            
            }
        }
    }
        cout<<endl;

    }
    //inner-columns

//HOLLOW SQUARE
int side;
cout<<"enter length of side"<<endl;
cin>>side;

//OUTER LOOP=rows
for(int rows=0;rows<side;rows++){
    //INNER LOOP -columns
    for(int col=0;col<side;col++){
        if (rows==0|| rows==side-1){
            cout<<"*";
        }
        else{
            //middle rows
            if(col==0||col==side-1){
                cout<<"*" ;
            }
            else{
                cout<<" ";
            }
            
        }
    }
    //yeh mein bhul jaata hu
    cout<<endl;
}

}
