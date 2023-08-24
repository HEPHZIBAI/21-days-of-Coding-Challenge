'''
https://www.codingninjas.com/studio/problems/star-pattern_9065120?challengeSlug=ninja-slayground&leftPanelTab=1
'''


from os import *
from sys import *
from collections import *
from math import *


def printPattern(n):

    #Write your code here
    l=1
    for i in range(1,n+1):
        for j in range(n-i):
            print("",end=" ")
        for j in range(l):
            print("*",end="")
        l+=2
        print()