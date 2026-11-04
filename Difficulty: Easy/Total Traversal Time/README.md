<h2><a href="https://www.geeksforgeeks.org/problems/total-traversal-time/1">Total Traversal Time</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given two arrays <strong>arr[] </strong>and <strong>penalty[] </strong>of same size, where each element of arr[] lies in the range 0 to n - 1, traverse arr[] from left to right and calculate the total traversal time.</span></p><p><span style="font-size: 14pt;">For each element arr[i]:</span></p><ul><li><span style="font-size: 14pt;">If arr[i] appears for the first time, it takes 1 second to move forward.</span></li><li><span style="font-size: 14pt;">If arr[i] has appeared before, it takes penalty[arr[i]] seconds to move forward.</span></li></ul><p><span style="font-size: 14pt;">Return the total time required to traverse the entire array.</span></p><p><span style="font-size: 18px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 3, 3], penalty[] = [1, 2, 3, 4]
<strong>Output: </strong>7
<strong>Explanation:
</strong></span><span style="font-size: 18px;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/933519/Web/Other/blobid1_1788771363.png" height="100"><br>For i = 0, traversal time = 1 second
For i = 1, traversal time = 1 second 
For i = 2, traversal time = 1 second 
For i = 3, traversal time = penalty[arr[3]] = penalty[3] = 4
Total = 1 + 1 + 1 + 4 = 7 </span></pre><pre><span style="font-size: 18px;"><span style="font-family: Arial;"><span style="font-family: arial, helvetica, sans-serif;"><strong>Input: </strong>arr[] = [6, 6, 1, 7, 1, 1, 3, 1], penalty[] = [8, 4, 1, 5, 2, 8, 9, 3]<strong>
Output: </strong>25</span><strong>
Explanation:
</strong></span></span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/933519/Web/Other/blobid2_1788771744.png" height="100"><br><span style="font-size: 14pt;">For i = 0, traversal time = 1 second
For i = 1, traversal time = penalty[arr[1]] = penalty[6] = 9
For i = 2, traversal time = 1 second
For i = 3, traversal time = 1 second
For i = 4, traversal time = penalty[arr[4]] = penalty[1] = 4
For i = 5, traversal time = penalty[arr[5]] = penalty[1] = 4
For i = 6, traversal time = 1 second
For i = 7, traversal time = penalty[arr[7]] = penalty[1] = 4
Total = 1 + 9 + 1 + 1 + 4 + 4 + 1 + 4 = 25</span></pre></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;