alphabet=[-1]*26

a=input()
l=len(a)
# print(type(a)) string으로 나
for i in range(l):
    if alphabet[ord(a[i])-97] == -1:
        alphabet[ord(a[i])-97]=i

for i in range(26):
    print(alphabet[i], end=' ')
