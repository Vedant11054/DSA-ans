#include<iostream>
#include<vector>
using namespace std;

string strings() 
{
        string strs[]={"flights","flour","flower","flight"};
        string ans = "";
        for (int i = 0; i < strs[0].length(); i++) 
        {
            for (int j = 0; j < strs[i].size() - 1; j++) 
            {
                if (strs[j][i] != strs[j + 1][i]) 
                {
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
}

int main()
{
    cout<< strings;
}