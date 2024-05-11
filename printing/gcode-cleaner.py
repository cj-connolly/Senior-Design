import sys
import re

# read from first command line argument
f = open(sys.argv[1], 'r')
gc = f.read()
f.close()

# this assumes typical G-code line endings
inst = re.split('\n',gc)

for i in range(len(inst)):
    # sanitize excessive feed rates
    if 'F' in inst[i]:
        ind = inst[i].rfind('F')
        end = min(inst[i][ind:].rfind(' '),inst[i][ind:].rfind(';'))
        feed = inst[i][ind+1:end]
        if float(feed) > 50.0:
            clean_inst = inst[i][:ind+1] + '50.0' + inst[i][end:]
            inst[i] = clean_inst

gcs = '\n'.join(inst)

# overwrite the original file with changes
with open(sys.argv[1], 'w') as f:
    f.write(gcs)
            
