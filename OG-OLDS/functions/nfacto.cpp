#include<iostream>
using namespace std;

int facto(int n){
    int facto=1;
  for(int i=1;i<=n;i++){
    facto*=i;
  }
  return facto;

}


int main(){
   cout<<facto(3);

    return 0;
}