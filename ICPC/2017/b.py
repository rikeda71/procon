def get_str(s: str):
    flag = True
    ori = 0
    stro = []
    strl = []
    for i in range(len(s)):
        if s[i] == "\"":
            if flag:
                start = i
                flag = False
                stro.append(s[ori: start])
            else:
                end = i
                flag = True
                strl.append(s[start + 1: end])
                ori = end + 1
    return stro, strl


if __name__ == "__main__":
    s1 = input()
    s2 = input()
    s1_ord, s1_str = get_str(s1)
    s2_ord, s2_str = get_str(s2)

    if s1_ord != s2_ord:
        print("DIFFERENT")
    else:
        miss = 0

        for a, b in zip(s1_str, s2_str):
            if a != b:
                miss += 1

        if miss == 0:
            print("IDENTICAL")
        elif miss == 1:
            print("CLOSE")
        else:
            print("DIFFERENT")
