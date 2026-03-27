#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 1};
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if (nums[i] + nums[j] == target)
            {
                vector<int> result = {i, j};
                return result;
                break;
            }
        }
    }
    return nums;
}