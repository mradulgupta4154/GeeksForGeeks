<h2><a href="https://www.geeksforgeeks.org/problems/jumping-caterpillars4412/1">Jumping Caterpillars</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p class="PDq2pG_selectionAnchorContainer" data-start="218" data-end="628"><span style="font-size: 14pt;">Given an integer <strong data-start="239" data-end="244">m</strong>, representing the number of leaves numbered from 1 to m, and an array <strong data-start="323" data-end="332">arr[]</strong>, where each element represents the jump length of a caterpillar. </span></p>
<ul>
<li class="PDq2pG_selectionAnchorContainer" data-start="218" data-end="628"><span style="font-size: 14pt;">Each caterpillar starts at leaf <strong data-start="430" data-end="435">1</strong>. A caterpillar with jump length <strong data-start="468" data-end="473">k</strong> visits the leaves 1, 1 + k, 1 + 2k, 1 + 3k, ... until it moves beyond leaf m. </span></li>
<li class="PDq2pG_selectionAnchorContainer" data-start="218" data-end="628"><span style="font-size: 14pt;">Whenever a caterpillar visits a leaf, that leaf is considered eaten. </span></li>
</ul>
<p><span style="font-size: 14pt;">Find the number of leaves that remain uneaten after all caterpillars have completed their jumps.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 3, 5], m = 10<strong>
Output: </strong>3<strong>
Explanation:
</strong>The first caterpillar (jump length = 2) visits the leaves 1, 3, 5, 7, 9. The second caterpillar (jump length = 3) visits the leaves 1, 4, 7, 10. The third caterpillar (jump length = 5) visits the leaves 1, 6. After all caterpillars have completed their jumps, the uneaten leaves are 2, 8, and 10. Therefore, the number of uneaten leaves is 3.</span></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2], m = 5 
<strong>Output:</strong> 2</span><br><span style="font-size: 14pt;"><strong>Explanation:</strong> The leaves eaten are 1, 3, 5. The leaves 2,4 are uneaten.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<p><span style="font-size: 18px;">1 &lt;= m &lt;= 10<sup>6</sup><br>1 ≤ arr.size() ≤ 10<sup>5</sup><sup><br></sup>1 ≤ arr[i] ≤ m<sup><br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Myntra</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;