'''
https://www.codingninjas.com/studio/problems/terms-of-ap_9065116?challengeSlug=ninja-slayground&leftPanelTab=1
'''




from os import *
from sys import *
from collections import *
from math import *

def termsOfAP(x):
    series = []
    N = 1
    while len(series) < x:
        term = 3 * N + 2
        if term % 4 != 0:
            series.append(term)
        N += 1
    return series
    pass