class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closeToOpen = {
            ")": "(",
            "}": "{",
            "]": "["
        }

        for c in s:
            if c in closeToOpen:
                if stack and stack[-1] == closeToOpen[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return True if not stack else False

# Create an instance of the Solution class
solution = Solution()

# Prompt the user to enter a string
s = input("Enter a string containing parentheses, brackets, and curly braces: ")

# Check if the entered string is valid
if solution.isValid(s):
    print("The entered string is valid.")
else:
    print("The entered string is not valid.")
