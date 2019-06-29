num = int(input())
numbers = str(input())

numbers = numbers.split(' ')
numbers = [int(n) for n in numbers]

cnt = 0
for i in range(1, num - 1):
    li = sorted([numbers[i - 1], numbers[i], numbers[i + 1]])
    if 1 == li.index(numbers[i]):
        cnt += 1

print(cnt)
