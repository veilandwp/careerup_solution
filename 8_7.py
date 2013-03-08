#迭代解法
def cents(num):
	for x in range(int(num) + 1):
		for y in range(int((num - x) / 5) + 1):
			for z in range(int((num - x - 5 * y) / 10) + 1):
				for t in range(int((num - x - 5 * y - 10 * z) / 25) + 1):
					if x + 5 * y + 10 * z + 25 * t == num:
						print(x, " ", y, " ", z, " ", t)
#递归解法
def cents2(num, x, y, z, t):
	if num == 0:
		print(x, " ", y, " ", z, " ", t)
	if num >= 25:
		cents2(num - 25, x + 1, y, z, t)
	if num >= 10:
		cents2(num - 10, x, y + 1, z, t)
	if num >= 5:
		cents2(num - 5, x, y, z + 1, t)
	if num >= 1:
		cents2(num - 1, x, y, z, t + 1)

cents2(25, 0, 0, 0, 0)