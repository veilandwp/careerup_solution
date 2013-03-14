def merge(A, B, n, m):
	k = n + m - 1
	i = n - 1
	j = m - 1
	while i >= 0 and j >= 0:
		if A[i] >= B[j]:
			A[k] = A[i]
			k -= 1
			i -= 1
		else:
			A[k] = B[j]
			k -= 1
			j -= 1
	while j >= 0:
		A[k] = B[j]
		k -= 1
		j -= 1

A = [1, 3, 5, 0, 0, 0]
B = [2, 4, 6]
merge(A, B, 3, 3)
print(A)