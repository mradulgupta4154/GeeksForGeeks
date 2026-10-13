<h2><a href="https://www.geeksforgeeks.org/problems/toppers-of-class3826/1">Indexes of Top K</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given an array <strong>arr[]</strong> representing the marks of students and an integer <strong>k</strong>, return the indices (0-based) of students having the <strong>top k</strong> marks. The indices should be ordered by marks in descending order, and for students with the same marks, their indices should appear in ascending order.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 2, 1, 3, 1], k = 3 
<strong>Output:</strong> [3, 0, 1, 2, 4]
<strong>Explanation</strong>: Topper with 3 marks is present at 3rd index, 2 marks is present at 0<sup>th</sup> index and next at 1<sup>st</sup> index. 1 marks is present at 2 and 4.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 3, 4], k = 1 
<strong>Output: </strong>[3]
<strong>Explanation</strong>: The highest marks is at index 3.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ k&nbsp;≤ arr.size() ≤ 10<sup>6<br></sup></span><span style="font-size: 18px;"><span style="font-size: 14pt;">1 ≤ arr[i] ≤ 10<sup>8</sup></span><sup><br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>D-E-Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;