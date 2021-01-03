# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
num_of_shoes=input()
sizes_of_shoes= Counter(map(int,input().split()))
num_of_customer=input()


total=0
for i in range(int(num_of_customer)):
    size,payment= input().split()
    if sizes_of_shoes[int(size)]>0:
       total+=int(payment)
       sizes_of_shoes[int(size)]=sizes_of_shoes[int(size)]-1

print(total) 

