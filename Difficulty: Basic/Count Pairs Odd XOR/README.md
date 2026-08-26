<h2><a href="https://www.geeksforgeeks.org/problems/count-pairs-odd-xor0308/1">Count Pairs Odd XOR</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18.6667px;">Given an integer array <strong>arr[]</strong>, determine the number of pairs (i, j) such that 0 ≤ i &lt; j &lt; arr.size() and the XOR of arr[i] and arr[j] is odd.</span></p>
<p><strong><span style="font-size: 14pt;">Examples:</span></strong></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [1, 2, 3]</span><br><span style="font-size: 14pt;"><strong>Output:</strong> 2</span><br><span style="font-size: 14pt;"><strong>Explanation: <br></strong></span><span style="font-size: 18.6667px;">The possible pairs are:
(1, 2) -&gt; 1 ^ 2 = 3 (odd)
(1, 3) -&gt; 1 ^ 3 = 2 (even)
(2, 3) -&gt; 2 ^ 3 = 1 (odd)
Hence, there are 2 pairs whose XOR is odd.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [1, 2]</span><br><span style="font-size: 14pt;"><strong>Output:</strong> 1</span><br><span style="font-size: 14pt;"><strong>Explanation: <br></strong></span><span style="font-size: 18.6667px;">The only possible pair is:
(1, 2) -&gt; 1 ^ 2 = 3 (odd)
Therefore, the number of pairs with odd XOR is 1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong></span><span style="font-size: 18.6667px;">1 ≤ arr.size() ≤ 92681<br></span><span style="font-size: 18.6667px;">1 ≤ arr[i] ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;