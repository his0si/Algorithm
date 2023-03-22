R, B = map(int, input().split())
LpW = (R + 4) // 2  # L+W
LW = R + B  # L*W

for i in range(1, LpW):
    if (LpW - i) * i == LW:
        print(max(i, LpW - i), min(i, LpW - i))
        break
