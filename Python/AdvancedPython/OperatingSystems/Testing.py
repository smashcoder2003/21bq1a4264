from time import sleep

text = "Hello world".lower()
alphabets = "abcdefghijklmnopqrstuvwxyz "
seqidx = 0
string = ""
while string != text:
    for x in alphabets:
        if string == text:
            break
        print(string + x, flush=False)
        sleep(0.04)
        if x == text[seqidx]:
            string += x
            seqidx += 1
            continue

