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

# LeetCode: All Nodes at distance k

For movement downward we have BFS, DFS etc but When we need to move upward we use `Map` to store parent values for each node so that we can know and traverse backward for every node to its parent.

1. Store parent values in `parent map` 
2. Traverse radially outward, like ripple in water, note that any node can move in 3 direction downward left or right or upward. Use BFS and store all 3 values whhich is k distant from target node.

# LeetCode: Count Complete Tree Nodes

Complete binary tree means, all levels are filled except(possibly) last level is incomplete, but if it is incomplete all the existed nodes are lie in extreme left of the last incomplete level.

For a complete binary tree the count of all nodes is: 2^n-1 or pow(2,n)-1 or (1<<2)-1

To check if they are complete of not, just check the extreme left height and extreme right height, if both heights are equal tree is complete return value using formulla else move to left and right subtree and after returning return both's value adding 1(of current root).

# LeetCode : Binary Search Tree Iterator

O(1) for Next() & HasNext() function and O(h) for space:
use ```Left (Root) Right``` technique as we know this is Inorder traversal, first put all extreme left nodes in stack, then pop with every next() call, when poping check for its right if there is right again put all its left nodes in stack, this way we use stack only for H elements resulting O(H) space complexity.

Why Stack?
Using stack the last node will pop at first

# Leetcode : Surrounded Regions

Approach: all the region which hold any boundry part will be = 'O', rest converted to 'X'
first store all boundry elements in queue and apply BFS, along with store all visited element as 1 in second matrix `vis`, now convert all element of given matrix to 'X', after than run over `vis` and convert elements to 'O' which is in `vis` because they are somehow connected to boundry.

Note : we can't use DFS because, it will became greedy approach, answer will be wrongly outputed.
