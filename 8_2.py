def getPathNum(r, c):
    if r == 1 or c == 1:
        return 1
    if r != 1 and c != 1:
        return getPathNum(r - 1, c) + getPathNum(r, c - 1)
