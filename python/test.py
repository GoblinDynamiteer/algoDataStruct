def sqrt(n):
	return n*n
	
def fact(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)

def fact2(n):
	i = 1
	for n in range (1, n+1):
		i=i*n
	return i
	
for i in range(0,20):
	print(i)
	print(i*i+2)
	
for c in  "kalle":
	print(c)
	
lista={'Kalle':'Anka', 'Sven':'Manniska'}

for banan in lista:
	print(banan)

i = sqrt(66)
print(i)

nfak = fact(20)
print(nfak)

nfak = fact2(20)
print(nfak)

