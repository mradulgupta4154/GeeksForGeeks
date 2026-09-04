<h2><a href="https://www.geeksforgeeks.org/problems/left-out-candies5652/1">Left Out Candies</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given <strong>n</strong> students sitting in a circle, distribute <strong>m</strong> candies among them. The <strong>i<sup>th</sup></strong> student can only accept exactly <strong>i</strong> candies - if the <strong>i<sup>th</sup></strong> student cannot be given the required <strong>i</strong> candies, they take none. Starting from the first student and moving around the circle, keep distributing candies in this manner until you cannot give the required amount to the next student. Find the number of candies left at the end.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, m = 11
<strong>Output:</strong> 0
<strong>Explanation:</strong> Give 1 candy to student 1, 2 to student 2, 3 to student 3, 4 to student 4, then 1 again to student 1. All 11 candies are used with none left.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, m = 12
<strong>Output:</strong> 1
<strong>Explanation:</strong> Give 1, 2, 3, 4, then 1 again to student 1 (total 11 given). Only 1 candy remains, but the next student needs 2, so distribution stops. 1 candy is left.
</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 &lt;= n &lt;= 2 * 10^4<br></span><span style="font-size: 18px;">1 &lt;= m &lt;= 10^9</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;