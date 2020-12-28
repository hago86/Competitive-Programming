"""
Created on Thu Dec 24 23:40:32 2020
@author: hgovindh

"""
from collections import Counter

def quasi_constant(seq):
    if not seq:
        return 0
    count = Counter(seq)
    for x  in count:
        print(count[x])
        print(count[x+1])

    print()
    res = max(count[x] + count[x+1] for x in count)
    return res
    
def main():
    
    #print(quasi_constant([6,10,6,9,7,8]))
    #print(quasi_constant([2,2,2,2]))
    print(quasi_constant([5,5,5]))
    #print(quasi_constant([5, 5, 9, 9, 9]))

if __name__ == "__main__":
    main()
