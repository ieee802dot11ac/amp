#!/usr/bin/python3

if __name__ == "__main__":
    infile = open("ctx.csv", "rt")
    text = infile.read()
    records = text.split('\n')
    max = len(records[1:])
    print(f'{max} records')
    i = 0
    new_lines = []
    for l in records[1:]: 
        i += 1
        stuff = l.split(',')
        if i == max:
            break
        new_lines.append(f'{stuff[3]} = {stuff[1]}; {"// type:func\n" if stuff[7] == "@function" else "\n"}')
    
    outfile = open("config/symbol_addrs.txt", "wt")
    for l in new_lines: 
        outfile.write(l)