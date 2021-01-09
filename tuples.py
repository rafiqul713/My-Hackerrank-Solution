if __name__ == '__main__':
    n = int(input())
    integer_list = input().split()
    t= tuple([int(x) for x in integer_list])
    print(hash(t))
    
