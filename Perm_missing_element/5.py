def solution(A):
    lst = [0 for x in range(len(A)+2)]
    for i in range(len(A)):
        lst[A[i]]+=1
    return lst.index(0,1)