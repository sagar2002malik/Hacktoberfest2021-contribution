#Input:  {-2, 1, -3, 4, -1, 2, 1, -5, 4}
#Output: Subarray with the largest sum is {4, -1, 2, 1} with sum 6.
def kadane_algo(arr):
    current_max = 0
    max_end = 0
    for i in arr:
        max_end = max_end + i
        max_end = max(max_end, 0)
        current_max = max(current_max, max_end)
    return current_max
 
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(f"Sum of largest sub-array with largest sum {kadane_algo(arr)}")