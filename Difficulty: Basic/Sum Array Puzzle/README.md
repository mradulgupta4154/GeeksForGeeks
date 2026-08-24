<h2><a href="https://www.geeksforgeeks.org/problems/sum-array-puzzle/1">Sum Array Puzzle</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of integers, modify the array such that each element at index i becomes the sum of all elements of the array except the element present at index i.</span></p>
<p><span style="font-size: 18px;">That is, update each element as: <br></span><span style="font-size: 18px;">arr[i] = arr[0] + arr[1] + ... + arr[i-1] + arr[i+1] + ... + arr[n-1]</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong><span style="font-size: 18px;">Input:</span> </strong>arr[] =<strong> </strong>[</span><span style="font-size: 18px;">3, 6, 4, 8, 9]</span>
<span style="font-size: 18px;"><strong>Output:</strong> [27, 24, 26, 22, 21]</span>
<span style="font-size: 18px;"><strong>Explanation:</strong> </span><span style="font-size: 18px;">For each index, replace the current element with the sum of all remaining elements in the array.
At index 0, sum = 6 + 4 + 8 + 9 = 27
At index 1, sum = 3 + 4 + 8 + 9 = 24
At index 2, sum = 3 + 6 + 8 + 9 = 26
At index 3, sum = 3 + 6 + 4 + 9 = 22
At index 4, sum = 3 + 6 + 4 + 8 = 21
Thus, the modified array becomes [27, 24, 26, 22, 21].</span></pre>
<pre><span style="font-size: 18px;"><strong><span style="font-size: 18px;">Input:</span></strong> arr[] =<strong> </strong>[</span><span style="font-size: 18px;">0, 0, 1]</span>
<span style="font-size: 18px;"><strong>Output:</strong> [1,</span><span style="font-size: 18px;"> 1, 0]<br><strong>Explanation</strong>: </span><span style="font-size: 18px;">Each element is replaced with the sum of all other elements in the array.
At index 0, sum = 0 + 1 = 1
At index 1, sum = 0 + 1 = 1
At index 2, sum = 0 + 0 = 0
Thus, the modified array becomes [1, 1, 0].</span></pre>
<p><span style="font-size: 18px;"><strong>Constraint :</strong></span><span style="font-size: 18px;"><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>4</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;