<h2><a href="https://www.geeksforgeeks.org/problems/a-guy-with-a-mental-problem1604/1">Minimum Time with Alternating Techniques</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18.6667px;">Given two arrays a[] and b[] of equal size, where a[i] and b[i] denote the time required to climb the i-th step using technique 1 and technique 2, respectively, find the minimum total time required to climb all steps. Geek may start with either technique but must alternate between the two techniques at every step.</span></p>
<p><strong><span style="font-size: 18.6667px;">Examples:</span></strong></p>
<pre><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;"><strong>Input: </strong>a[] = [2, 1, 2], b[]= [3, 2, 1]<strong>
Output: </strong>5<strong>
Explanation: </strong>Starting with technique 1: a[0] + b[1] + a[2] = 2 + 2 + 2 = 6
Starting with technique 2: b[0] + a[1] + b[2] = 3 + 1 + 1 = 5
The minimum of the two is 5, achieved by starting with technique 2.</span></span></pre>
<pre><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;"><strong>Input: </strong>a[] = [1, 3, 1, 2], b[]= [2, 2, 3, 1]<strong>
Output: </strong>5<strong>
Explanation: </strong>Starting with technique 1 yields the minimum total time of 5.<strong><br></strong></span></span></pre>
<p><span style="font-size: 14pt;"><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 18.6667px;">1 ≤ a.size(), b.size() ≤ 10<sup>5</sup><br></span></span><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">1 ≤ a[i], b[i] ≤ 10<sup>6</sup>&nbsp;</span></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;