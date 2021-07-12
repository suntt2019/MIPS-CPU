import sys

filename = sys.argv[1]
ls = []
with open(f'{filename}-or.txt') as f:
    ls = f.readlines()
with open(f'{filename}.txt', 'w') as f:
    for ll in ls:
        f.write(f'{ll[0:2]}\n{ll[2:4]}\n{ll[4:6]}\n{ll[6:8]}\n')
