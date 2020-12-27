if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    
    # find the maximum value
    first_maximum=max(arr)
    
    # find the second maximum value
    import sys
    second_maximum= -sys.maxsize - 1 # assign a smallest number
    
    for i in arr:
        # element that does not equal to first_maximum
        if i!= first_maximum:
            second_maximum=max(second_maximum,i)
    print(second_maximum)
