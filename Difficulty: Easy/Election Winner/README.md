<h2><a href="https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1">Election Winner</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given an array of strings arr[] representing votes cast in an election, where each string is the name of a candidate in lowercase English letters, find the candidate who received the maximum number of votes. </span></p>
<p><span style="font-size: 14pt;">If multiple candidates receive the same highest number of votes, return the lexicographically smaller candidate name along with its vote count.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :<br></strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [john, johnny, jackie, johnny, john, jackie, jamie, jamie, john, johnny, jamie, johnny, john]
<strong>Output: </strong>[john, 4]<strong>
Explanation: </strong>john has 4 votes casted for him, but so does johnny. john is lexicographically smaller, so we print john and the votes he received.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [andy, blake, clark]
<strong>Output: [</strong>Andy, 1]<strong>
Explanation: </strong>All the candidates get 1 votes each. We print andy as it is lexicographically smaller.</span>
</pre></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<code>Atlassian</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;