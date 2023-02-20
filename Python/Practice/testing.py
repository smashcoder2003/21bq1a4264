hashmap = dict()
string1 = 'bhargav'
hfreq_char = string1[0]
d = ""
for x in string1:
    if x in hashmap:
        if not d:
            d = x
        hashmap[x] += 1
    else:
        hashmap[x] = 1
    if hashmap[x] > hashmap[hfreq_char]:
        hfreq_char = x
print([d, hfreq_char])
