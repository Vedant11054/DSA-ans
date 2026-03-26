#include<iostream>
#include<vector>
using namespace std;

int main()
{        
    vector<int> nums={2,2,1};
    for (int i:nums)
     {
        int count=0;
        for (int j :nums)
        {
            (i==j)?count++:0;
        }
         if (count==1)
        {
         cout<<i;
        }            
     } 
}