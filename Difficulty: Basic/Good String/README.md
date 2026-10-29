<h2><a href="https://www.geeksforgeeks.org/problems/good-string5712/1">Good String</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given a string <strong>s</strong>, find if it is good. </span><span style="font-size: 14pt;">A string is considered good if the cyclic distance between every pair of adjacent characters is exactly 1.&nbsp;</span></p>
<ul>
<li><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">&nbsp;The cyclic distance between two characters is the minimum distance in a circular arrangement of characters from 'a' to 'z'. </span></span><span style="font-size: 18.6667px;">&nbsp;For example, t</span><span style="font-size: 18.6667px;">he distance between 'a' and 'c' is 2 and&nbsp;</span><span style="font-size: 18.6667px;">he distance between 'a' and 'y' is 2.&nbsp; </span></li>
<li><span style="font-size: 14pt;">A string of length 1 is always considered good.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "aaa"
<strong>Output:</strong> false
<strong>Explanation:</strong> distance between 'a' and 'a' is not 1.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "cbc"
<strong>Output:</strong> true
<strong>Explanation:</strong> The distance between 'c' and 'b' is 1, and the distance between 'b' and 'c' is also 1.</span></pre></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;