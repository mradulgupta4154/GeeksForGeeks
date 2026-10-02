<h2><a href="https://www.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1">Search in a K-Step Array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p class="PDq2pG_selectionAnchorContainer" data-start="50" data-end="197"><span style="font-size: 14pt;">Given a step array arr[], a step value k, and an integer x, find the first index of x in the array. If x is not present, return -1.</span></p>
<p data-start="199" data-end="442" data-is-last-node="" data-is-only-node=""><span style="font-size: 14pt;">Note: A K-Step array is an array where the absolute difference between any two adjacent elements is at most k.</span></p>
<p><span style="font-size: 14pt;">For example, arr[]= [4, 6, 7, 9]&nbsp; with k= 2 is a step array because the difference between consecutive elements is </span><span style="font-size: 18px;">≤ </span><span style="font-size: 14pt;">2.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [4, 5, 6, 7, 6], k = 1, x = 6
<strong>Output:</strong> 2
<strong>Explanation: </strong>In the array arr, 6 is present at index 2. So, return 2.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [20, 40, 50], k = 20, x = 70<strong>
Output:</strong> -1 <br><strong>Explanation:</strong> As there is no occurrence of 70. So, return -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size ≤ 10<sup>5</sup><br>1 ≤ k ≤ 100<br>1 ≤ arr[i], x ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>CPP</code>&nbsp;