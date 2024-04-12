import os

l=['08_BitManipulation', '09_NumberTheory', '10_DP', '11_DisjointSetUnion', '14_Combinatorics', '15_Geometry', '16_GameTheory', '18_Tries', '19_RangeQuery', '20_BitMasking']

for i in l:
    if os.path.isdir(i):
        # os.rmdir(i)
        pass
    else:
        os.mkdir(i)