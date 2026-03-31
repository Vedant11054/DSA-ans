#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> digits = {8,9,9,9};
    int carry = 0;
    if (digits[digits.size() - 1] != 9)
    {
        int val = digits.at(digits.size() - 1);
        val += 1;
        digits.pop_back();
        digits.push_back(val);
    }
    else if (digits[digits.size() - 1] == 9)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] + 1 > 9 && digits.size()==1)
           {
                carry++;
               digits.pop_back();
               digits.push_back(1);
               continue;
           }
            else if (digits[i] + 1 > 9)
            {
                carry++;
                digits.pop_back();
            }
            else if(digits[i]+1!=10)
            {
                digits[i]=digits[i]+1;
                break;
            }
        }
        while (carry > 0)
        {
            digits.push_back(0);
            carry--;
        }
    }

    //    cout<<carry;
    for (int i : digits)
    {
        cout << i;
    }
}