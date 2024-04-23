// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (target == nums[i] + nums[j])
//                 {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

#include <stdio.h>
int main()
{

    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int n = sizeof(nums)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (target == nums[i] + nums[j])
            {
                printf("{%d %d}",i, j);
            }
        }
    }

    return 0;
}