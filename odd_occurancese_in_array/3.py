 in Python 3.6
    # B xor B = 0, B xor 0 = B, B xor 1 = !B
    res = 0
    for n in A:
        res ^= n
    return res