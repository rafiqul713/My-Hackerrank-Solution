if __name__ == '__main__':
    N = int(input())
    arr=[]
    for index in range(N):
        command= input().strip().split(" ")
        if command[0]=="insert":
            i=int(command[1])
            e=int(command[2])
            arr.insert(i,e)
        elif command[0]=="print":
            print(arr)
        elif command[0]=="remove":
            e=int(command[1])
            if e in arr:
                arr.remove(e)            
        elif command[0]=="append":
            e=int(command[1])
            arr.append(e)
        elif command[0]=="sort":
            arr.sort()
        elif command[0]=="pop":
            arr.pop()
        elif command[0]=="reverse":
            arr.reverse()
        

