def almostIncreasingSequence(sequence):
    strict = False
    last = prev = min(sequence) - 1
    for numb in sequence:
        if numb <= last:
            if strict:
                return False
            else:
                strict = True
            if numb <= prev:
                prev = last
            elif numb >= prev:
                prev = last = numb
        else:
            prev = last
            last = numb
    return True
