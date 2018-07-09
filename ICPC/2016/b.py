if __name__ == "__main__":
    n = int(input())
    c = input().split()
    t = int(n / 2) + 1
    end = None
    dic = {}
    for i in range(n):
        if c[i] in dic:
            dic[c[i]] += 1
        else:
            dic[c[i]] = 1
        if dic[c[i]] >= t:
            end = str(c[i]) + " " + str(i + 1)
            print(t)
            break
        else:
            top = 0
            for k, v in dic.items():
                if top < v:
                    top = v
                    topk = k
            dif = 0
            for k, v in dic.items():
                if top == v:
                    continue
                dif = top - v if dif < top - v else dif
            if dif > n - i - 1:
                end = topk + " " + str(i + 1)
                break

    if end is not None:
        print(end)
    else:
        print("TIE")
