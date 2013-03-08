def subSets(seq):
	if len(seq) == 0:
		return
	print(seq)
	for x in seq:
		s = seq[:]
		subSets(s.remove(x))
subSets([1, 2, 4])