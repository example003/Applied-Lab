# Prompt user to enter strings separated by space
strs = input("Enter strings separated by space: ").split()

# Initialize the longest common prefix as an empty string
prefix = ""

# Iterate through the characters of the first string
for i in range(len(strs[0])):
    # Iterate through remaining strings
    for s in strs:
        # Check if index i exceeds the length of the current string
        # or if character at index i doesn't match the character at the same index in the first string
        if i == len(s) or s[i] != strs[0][i]:
            print("Longest common prefix:", prefix)
            exit()  # Exit the program after printing the prefix
    prefix += strs[0][i]

print("Longest common prefix:", prefix)
