// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int start = 0, end = nums.size()-1;
//         int index = nums.size();
//         while(start <= end){
//             int mid = start + (end - start)/2;
//             if(target == nums[mid]){
//                 index = mid;
//                 break;
//             }
//             else if(nums[mid] < target){
//                 start = mid + 1;
//             }
//             else{
//                 index = mid;
//                 end = mid - 1;
//             }
//         }
//         return index;
//     }
// };

#include <stdio.h>

int searchInsert(int nums[], int size, int target) {
    int start = 0, end = size - 1;
    int index = size;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == nums[mid]) {
            index = mid;
            break;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}

int main() {
    int nums[100]; // Assuming a maximum array size of 100
    int size, target;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target value to search or insert: ");
    scanf("%d", &target);

    int index = searchInsert(nums, size, target);

    printf("Index where %d should be inserted: %d\n", target, index);

    return 0;
}
