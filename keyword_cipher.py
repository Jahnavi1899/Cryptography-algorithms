#works only for smaller case alphabhets
bla=input("keyword")
def removeDuplicates(string):
	uniqs = ''
	for x in string:
		if not(x in uniqs):
			uniqs = uniqs + x
	return uniqs
i=removeDuplicates(bla)
final=dict()
start='a'
ordd=97
for j in i:
	if j not in final:
		final[j]=start
		ordd=ordd+1
	start=chr(ordd)
sentence='abcdefghijklmnopqrstuvwxyz'
for k in sentence:
	if k not in final:
		final[k]=start
		ordd=ordd+1
	start=chr(ordd)
plaintext=input('plain text')
answer=''
#print (final)
for each in plaintext:
	#c=final[each]
	for val in final.items():
			if val[1] == each:
				c = val[0]
	answer=answer+c
print("the final answer")
print (answer)
