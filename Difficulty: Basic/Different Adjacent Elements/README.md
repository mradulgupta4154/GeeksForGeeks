<h2><a href="https://www.geeksforgeeks.org/problems/distinct-adjacent-element2121/1">Different Adjacent Elements</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18.6667px;">Given an array <strong>arr[]</strong> of integers, determine whether it is possible to rearrange the array using any number of swaps between adjacent elements - so that no two adjacent elements in the resulting array are equal.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 1, 2]
<strong>Output:</strong> true
<strong>Explanation</strong>: Swapping the last two elements gives [1, 2, 1], where no two adjacent elements are equal.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [7, 7, 7, 7]
<strong>Output:</strong> false
<strong>Explanation: </strong>Every element is identical, so any arrangement will always have equal adjacent elements - no sequence of swaps can fix this.</span></pre>
<p><span style="font-size: 18px;"><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ arr.size() ≤ 10<sup>6<br></sup>1 ≤ arr[i] ≤ 10<sup>5</sup></span><sup><br></sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;