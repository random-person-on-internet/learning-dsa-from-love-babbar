arr [] = {1,7,9,2,0}
sorted = {0,1,2,7,9} || {9,7,2,1,0}

to sort, keep swapping min value to leftmost place
example:

arr = {64, 25, 12, 22, 11}

step 1:
swap arr[i] with minimum 
=> swap 64 and 11

arr = {11,25,12,22,64}

step 2:
swap arr[i+1] with minimum from rest
=> swap 25 with 12

arr = {11,12,25,22,64}
.
.
.

arr= {11,12,22,25,64}