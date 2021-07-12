tst = 1
case = int(input())

while tst <= case:
    str = input()
    if len(str) <= 10:
         print(str)
    else: print(f"{str[0]}{len(str)-2}{str[len(str)-1]}")
    tst = tst+1

