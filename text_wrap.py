import textwrap

def wrap(string, max_width):
    res=""
    updated_width=max_width
    for i in range(len(string)):
        res+=string[i]
        if i==updated_width-1:
            updated_width+=max_width
            res+="\n"
    return res

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
