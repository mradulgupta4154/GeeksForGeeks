<h2><a href="https://www.geeksforgeeks.org/problems/magnet-array-problem3743/1">Equilibrium Points</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Magnets are placed on X axis, the coordinates of which are given in sorted order, you need to find out the X-co-ordinates of all the equilibrium points (i.e. the point where net force is zero). </span></p>
<ul>
<li><span style="font-size: 18px;">The polarity of the magnet is such that exerts +ve force in its right side and -ve force in left side, (here +ve is considered in +ve direction of x-axis). </span></li>
<li><span style="font-size: 18px;">Forces are inversely proportional to the distance, thus there lies an equilibrium point between every two magnetic points.</span></li>
</ul>
<p><span style="font-size: 18px;">You are mainly given a sorted integer array <strong>arr[]</strong> of size n, where arr[i] denotes the coordinate of the i-th point on the X-axis, you need to find all the points x for which the net force of all magnets (or the below expression) is 0.</span></p>
<p><span style="font-size: 18px;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/703198/Web/Other/blobid0_1783495909.png" width="194" height="78"></span></p>
<ul>
<li><span style="font-size: 18px;">It is guaranteed that there exists exactly one such point in every open interval (arr[i], arr[i + 1]) for 0 ≤ i &lt; n - 1. </span></li>
<li><span style="font-size: 18px;">Return an array containing all n - 1 points, each accurate to 2 decimal places.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2]
<strong>Output: </strong>[1.50]
<strong>Explanation: </strong>The mid point of two points will have net force zero, thus answer = 1.50
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [0, 10, 20, 30]
<strong>Output: </strong>[3.82, 15.00, 26.18]<br><strong>Explanation:</strong><span style="font-size: 18pt;"> <br></span></span><span style="font-size: 14pt;">Between 0 and 10: The points at 20 and 30 also contribute to the force, so the equilibrium point shifts toward 0, giving 3.82 instead of the midpoint (5).</span><br><span style="font-size: 14pt;">Between 10 and 20: The arrangement is symmetric about 15, so the forces balance exactly at 15.00.</span><br><span style="font-size: 14pt;">Between 20 and 30: By symmetry with the first interval, the equilibrium point is 26.18, shifted toward 30.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 ≤ n ≤ 10<sup>3</sup><br>0 ≤&nbsp; arr[1] &lt; ....arr[i] &lt; arr[i+1] &lt; ....arr[n] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>D-E-Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Mathematics</code>&nbsp;<code>Binary Search</code>&nbsp;