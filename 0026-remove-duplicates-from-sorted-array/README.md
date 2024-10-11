<h2><a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array/">26. Remove Duplicates from Sorted Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> sorted in <strong style="user-select: auto;">non-decreasing order</strong>, remove the duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">in-place</strong></a> such that each unique element appears only <strong style="user-select: auto;">once</strong>. The <strong style="user-select: auto;">relative order</strong> of the elements should be kept the <strong style="user-select: auto;">same</strong>. Then return <em style="user-select: auto;">the number of unique elements in </em><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Consider the number of unique elements of <code style="user-select: auto;">nums</code> to be <code style="user-select: auto;">k</code>, to get accepted, you need to do the following things:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Change the array <code style="user-select: auto;">nums</code> such that the first <code style="user-select: auto;">k</code> elements of <code style="user-select: auto;">nums</code> contain the unique elements in the order they were present in <code style="user-select: auto;">nums</code> initially. The remaining elements of <code style="user-select: auto;">nums</code> are not important as well as the size of <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;">Return <code style="user-select: auto;">k</code>.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Custom Judge:</strong></p>

<p style="user-select: auto;">The judge will test your solution with the following code:</p>

<pre style="user-select: auto;">int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i &lt; k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p style="user-select: auto;">If all assertions pass, then your solution will be <strong style="user-select: auto;">accepted</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,2]
<strong style="user-select: auto;">Output:</strong> 2, nums = [1,2,_]
<strong style="user-select: auto;">Explanation:</strong> Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,0,1,1,1,2,2,3,3,4]
<strong style="user-select: auto;">Output:</strong> 5, nums = [0,1,2,3,4,_,_,_,_,_]
<strong style="user-select: auto;">Explanation:</strong> Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-100 &lt;= nums[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
</ul>
</div>