#!/usr/bin/python3
import glob
import subprocess

error = False

for cfile in glob.glob('test-cases/*.c'):
    subprocess.check_call(['clang', '-fsanitize=address', '-g', cfile])
    subprocess.check_call(['./a.out'])
    subprocess.check_call(['clang', '-fsanitize=memory', '-fsanitize=undefined', '-g', cfile])
    subprocess.check_call(['./a.out'])
    with open(cfile) as f:
        original = f.read()
    print('clang-format-3.6', 'style=Google', cfile)
    changed = subprocess.check_output(['clang-format-3.6', '-style=Google', cfile]).decode()
    if original != changed:
        error = True
        print(cfile + ' is not properly formatted!')
        subprocess.check_output(['clang-format-3.6', '-style=Google', '-i', cfile])
if error:
    exit(-1)
