def solution(N):
    binStr = f'{N:b}'
    count = 0
    temp = 0
    for c in binStr:
        if c == '0':
            temp +=1
        else:
            count = temp if temp > count else count
            temp = 0
    return count
