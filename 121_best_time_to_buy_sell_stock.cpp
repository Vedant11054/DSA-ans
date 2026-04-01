#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {2,1,2,1,0,1,2};
    
       int buyindex;
       int buyprice;
    //    int profit=0;
       int min=prices[0];
       int minindex=0;
    for (int i = 0; i < prices.size()-1; i++)
    {
        
        // if (prices[i]<prices[i+1])
        // {
        //     buyindex=i;
        //     buyprice=prices[i];
        //     profit++;
        //     break;
        // } 
        if (min>prices[i])
        {
            min=prices[i];
            minindex=i;
        }
          
    }
    // if(profit==0){return 0;}
    int max=prices[minindex];

    cout<<"min :"<<min<<endl;
    cout<<"max :"<<max<<endl;
    for (int i = minindex; i <= prices.size()-1; i++)
{
       if (max<prices[i])
       {
            max=prices[i];
       }      
}
cout<<"profit :"<<max-min<<endl;

if(max-min>0){return max-min;}else{return 0;}



}