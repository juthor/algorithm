

t=int(input())
total=[]
for i in range(t):
    num, s=input().split()
    text=''
    for i in s:
        text+=int(num)*i
    total.append(text)

for i in total:
    print(i)

