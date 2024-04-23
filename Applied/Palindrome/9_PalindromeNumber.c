// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0){
//             return false;
//         }
//         int digit;
//         int temp = x;
//         long rev = 0;

//         while(x!=0){
//             digit = x%10;
//             rev = (rev * 10) + digit;
//             x = x/10;
//         }
//         if(rev == temp) 
//         {   
//             return true;
//         }
//         else {
//             return false;
//         }

//     }
// };

    #include<stdio.h>
    int main(){

        int x;
        printf("Enter a number : ");
        scanf("%d",&x);
       if(x < 0){
            printf("Enter positive Number");
            return 0;
        }
        int digit;
        int temp = x;
        long rev = 0;

        while(x!=0){
            digit = x%10;
            rev = (rev * 10) + digit;
            x = x/10;
        }
        if(rev == temp) 
        {   
            printf("Palindrome");
        }
        else {
            printf("Not palindrome");
        } 
        return 0;
    }
        
