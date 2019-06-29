N = int(input())
nums = str(input()).split(' ')
nums = sorted([int(n) for n in nums])

a = nums[len(nums) // 2 - 1]
b = nums[len(nums) // 2]

aida = b - a
cnt = 0
for i in range(aida + 1):
    if a < a + i and a + i <= b:
        cnt += 1

print(cnt)
