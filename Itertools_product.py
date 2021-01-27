# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import product
A=input()
A=A.split()
A=map(int,A)
B=input()
B=B.split()
B=map(int,B)

print(*list(product(A,B)))