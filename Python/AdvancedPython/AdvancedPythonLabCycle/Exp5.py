s = input('Enter a string')
d = {}
if s.isspace():
    print('String is empty')
elif s.isdigit():
    print('Enter characters only')
else:
    for i in s:
        d[i] = s.count(i)
    print(d)
