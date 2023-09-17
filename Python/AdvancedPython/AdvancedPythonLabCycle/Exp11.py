filename = input('Enter a file name: ')
f = open(filename, 'r')
linecount = wordcount = charactercount = 0
for line in f:
    linecount += 1
    wordcount += len(line.split())
    for character in line:
        if character != ' ' and character != '\n':
            charactercount += 1
print('No. of Lines=', linecount)
print('No. of Words=', wordcount)
print('No. of Characters=', charactercount)
f.close()
