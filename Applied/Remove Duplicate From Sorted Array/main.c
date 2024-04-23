// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i - 1]){
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }
//         return j;
//     }
// };

#include <stdio.h>

int removeDuplicates(int nums[], int size) {
    if (size == 0) return 0; 

    int j = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int nums[100]; 
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int newSize = removeDuplicates(nums, size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
