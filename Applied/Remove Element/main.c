// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int idx = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(val!=nums[i]){
//                 nums[idx] = nums[i];
//                 idx++;
//             }
//         }
//         return idx;
//     }
// };

#include <stdio.h>

int removeElement(int nums[], int size, int val) {
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (val != nums[i]) {
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}

int main() {
    int nums[100]; // Assuming a maximum array size of 100
    int size, val;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int newSize = removeElement(nums, size, val);

    printf("Array after removing %d:\n", val);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
