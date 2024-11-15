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

# Leetcode: Find Eventual Safe States

If all adjacent nodes of any node is visted, i.e call comes to that node that means all their adjacent nodes are terminal node or they don't have any adjacent nodes, hence that parent node is safe node

so all nodes with `pathvis[] = 0` is safe node, because we are assigning 0 to pathvis at last of all node's adjacent call, that means all call is performed

Note: all the nodes which is either a part of loop, or somehow adjacent to any loop are not safe node.

# Leetcode: Cheapest flight with k stops

create priority queque as {{stops, distance}, node}: In this way it will be sorted according to stops, and if two node have same stops, it will then sort according to thier distance.

Comment extracted from striver's YT video, graph series:

Just make sure in the if check you put the condition as (cost + edW < dist[adjNode]) and not (dist[Node] + edW < dist[adjNode]) or else edge case will fail

Coz in the queue we store the distance coming from a specific parent node ie a particular path , nd that path is used for further exploration when we take it out of the queue nd consider that paths distance ...but there can be other paths as well...dis[ ] can't maintain the paths, it just stores the path with minimum distance, which may not guarantee the path with least stops(which is our top priority)...hence we have to maintain the instance of the distance of a particular node in the queue

# 2870. Minimum Number of Operations to Make Array Empty

Except '1', every number can be splitted in the form of 2 and 3, then first try to split in 3 as far as possible but keep in mind, the remainder after splitting number by 3 must divide by 2.

look at the first leetcode submiision: https://leetcode.com/submissions/detail/1064677343/

// 2 3 22 23 33 223 233 2223 2233 2333 3333 22333
// 2 3 4 5 6 7 8 9 10 11 12 13

# 875 Koko Eating

Related : 2064. Minimized Maximum of Products Distributed to Any Store &
1011. Capacity To Ship Packages Within D Days

Get or Find a frame/window/portion size so that all the given values, data, articles get used/combines/eaten/shiped in a d days/ h hours/ x condition

```
Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10
```

Slight changed, here item is stack or pile, can put only 1 pile item in 1 box
```
Input: piles = [3,6,7,11], h = 8
Output: 4
```





