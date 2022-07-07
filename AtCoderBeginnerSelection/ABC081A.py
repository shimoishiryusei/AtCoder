"""
Input
s_1s_2s_3

Output
n
"""

s = input()
cn = 0

for n in s:
    if n == "1":
        cn += 1

print(cn)