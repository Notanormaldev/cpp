#include<bits/stdc++.h>
using namespace std;

int num=0;
void print(){
    if(num>=5)return; //base condition
    cout<<num<<endl;
    num++;
    print();
}

int main(){
    print();
    return 0;
}

//recursion - it self
//base - for stop
//stack overflow - give space and space full then it stop 
//stack space - where store fun calling
//recursion tree - tree like structure for understanding things 