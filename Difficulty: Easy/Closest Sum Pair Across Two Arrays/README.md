<h2><a href="https://www.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1">Closest Sum Pair Across Two Arrays</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given two <strong>sorted</strong> arrays arr1[] and arr2[] of size n and m and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong> :&nbsp;</span><span style="font-size: 14pt;">In the driver code, the absolute difference between the sum of the closest pair and x is printed.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 32
<strong>Output :</strong> [1, 30]
<strong>Explanation:</strong>The closest pair whose sum is closest to 32 is [1, 30] = 31.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 50 <strong>
Output :</strong> [7, 40] 
<strong>Explanation:</strong> The closest pair whose sum is closest to 50 is [7, 40] = 47.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr1.size(), arr2.size() ≤ 10<sup>5</sup><br>1 ≤ arr1[i], arr2[i] ≤ 10<sup>9<br></sup>1 ≤ x ≤ 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;