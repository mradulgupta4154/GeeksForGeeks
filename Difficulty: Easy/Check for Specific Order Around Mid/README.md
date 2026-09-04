<h2><a href="https://www.geeksforgeeks.org/problems/tracks0436/1">Check for Specific Order Around Mid</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an array<strong> arr[]</strong> of size&nbsp;<strong>n</strong> representing the heights of pillars on a track, determine whether the track is valid.</span></p>
<p><span style="font-size: 18px;">A track is valid if:</span></p>
<ul>
<li><span style="font-size: 18px;">The middle pillar has height exactly 1.</span></li>
<li><span style="font-size: 18px;">The number of pillars on both sides of the middle pillar are equal, and corresponding pillars on each side have identical heights.</span></li>
<li><span style="font-size: 18px;">The difference between heights of consecutive pillars is constant and non-zero.</span></li>
</ul>
<p><span style="font-size: 18px;">Return true if the track is valid, otherwise return false.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [3, 2, 1, 2, 3]
<strong>Output</strong>: true
<strong>Explanation</strong>: Middle pillar is 1, both sides are [3, 2] and [2, 3] which are mirrors of each other, and the constant height difference is 1.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [3, 2, 1, 2, 4]
<strong>Output</strong>: false
<strong>Explanation:</strong> The sides [3, 2] and [2, 4] are not mirrors of each other.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>3 ≤ n ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;