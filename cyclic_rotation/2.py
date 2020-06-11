def solution(A, K):
    # write your code in Python 3.6
    if len(A)==0: return A
    K = K%len(A)
    if K == 0: return A
    A[:K],A[K:]=A[-K:],A[:-K]
    return A
