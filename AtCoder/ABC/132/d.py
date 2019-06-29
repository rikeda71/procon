import itertools
from collections import defaultdict


def index_multi(l, x):
    return [i for i, _x in enumerate(l) if _x == x]


inp = input().split(' ')
N = int(inp[0])
K = int(inp[1])

seq = ['b'] * K + ['r'] * (N - K)
perm = list(set(list(itertools.permutations(seq))))

cnt = defaultdict(int)
for p in perm:
    idxs = list(index_multi(p, 'b'))
    i = 0
    while i < len(idxs) - 1:
        if idxs[i] + 1 == idxs[i + 1]:
            idxs.remove(idxs[i])
        else:
            i += 1
    print(idxs)
    cnt[len(idxs)] += 1

for i in range(1, K + 1):
    print(cnt[i])


# TLE
