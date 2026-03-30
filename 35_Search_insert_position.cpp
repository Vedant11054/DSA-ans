#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0,1,2,3,4,5,6,7,9};
      int target= 10;

       for (int i = 0; i <= nums.size()-1; i++)
        {
            if (nums[i]==target)
            {
                return i;
            }
            else if (target<nums[0])
            {
                return 0;
            }
            else if(i<nums.size()-1)
            {

                if (target>nums[i] && target<nums[i+1])
                    {
                        return i+1;
                    }
            }
            else if (i==nums.size()-1)
            {
                if (target>nums[i])
                {
                    return i+1;
                    
                }
                
            }
            
            
        }   
        
        return -1;
         
}