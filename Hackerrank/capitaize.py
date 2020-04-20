#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    tmp = s
    strList = tmp.split(" ")
    resultString = ""
    for name in strList:
        if len(name) > 0:
            if name[0].isnumeric() == False:
                name = name[0].upper() + name[1:len(name)]
            resultString = resultString + name + ' '
        else:
            resultString = resultString + ' '
            
            
   # resultString = resultString.rsplit(" ")
    return resultString



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
