#include<iostream>
using namespace std;
void anArray(int arr[],int size){
    cout<<"printing   array is =  "<<endl;
    for ( int i = 0; i <  size; i++){

        cout<< arr[i];
    }
    cout<< endl<<"printing is done";
    
}


int main(){
    int tik[10] =  {2,3,4};
    int a =  5;
   /// anArray(tik,5);
    int tikSize = sizeof(tik)/sizeof(int);
    cout<<"array size is "<<tikSize<<endl;
 
    int tik1 [15] =  {2,3,4};
    int b =  5;
   // anArray(tik1,5);
     int tik1Size = sizeof(tik1)/sizeof(int);
    cout<<"array size is "<<tik1Size<<endl;

    char ch[5] =  {'a','b','c','d','e'};
   // cout<<ch[3]<<endl;
    cout<<"printing the array is = ";
    for ( int i = 0; i <  5; i++){
        cout<<ch[i]<<" ";
     
    }
            cout<<"printing done"<<endl;

    
 
}