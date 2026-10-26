<h2><a href="https://www.geeksforgeeks.org/problems/floating-point-number-even-or-odd0146/1">Floating Point Number Even or Odd</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given a floating point number represented as a string <strong>s</strong>, determine whether it is even or odd.</span></p>
<ul>
<li><span style="font-size: 18.6667px;">Ignore all trailing zeros in the fractional part.</span></li>
<li><span style="font-size: 18.6667px;">If the fractional part becomes empty after removing the trailing zeros, determine the parity using the last digit of the integer part.</span></li>
<li><span style="font-size: 18.6667px;">Otherwise, determine the parity using the last non-zero digit of the fractional part.</span></li>
</ul>
<p><span style="font-size: 18.6667px;">It is guaranteed that s contains at least one non-zero digit. Return </span><span style="font-size: 18.6667px;">true </span><span style="font-size: 18.6667px;">if the number is even, otherwise return </span><span style="font-size: 18.6667px;">false</span><span style="font-size: 18.6667px;">.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "97.8"
<strong>Output: </strong>true
<strong>Explanation:</strong> The last significant digit is 8, which is even.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "100.70"
<strong>Output: </strong>false<br><strong>Explanation:</strong> Trailing zeros after the decimal point are ignored. The last significant digit is 7, which is odd.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "990.00"<br><strong>Output: </strong>true<br><strong>Explanation: </strong></span><span style="font-size: 18.6667px;">After removing the trailing zeros from the fractional part, the number becomes 990. Since the last digit of the integer part is 0, its parity is even, so the answer is true.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 <span style="color: rgba(0, 0, 0, 0.87); font-family: monospace; background-color: #f9f9f9;">≤</span> |s| <span style="color: rgba(0, 0, 0, 0.87); font-family: monospace; background-color: #f9f9f9;">≤</span> 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;