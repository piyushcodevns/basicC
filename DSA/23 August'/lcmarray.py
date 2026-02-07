a = [1,2,3,4,5,6,8]
n = len(a)
maxvalue = max(a)
currentvalue = maxvalue
print(f"currentvalue={currentvalue} ")
while True:
    islcm = True
    for i in range(n):
        if currentvalue % a[i] != 0:
            islcm = False
            break
    if islcm:
        print(f"LCM={currentvalue}")
        break
    else:
        currentvalue += maxvalue
        print(f"currentvalue={currentvalue} ")
