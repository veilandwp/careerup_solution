#使用卡塔兰数
#根据前面左括号的多少，可以在后面任意添加右括号
num = 0

def parentheses(begin, end, str):
	global num
	if begin == 0 and end == 0:
		num += 1
		print(str)
	if begin > 0:
		parentheses(begin - 1, end + 1, str + ['('])
	if end > 0:
		parentheses(begin, end - 1, str + [')'])

parentheses(5, 0, [])
print(num)