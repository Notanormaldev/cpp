//remove outer paren


#include<iostream>
using namespace std;

string removeouterparen(string s){

    string result;
    int count=0;
    for(char ch:s){
        if(ch=='('){
            if(count>0) result+=ch;
            count++;
        }else{
            count--;
            if(count>0) result+=ch;
        }
    }
    return result;
}



int main(){
     string s="(()()())";
 cout<<   removeouterparen(s);
    return 0;
}