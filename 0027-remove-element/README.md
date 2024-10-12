<h2><a href="https://leetcode.com/problems/remove-element/">27. Remove Element</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">val</code>, remove all occurrences of <code style="user-select: auto;">val</code> in <code style="user-select: auto;">nums</code> <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">in-place</strong></a>. The order of the elements may be changed. Then return <em style="user-select: auto;">the number of elements in </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> which are not equal to </em><code style="user-select: auto;">val</code>.</p>

<p style="user-select: auto;">Consider the number of elements in <code style="user-select: auto;">nums</code> which are not equal to <code style="user-select: auto;">val</code> be <code style="user-select: auto;">k</code>, to get accepted, you need to do the following things:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Change the array <code style="user-select: auto;">nums</code> such that the first <code style="user-select: auto;">k</code> elements of <code style="user-select: auto;">nums</code> contain the elements which are not equal to <code style="user-select: auto;">val</code>. The remaining elements of <code style="user-select: auto;">nums</code> are not important as well as the size of <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;">Return <code style="user-select: auto;">k</code>.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Custom Judge:</strong></p>

<p style="user-select: auto;">The judge will test your solution with the following code:</p>

<pre style="user-select: auto;">int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i &lt; actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p style="user-select: auto;">If all assertions pass, then your solution will be <strong style="user-select: auto;">accepted</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,2,3], val = 3
<strong style="user-select: auto;">Output:</strong> 2, nums = [2,2,_,_]
<strong style="user-select: auto;">Explanation:</strong> Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,2,2,3,0,4,2], val = 2
<strong style="user-select: auto;">Output:</strong> 5, nums = [0,1,4,0,3,_,_,_]
<strong style="user-select: auto;">Explanation:</strong> Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= val &lt;= 100</code></li>
</ul>
</div>