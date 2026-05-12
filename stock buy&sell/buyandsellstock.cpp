#include<iostream>
using namespace std;
#include<vector>

int buystock(vector<int>&prices){
    int bestbuy=prices[0];
    int maxprofit=0;

    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestbuy){
            maxprofit=max(maxprofit,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);
    }
    return maxprofit;
}



int main(){

 vector<int> prices={7,1,5,4,6,3};
 cout<<buystock(prices);
 return 0;

}