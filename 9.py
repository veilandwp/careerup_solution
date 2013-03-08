#冒泡排序 时间复杂度O(N * N)
def bubbleSort(list):
	for i in range(len(list)):
		for j in range(i, len(list)):
			if list[i] > list[j]:
				list[i], list[j] = list[j], list[i]
	print(list)

#插入排序 时间复杂度O(N * N)
def insertSort(list):
	for i in range(1, len(list)):
		key = list[i]
		j = i - 1
		while j >= 0 and list[j] > key:
			list[j + 1] = list[j]
			j = j - 1
		list[j + 1] = key
	print(list)

def merge(l1, l2):
    final = []
    #对l1,l2进行排序
    l1 = sorted(l1) 
    l2 = sorted(l2)
    while l1 and l2:
        if l1[0] <= l2[0]:
            final.append(l1.pop(0))
        else:
            final.append(l2.pop(0))
    return final + l1 + l2

def mergesort(List):
    mid=int(len(List)/2)
    if len(List)<=1:return List
    return merge(mergesort(List[:mid]),mergesort(List[mid:]))

print(mergesort([1, 6, 2, 3, 2]))