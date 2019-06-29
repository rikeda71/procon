string = input()
cnt = 0

if len(set([c for c in string])) == 2:
    print("Yes")
else:
    print("No")
