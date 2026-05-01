#include<iostream>
using namespace std;

int main(){
   int n= 4 ;

   for(int i=0;i<n;i++){
    //spaces

    for(int j=1;j<=n-i-1;j++){
        cout<<" ";
    }

   cout<<"*";

   if(i!=0){
    
    //spaces
    
    for(int j=1;j<=2*i-1;j++){
        cout<<" ";
    }


    cout<<"*";


     

   }
   cout<<endl;
   }




   for(int i=0;i<n-1;i++){
    //spaces

    for(int j=0;j<=i;j++){
        cout<<" ";
    }

   cout<<"*";

   if(i!=n-2){
    
    //spaces
    
    for(int j=0;j<2*(n-2-i)-1;j++){
        cout<<" ";
    }


    cout<<"*";


     

   }
   cout<<endl;




   }


    return 0;
}