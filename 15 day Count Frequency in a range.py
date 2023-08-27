'''
https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_9065123?challengeSlug=ninja-slayground&leftPanelTab=1
'''



from typing import *

def countFrequency(n: int, m: int, edges: List[List[int]]):
    frequency_array = [0] * n  # Initialize the frequency array with zeros
    
    for num in edges:
        if num <= n:
            frequency_array[num - 1] += 1
    
    return frequency_array