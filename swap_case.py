def swap_case(s):
    swap=""
    for i in s:
        if i==i.upper():
            swap+=i.lower()
        elif i==i.lower():
            swap+=i.upper()
    return swap

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
