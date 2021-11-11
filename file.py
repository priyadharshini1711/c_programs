from os import walk
import os


f = []

for (dirpath, dirnames, filenames) in walk("D:\c-strings"):
    f.extend(filenames)
    for x in filenames:
        old_file = os.path.join("D:\c-strings", x)
        new_file = os.path.join("D:\c-strings", x+".c")
        os.rename(old_file, new_file)
    break