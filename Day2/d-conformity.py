nStudents = int(input())
groupCounts = {}

for i in range(nStudents):
    numbers = [int(x) for x in input().split()]
    numbers.sort()
    group = tuple(numbers)

    if group in groupCounts:
        groupCounts[group] += 1
    else:
        groupCounts[group] = 1

maxGroupSize = max(groupCounts.values())

if maxGroupSize == 1:
    print(nStudents)
else:
    tempMax = 0
    for gc in groupCounts.values():
        if gc == maxGroupSize:
            tempMax += maxGroupSize

    print(tempMax)
