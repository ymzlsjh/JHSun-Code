哈希hash表算法的本质：
建立两个数组hash1,hash2来存放正数和负数的地址，一定要先判断target-sums[i]的正负，
从而找到另外的一个数如果存在的话是在hash1还是在hash2中，如果在hash1中，那就直接输出两个数，如果不在hash1中，再次判断sums[i]的正负，
并判断其应该填充在hash1还是hash2中。