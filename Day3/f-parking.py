nTrips = int(input())
for i in range(nTrips):
    nStores = int(input())
    sPoss = [int(x) for x in input().split()]
    sPoss.sort()

    median = 0
    if len(sPoss) % 2 == 0:
        median = (sPoss[(len(sPoss) // 2) - 1] + sPoss[(len(sPoss) // 2)]) // 2
    else:
        median = sPoss[(len(sPoss) - 1) // 2]

    resultLeft = 0
    tempArr = sPoss[:len(sPoss) // 2]
    for k in range(len(tempArr) - 1):
        resultLeft = resultLeft + tempArr[k + 1] - tempArr[k]

    resultLeft = resultLeft + median - tempArr[len(tempArr) - 1]
    resultLeft *= 2

    resultRight = 0
    tempArr = sPoss[len(sPoss) // 2 + 1:]
    for k in range(len(tempArr) - 1):
        resultRight = resultRight + tempArr[k + 1] - tempArr[k]

    resultRight = resultRight + tempArr[0] - median
    resultRight *= 2

    result = resultLeft + resultRight
    print(result)