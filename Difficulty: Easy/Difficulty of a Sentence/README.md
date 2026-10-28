<h2><a href="https://www.geeksforgeeks.org/problems/difficulty-of-sentence5856/1">Difficulty of a Sentence</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given a sentence represented as a string <strong>s</strong>, calculate its difficulty score.</span></p>
<ul>
<li><span style="font-size: 18px;">The difficulty score is defined as : </span><span style="font-size: 18px;"><strong>5</strong>×(number of hard words)+<strong>3</strong>×(number of easy words) </span></li>
<li><span style="font-size: 18px;">A word is considered hard if either&nbsp;</span><span style="font-size: 18px;">It contains 4 consecutive consonants, or t</span><span style="font-size: 18px;">he number of consonants in the word is greater than the number of vowels. </span></li>
<li><span style="font-size: 18px;">Otherwise, the word is considered easy.</span></li>
</ul>
<p><span style="font-size: 18px;">Return the difficulty score of the given sentence.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Uppercase and lowercase letters should be treated as the same. The vowels are <strong>a</strong>, <strong>e</strong>, <strong>i</strong>, <strong>o</strong>, and <strong>u</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: s = "Difficulty of sentence"
<strong>Output</strong>: 13
<strong>Explanation</strong>: The words "Difficulty" and "sentence" are hard because they contain more consonants than vowels, while "of" is an easy word. Therefore the difficulty score is 5 × 2 + 3 × 1 = 13.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: s = "I am good"
<strong>Output</strong>: 9
<strong>Explanation</strong>: The words "I", "am", and "good" are all easy words since none of them contain 4 consecutive consonants and none have more consonants than vowels. Therefore the difficulty score is 5 × 0 + 3 × 3 = 9.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints</strong>:<br>1 ≤ |s| ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;