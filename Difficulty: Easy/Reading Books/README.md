<h2><a href="https://www.geeksforgeeks.org/problems/reading-books3803/1">Reading Books</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given two arrays<strong> arr1[]</strong> and<strong> arr2[]</strong>, and an integer<strong> k</strong>, where arr1[i] represents the time required to read a book of kind i once and arr2[i] represents the points earned after reading it once.</span></p>
<p><span style="font-size: 18px;">Geek has k minutes and can choose <strong>exactly one</strong> kind of book. He may read the chosen book repeatedly within the available time, but cannot read books of different kinds.</span></p>
<p><span style="font-size: 18px;">Return the <strong>maximum</strong> possible points Geek can earn.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> k = 10, arr1[] = [3, 4, 5], arr2[] = [4, 4, 5]
<strong>Output:</strong> 12
<strong>Explanation:</strong><strong><br></strong>Choosing the first kind allows Geek to read it ⌊10 / 3⌋ = 3 times and earn 3 × 4 = 12 points.
Choosing the second kind allows Geek to read it ⌊10 / 4⌋ = 2 times and earn 2 × 4 = 8 points.
Choosing the third kind allows Geek to read it ⌊10 / 5⌋ = 2 times and earn 2 × 5 = 10 points.
Therefore, the maximum points Geek can earn is 12.<br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> k = 12, arr1 = [8, 5], arr2 = [100, 5]
<strong>Output:</strong> 100
<strong>Explanation:</strong><strong><br></strong>Choosing the first kind allows Geek to read it ⌊12 / 8⌋ = 1 time and earn 1 × 100 = 100 points.
Choosing the second kind allows Geek to read it ⌊12 / 5⌋ = 2 times and earn 2 × 5 = 10 points.
Therefore, the maximum points Geek can earn is 100.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5<br></sup></span><span style="font-size: 18px;">1 ≤ k, arr1[i]</span><sub>&nbsp;</sub><span style="font-size: 18px;">≤ 10</span><sup>4<br></sup><span style="font-size: 18px;">0 ≤ </span><span style="font-size: 18px;">arr2[i]</span><span style="font-size: 18px;"> </span><span style="font-size: 18px;">≤ 10</span><sup>4</sup><sup> </sup></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;