# Count of Palindromes

We, at first deduce all substring (n*(n+1))/2 with help of matrix/ DP table, genrate DP table
as,

"ANKIT" : A to A(A), then A to B(AB), then A to C (ABC)...and so on
and check for indices (i and j) elements, if they are equal then go for (i+1, j) if they exist then true for equality and false for non-equality, otherwise true.

put 1 for palindrome and 0 for non-palindrome.

Tips: let's take ABBA, (i=0,j=n-1) if(A==A) && (i+1,j-1) is palindrome the whole is palindrome.
for futher understanding watch:

https://www.youtube.com/watch?v=XmSOWnL6T_I