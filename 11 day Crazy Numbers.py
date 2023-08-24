'''
https://www.codingninjas.com/studio/campus/undefined
'''

from os import *
from sys import *
from collections import *
from math import *

def numberPattern(n):

    # Write your code Here.
    # Return a 2-d list of integers
    a = []
    k = 1
    
    for i in range(1, n + 1):
        b = []
        for j in range(1, i + 1):
            b.append(k)
            k += 1
            if k > 9:
                k = 1
        a.append(b)
    #printIndentedPattern(a,n)
    return a

# Example usage for N = 4
    pass