<h2><a href="https://www.geeksforgeeks.org/problems/lucky-number0707/1">Lucky Number</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p style="text-align: justify;"><span style="font-size: 18px;">Given a number n, find if it is Lucky.&nbsp;</span><span style="font-size: 18px;">A number is called Lucky if all its sub-numbers (formed using&nbsp;</span><span style="font-size: 18px;">contiguous digits)</span><span style="font-size: 18px;"> have distinct digit products. The digit product of a number is the product of all its digits.</span></p>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Note</strong>:&nbsp;&nbsp;</span><span style="font-size: 18px;">For a number with d digits, there are d*(d+1)/2 sub-numbers.</span></p>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: n = 324
<strong>Output</strong>: true
Explanation: Sub-numbers are 3, 2, 4, 32, 24, 324 with digit products : 3, 2, 4, 6, 8, 24 - all distinct, so it is Lucky.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: n = 323
<strong>Output</strong>: false
<strong>Explanation</strong>: Sub-numbers 32 and 23 both have digit product 6 - not distinct, so it is not Lucky.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ n ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Epic Systems</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Mathematics</code>&nbsp;