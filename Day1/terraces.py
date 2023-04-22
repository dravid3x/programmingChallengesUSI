# read the length of the sequence
n = int(input())
numbers = [int(x) for x in input().split()]

# stack
s = []
r = 0

gre = False
eq = False
less = False

for i in range(n):
    t = numbers[i]
    while True:

        if len(s) == 0:
            s.append((t, i))
            break
        elif t > s[-1][0]:
            s.pop()
        elif t < s[-1][0]:
            s.append((t, i))
            break
        else:
            r = r + ((i - s[len(s) - 1][1]) - 1)
            s.pop()

print(r)
