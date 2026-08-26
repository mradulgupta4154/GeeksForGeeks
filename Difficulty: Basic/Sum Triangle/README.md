<h2><a href="https://www.geeksforgeeks.org/problems/sum-triangle-for-given-array1159/1">Sum Triangle</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong>, construct its <strong>Sum</strong> <strong>Triangle</strong> as follows:</span></p>
<ul>
<li><span style="font-size: 18px;">The bottom row of the triangle is the original array.</span></li>
<li><span style="font-size: 18px;">Each element in the row above is formed by adding the two adjacent elements directly below it.</span></li>
<li><span style="font-size: 18px;">Continue this process until only one element remains at the top of the triangle.</span></li>
</ul>
<p><span style="font-size: 18px;">Return all elements of the Sum Triangle in<strong> top-to-bottom</strong> order, and within each row from <strong>left to right</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [4, 7, 3, 6, 7]
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">[81, 40, 41, 21, 19, 22, 11, 10, 9, 13, 4, 7, 3, 6, 7]
</span><strong style="font-size: 18px;">Explanation:</strong><span style="font-size: 18px;">
       81
     40  41
   21  19  22
 11  10   9   13
4   7   3   6    7<br>The triangle is constructed from bottom to top by summing adjacent elements:
[4, 7, 3, 6, 7]
[11, 10, 9, 13]
[21, 19, 22]
[40, 41]
[81]
Reading the triangle from top to bottom and left to right gives: </span></span><span style="font-size: 18px;">[81, 40, 41, 21, 19, 22, 11, 10, 9, 13, 4, 7, 3, 6, 7]</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 4]
<strong>Output: </strong>[9, 3, 6, 1, 2, 4] <br><strong>Explanation:<br>   </strong>9<strong><br> </strong>3   6<strong><br></strong>1  2  4<br></span><span style="font-size: 14pt;">Reading the triangle from top to bottom and left to right gives: [9, 3, 6, 1, 2, 4] </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ arr.size() ≤ 25</span><sup><br></sup><span style="font-size: 18px;">1 ≤ arr[i] ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;