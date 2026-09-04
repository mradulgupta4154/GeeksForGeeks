<h2><a href="https://www.geeksforgeeks.org/problems/balance-with-respect-to-an-array5443/1">Balanced Floor and Ceil Distance</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given a sorted array arr[] and an integer x, find if the absolute difference between x and its floor is same as absolute difference between x and its ceil. </span><span style="font-size: 14pt;">The floor of x is the largest element in the array that is less than or equal to x, and the ceil of x is the smallest element in the array that is greater than or equal to x.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5 
<strong>Output:</strong> true
<strong>Explanation</strong>: The floor of 5 is 2 and the ceil is 8. The distances are |5 - 2| = 3 and |8 - 5| = 3, which are equal. Hence, the answer is true.  
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 5, 7, 8, 11, 12, 15], x = 9
<strong>Output:</strong> false
<strong>Explanation: </strong>The floor of 9 is 8 and the ceil is 11. The distances are |9 - 8| = 1 and |11 - 9| = 2, which are not equal. Hence, the answer is false. </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 10], x = 2
<strong>Output:</strong> true
<strong>Explanation: </strong>Since x itself is present, its floor and ceil are going to be the same.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><sup><br></sup>0 ≤ arr[i] ≤ 10<sup>6</sup><br>1 ≤ x ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search</code>&nbsp;