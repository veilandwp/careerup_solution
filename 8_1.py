def bubble(n):
	if n == 1:
		return 0
	if n == 2:
		return 1
	return bubble(n - 1) + bubble(n - 2)

def bubble2(n):
	if n == 1:
		return 0
	if n == 2:
		return 1
	a, b = 0, 1
	for i in range(n - 2):
		a, b = b, a + b
	return b
