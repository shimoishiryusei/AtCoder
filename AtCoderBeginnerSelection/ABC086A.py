"""
Input
a b

Output
奇数なら
Odd
偶数なら
Even
"""
a,b = map(int,input().split())

if a*b % 2 == 0:
    print("Even")
else:
    print("Odd")