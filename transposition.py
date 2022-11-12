print("1 : single digit key")
print("2 : multi digit key")
value=int(input("enter option:"))
plain_text=input("enter plain text")
cipher_text=''
if(value==1):
    key=int(input("enter the key value"));
    for i in range(0,key):
        for j in range(len(plain_text)):
            if(j%key == i):
                cipher_text+=plain_text[j]
elif(value == 2):
    key=input("enter key value")
    for i in range(0,len(key)):
        for j in range(len(plain_text)):
            if(ord(key[j%(len(key))])-ord('0')==i):
                cipher_text+=plain_text[j]

print(cipher_text)
