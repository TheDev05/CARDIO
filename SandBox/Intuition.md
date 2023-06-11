# LeetCode Permutaions

Two methods learned:

Using hashSet mainiting visited index
Using swapping technique

# LeetCode Subsets

Two ways learned:
Using for Loop in recursive function. 
Without using for loop, take or not take approach.

# LeetCode Subsets 2

Important concept:
if (i > index && num[i] == num[i - 1]) continue;
This means the first index to every call will stored after this index duplicity will be checked!

# LeetCode Sudoku

Similar to N-Queens, Points:
Check for 3 condition using a single 0-9 loop,

a. Exist in row of not
b. Exist in col or not
c. Exist in 3x3 matix or not (IMP: use some mathematical tricks)

# Leetcode: All Nodes at distance k

For movement downward we have BFS, DFS etc but When we need to move upward we use `Map` to store parent values for each node so that we can know and traverse backward for every node to its parent.

1. Store parent values in `parent map` 
2. Traverse radially outward, like ripple in water, note that any node can move in 3 direction downward left or right or upward. Use BFS and store all 3 values whhich is k distant from target node.

# Count Complete Tree Nodes

Complete binary tree means, all levels are filled except(possibly) last level is incomplete, but if it is incomplete all the existed nodes are lie in extreme left of the last incomplete level.

For a complete binary tree the count of all nodes is: 2^n-1 or pow(2,n)-1 or (1<<2)-1

To check if they are complete of not, just check the extreme left height and extreme right height, if both heights are equal tree is complete return value using formulla else move to left and right subtree and after returning return both's value adding 1(of current root).
