array = {10,1,7,6,14,9}

round 1 : compare with only neighbour elements
eg: compare 10 with 1
10>1 -> swap them
{1,10,7,6,14,9}
10>7 -> swap
{1,7,10,6,14,9}
10>6 -> swap
{1,7,6,10,14,9}
10<14 -> don't swap
14>9 -> swap
{1,7,6,10,9,14}

*round 1 cleared*
=> largest element comes to end!
thus, for 6 elements we need 5 rounds to get 5 of them at place
=> we also check for one less element each time cuz its already fixed

*time complexity*
best case : O(n) : iff code is optimised
worst case : O(n^2)