#include<iostream>
using namespace std;

int sumofd(int n){
     int sum=0;
     while(n>0){
        int n2=n%10;
        sum+=n2;
        n=n/10;
     }
     return sum;
}


int main(){
    cout<<sumofd(145);
 return 0;

}