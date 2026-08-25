<h2><a href="https://www.geeksforgeeks.org/problems/countries-at-war2936/1">Winner in Pairwise Army Battles</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18.6667px;">Two armies, A and B, have the same number of soldiers. The power of their soldiers is given by <strong>arr1[]</strong> and <strong>arr2[]</strong>, where the i</span><span style="font-size: 18.6667px;">th </span><span style="font-size: 18.6667px;">soldier of Army A fights only the i</span><span style="font-size: 18.6667px;">th </span><span style="font-size: 18.6667px;">soldier of Army B.<br></span></p>
<ul>
<li><span style="font-size: 18.6667px;">If arr1[i] &gt; arr2[i], Army A wins the battle.</span></li>
<li><span style="font-size: 18.6667px;">If arr1[i] &lt; arr2[i], Army B wins the battle.</span></li>
<li><span style="font-size: 18.6667px;">If arr1[i] == arr2[i], both soldiers are eliminated.</span></li>
</ul>
<p><span style="font-size: 18.6667px;">Return "<strong>A</strong>" if Army A wins more battles, "<strong>B</strong>" if Army B wins more battles, otherwise return "<strong>DRAW</strong>"</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr1[] = [2, 2], arr2[] = [5, 5]
<strong>Output:</strong> "B"
<strong>Explanation: <br></strong>Battle 1: 2 &lt; 5, so Army B wins.
Battle 2: 2 &lt; 5, so Army B wins.
Army B wins 2 battles, while Army A wins 0 battles. Therefore, the winner is "B".
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr1[] = [9], arr2[] = [8]  <strong>
Output:</strong> "A"
<strong>Explanation: <br></strong>Battle 1: 9 &gt; 8, so Army A wins.
Army A wins 1 battle, while Army B wins 0 battles. Therefore, the winner is "A".
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ arr1.size() ≤ 10<sup>6</sup><br>0 ≤ arr1[i], arr2[i] ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;