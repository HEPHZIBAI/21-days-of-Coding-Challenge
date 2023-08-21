'''
https://www.codingninjas.com/studio/problems/average-marks_9065117?challengeSlug=ninja-slayground&leftPanelTab=1
'''


from os import *
from sys import *
from collections import *
from math import *

def averageMarks(firstLetterOfName, m1, m2, m3):

    # Write your code here
    # Return a pair<char, int> denoting the answer
    return(firstLetterOfName,(m1+m2+m3)//3)
    pass
