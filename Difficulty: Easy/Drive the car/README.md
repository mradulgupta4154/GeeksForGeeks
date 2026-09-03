<h2><a href="https://www.geeksforgeeks.org/problems/drive-the-car2541/1">Drive the car</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18.6667px;">Given an array <strong>arr[]</strong> where each element represents the length of a sub-track, and an integer <strong>k </strong>representing the maximum distance a car can travel on any sub-track. </span></p>
<ul>
<li><span style="font-size: 18.6667px;">You may add petrol to increase the car's maximum travel distance. </span></li>
<li><span style="font-size: 18.6667px;"><strong>Each unit</strong> of petrol increases this maximum distance by <strong>1</strong> kilometer for all sub-tracks.</span></li>
</ul>
<p><span style="font-size: 18.6667px;">Determine the <strong>minimum </strong>units of petrol required so that the car can travel through every sub-track. If the car can already cover all sub-tracks with its initial capacity, return<strong> -1</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 5, 4, 5, 2], k = 7
<strong>Output: </strong>-1
<strong>Explanation: </strong></span><span style="font-size: 18.6667px;">Since the car can already traverse all the given sub-tracks, no extra petrol is required. Hence, the answer is -1.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 6, 3, 5, 2], k = 4
<strong>Output: </strong>2
<strong>Explanation: </strong></span><span style="font-size: 18.6667px;">After adding 2 units of petrol, the car's maximum travel distance becomes 6 km, allowing it to traverse all the given sub-tracks. Hence, the answer is 2.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup></span><br><span style="font-size: 14pt;">1 ≤ k,&nbsp;</span><span style="font-size: 18.6667px;">arr[i]</span><span style="font-size: 18.6667px;"> </span><span style="font-size: 14pt;">&nbsp;≤ 10</span><sup>9</sup></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;