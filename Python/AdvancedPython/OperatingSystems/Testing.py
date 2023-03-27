l=list(map(str,input().split()))
n=list(map(str,input().split()))
sl=''
for i in l:
  sl+=str(i)
sn=''
for i in n:
  sn+=str(i)
print(sn in sl)

