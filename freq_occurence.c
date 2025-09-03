from collections import Counter

def most_frequent(nums):
    count = Counter(nums)        # Count frequencies
    most_common = count.most_common(1)[0]  # (element, frequency)
    return most_common[0]        # Return element

# Example
nums = [1,2,2,3,1,4,2,1,1]
print(most_frequent(nums))  # Output: 1
