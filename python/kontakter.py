import sys

def main():
	kontaktlista=[]
	print("Välkommen till kontakter!")
	for i in range(0,3):
		print("Mata in kontakt nr", i+1)
		namn=input("Ange namn: ")
		kontakt={'namn':namn}
		alder=int(input("Ange ålder: "))
		kontakt['ålder'] = alder
		kontaktlista += [kontakt]
	print(kontaktlista)
main()