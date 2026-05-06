#include<iostream>
using namespace std;
#include <climits>

int main(){
    int array[]={10,20,50,-10,20,44};
    int size=6;

    int big=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>big){
            big=array[i];
        }
    }
    cout<<big;

    return 0;
}