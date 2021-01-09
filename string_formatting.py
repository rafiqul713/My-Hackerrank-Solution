def print_formatted(number):
    # your code goes here
    maxlen=len(str(bin(number)[2:]))
   
    
    for i in range(1,number+1):
        d=str(i).rjust(maxlen,' ')
        o=oct(i)[1:].rjust(maxlen,' ')
        h=hex(i)[2:].upper().rjust(maxlen,' ')
        b=bin(i)[2:].rjust(maxlen,' ')
        print("{} {} {} {}".format(d,o,h,b))
       
if __name__ == '__main__':
    n = int(raw_input())
    print_formatted(n)
