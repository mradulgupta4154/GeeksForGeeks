<h2><a href="https://www.geeksforgeeks.org/problems/minimize-the-sum--170645/1">Minimize the sum</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of <strong>n</strong> integers, repeatedly perform the following operation until only one element remains in the array:</span></p>
<ul>
<li><span style="font-size: 18px;">Remove any two elements from the array.</span></li>
<li><span style="font-size: 18px;">Compute their sum and add it to the answer.</span></li>
<li><span style="font-size: 18px;">Insert the computed sum back into the array.</span></li>
</ul>
<p><span style="font-size: 18px;">Return the minimum possible value of the total sum obtained by performing the above operations.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [1, 4, 7, 10]
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">39
</span><strong style="font-size: 18px;">Explanation: <br></strong><span style="font-size: 14pt;">Choose 1 and 4, insert 5. Array becomes [5, 7, 10], total sum = 5.<br>Choose 5 and 7, insert 12. Array becomes [12, 10], total sum = 17.<br>Choose 12 and 10, insert 22. Array becomes [22], total sum = 39.</span><span style="font-size: 18px;"><br>Hence, the minimum total sum </span></span><span style="font-size: 14pt;">is 39.</span></pre>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [1, 3, 7, 5, 6]</span><strong style="font-size: 18px;">
Output: </strong><span style="font-size: 18px;">48</span><strong style="font-size: 18px;">
Explanation: <br></strong><span style="font-size: 18px;">Choose 1 and 3, insert 4. Array becomes [4, 7, 5, 6], total cost = 4.
Choose 4 and 5, insert 9. Array becomes [7, 6, 9], total cost = 13.
Choose 6 and 7, insert 13. Array becomes [9, 13], total cost = 26.
Choose 9 and 13, insert 22. Array becomes [22], total cost = 48.
Hence, the minimum total cost is 48.</span></span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1<strong>&nbsp;</strong>≤ |arr| ≤ 10<sup>4</sup><strong><br></strong></span><span style="font-size: 18px;">1 ≤ arr[i] ≤ 100<sup><br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Swiggy</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Priority Queue</code>&nbsp;