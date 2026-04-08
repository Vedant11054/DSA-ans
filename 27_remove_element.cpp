#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

int main()
{
//     vector<int>nums={3,2,2,3};
//     int val=3;
//     vector<int>nums1;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=val)
//             {
//                 nums1.push_back(nums[i]);
//             }
//         }
//         for (int i = 0; i < nums1.size(); i++)
//         {
//             /* code */
//             cout<<nums1[i];
//         }
//         cout<<endl;
//         cout<<nums1.size();
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i];
                k++;
            }
        }
            return k;
        
}