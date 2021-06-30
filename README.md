# Divide-and-Conquer-for-Number-Inversion
## Problem Introduction:
An inversion of a sequence a 0 , a 1 , . . . , a n −1 is a pair of indices 0 ≤ i < j < n such that a i > a j . The
number of inversions of a sequence in some sense measures how close the sequence is to being
sorted.<br> 
>For example, a sorted (in non-descending order) sequence contains no inversions at all,
while in a sequence sorted in descending order any two elements constitute an inversion (for a
total of n(n − 1)/2 inversions).
## Problem Description
The goal in this problem is to count the number of inversions of a given sequence.
 ### Hint:
Merge Sort<br>
Input Format:<br> The first line contains an integer n, the next one contains a sequence of integers
a 0 , a 1 , . . . , a n −1 <br>
Constraints:<br> 
1 ≤ n ≤ 10 5 ,
<br> 
1 ≤ ai ≤ 10^9 for all 0 ≤ i < n.<br>

Output Format:<br>
Output the number of inversions in the sequence 
>Example. <br>
Input:<br>
5
2 3 9 2 9 <br>
Output:<br>
2<br>
➔ The two inversions here are (1, 3) (a 1 = 3 > 2 = a 3 ) and (2, 3) (a 2 = 9 > 2 = a 3 ).