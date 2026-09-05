<h2><a href="https://www.geeksforgeeks.org/problems/total-distance-travelled-in-an-array3628/1">Distance Travelled in a Permutation of 1 to n</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">You are given an array <strong>arr[]</strong> consisting of a permutation of the set <strong>{1, 2, 3, …, n}</strong> for some positive integer n. The task is to calculate the total distance you must travel starting from the position of 1 in the array, then moving to the position of 2, and so on, until you reach the position of n. </span><span style="font-size: 14pt;">When you travel from arr[i] to arr[j], the distance travelled is | i– j |.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [5, 1, 4, 3, 2]
<strong>Output:</strong> 7
<strong>Explanation:</strong> The numbers 1 to 5 are present at indexes 1, 4, 3, 2 and 0 respectively. Total distance = |4-1|+|3-4|+|2-3|+|0-2| = 3+1+1+2 = 7.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [6, 5, 1, 2, 4, 3]
<strong>Output:</strong> 8
<strong>Explanation:</strong> Total distance = |2-3|+|3-5|+|5-4|+|4-1|+|1-0| = 1+2+1+3+1 = 8.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>6</sup><br>1&lt;= arr[i]<sub>&nbsp;</sub>&lt;= arr.size()</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;