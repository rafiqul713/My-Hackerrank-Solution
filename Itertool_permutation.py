# Enter your code here. Read input from STDIN. Print output to STDOUT


from itertools import permutations

S,K= input().split()
res=list(permutations(S,int(K)))
res=sorted(res)
for i in res:
    temp=""
    for x in i:
        temp+=x
    print(temp)