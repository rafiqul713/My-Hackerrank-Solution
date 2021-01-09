def count_substring(string, sub_string):
    counter=0
    for i in range(len(string)-len(sub_string)+1):
        match=0
        for j in range(len(sub_string)):
            if string[i+j]==sub_string[j]:
                match+=1
        if match==len(sub_string):
            counter+=1
    return counter

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
