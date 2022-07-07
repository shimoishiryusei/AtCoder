"""
Input
a
b c
s

Output
(a+b+c) s

"""
a = int(input())
b,c = map(int,input().split())

s = input()

print(str(a+b+c),s)