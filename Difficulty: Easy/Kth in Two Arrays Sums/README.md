<h2><a href="https://www.geeksforgeeks.org/problems/nth-item-through-sum3544/1">Kth in Two Arrays Sums</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given two integer arrays <strong>a[]</strong> and <strong>b[]</strong>, create a set containing all possible sums formed by adding one element from <strong>a</strong> and one element from <strong>b</strong>.</span></p>
<ul>
<li><span style="font-size: 18px;">Each sum is of the form a[i] + b[j], where 0 ≤ i &lt; a.size() and 0 ≤ j &lt; b.size()</span></li>
<li><span style="font-size: 18px;">Since it is a set, only distinct sums are considered. </span><span style="font-size: 18px;">Return the <strong>k-th smallest</strong> in the sorted order of these unique sums.</span></li>
<li><span style="font-size: 18px;">I</span><span style="font-size: 18px;">f the number of unique sums is less than <strong>k</strong>, return <strong>-1</strong>.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> a = [1, 2], b = [3, 4], k = 3
<strong>Output:</strong> 6
<strong>Explaination:</strong> The set of sums are in the order 4, 5, 6.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> a = [1, 3, 4, 8, 10], b = [20, 22, 30, 40], k = 4
<strong>Output:</strong> 25
<strong>Explaination:</strong> The numbers before it are 21, 23 and 24.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |a|, |b| ≤ 500, where |x| represents the size of array x.<br>1 ≤ a[i], b[i] ≤ 10<sup>4</sup><br>1 ≤ k ≤ a.size()*b.size()</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>STL</code>&nbsp;