## Algorithm

1. Build a min heap of first K elements.
2. Traverse from (K+1)th element
(a) compare current elements with top of heap.If Smaller than top Ignore it.
(b) Else remove the top element and insert the current element in the min heap;

3. Print the content

### Time complexity 
 to make a heap  = O(k)
 to traverse throug a heap = O((n-k)*logk);
print a heap = O(k)

overall time complexity = O(k + (n-k)*logk);