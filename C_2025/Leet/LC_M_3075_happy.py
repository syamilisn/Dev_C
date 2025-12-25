class Solution:
    def maximumHappinessSum(self, a: list[int], k: int) -> int:
        sum=0
        stack = sorted(a)

        for i in range(k):
            if len(stack) >= 1:
                if (stack[-1] - i) < 0:
                    break
                elif (stack[-1] - i) >= 0:
                    stack[-1] -= i
                    sum += stack.pop()
        return sum


obj = Solution()
print(obj.maximumHappinessSum([1,2,3], 2))  #4
print(obj.maximumHappinessSum([1,1,1,1], 2)) #1
print(obj.maximumHappinessSum([2,3,4,5], 1)) #5
print(obj.maximumHappinessSum([2,98,45], 1)) #98
print(obj.maximumHappinessSum([2,83,62], 3)) #5
# print(obj.maximumHappinessSum([2,3,4,5], 1)) #5

