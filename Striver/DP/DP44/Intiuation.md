# Standard LIS technique

1. for printing only size use LIS (MEMO/TAB)
2. for printing the required array or subsequence use Linear LIS with following intiution :

If(a<b<c) i.e elements are sorted and a is divisible by b and b is divisible by c or all a,b,c is divisible to each other, then the divisibility rules apply for any random element 'x'  as: if x is divisibe by c then it will definetly divisible by a & b.