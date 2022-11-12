alpha='abcdefghijklmnopqrstuvwxyz'
key=input('Enter the key ');
index=input('Enter the index  ');
c1=''
for i in key:
    if i not in c1:
        c1+=i
for i in range(0,len(alpha)):
    if alpha[i]==index:
        pos=i
        break;
cipher=[]
for i in range(0,26):
    cipher.append(0);
t=pos    
for j in range(0,len(c1)):
    if(t<26):
        cipher[t]=c1[j];
        t+=1;
        if t==26:
            for i in range(0,pos):
                j+=1
                if(j<len(c1)):
                    cipher[i]=c1[j]
                else:
                    for k in alpha:
                        if k not in cipher:
                            cipher[i]=k
                            i+=1
if(t<26):
     for k in alpha:
         if k not in cipher:
             cipher[t]=k
             t+=1
             if(t==26):
                 t=0
             if(t==pos):
                 break;
    
p=input('Enter the text ');
print(cipher)

c=''
for i in range(0,len(p)):
    for j in range(0,26):
        if p[i]==alpha[j]:
            c+=cipher[j]
print(c)

p=''
for i in range(0,len(c)):
    for j in range(0,26):
        if c[i]==cipher[j]:
            p+=alpha[j]

print(p)
