plaintext = input("Enter the text:") #user defined plaintext
key = input("Enter the key:") #user defined key

def encrypt(plaintext, key): # fuction to encrypt plain text
    text="" # intially defined an empty string
    for i in plaintext:
        if i!= " ": # in this "for" loop inputing the plaintext as local variable in the function in the name of "text"
            text=text+i
    plain_text=text.upper() #convert the all the characters of "text" into UPPER CASE
    key_length = len(key) # Finding the length of the key
    key_as_int = [ord(i) for i in key] # converts all the characters of the key into ascii value
    plaintext_int = [ord(i) for i in plain_text] #converts all the characters of the plain_text into ascii value
    ciphertext = ''# define an empty string
    for i in range(len(plaintext_int)):
        value = ( key_as_int[i % key_length] - plaintext_int[i]) % 26 #this loop generates a "value" using the formula as mentioned "ciphertext= key-plaintext"
        ciphertext += chr(value + 65) # converting the "value" into character and adding it to "ciphertext"
    return ciphertext

ciphertext=encrypt(plaintext,key)
print("The cipher text is:" , ciphertext)#print ciphertext

def decrypt(ciphertext, key):
    key_length = len(key)# Finding the length of the key
    key_as_int = [ord(i) for i in key]# converts all the characters of the key into ascii value
    ciphertext_int = [ord(i) for i in ciphertext] #converts all the characters of the plain_text into ascii value
    plaintext = ''# intially defined an empty string
    for i in range(len(ciphertext_int)):
        value = ( key_as_int[i % key_length] - ciphertext_int[i]) %26 #this loop generates a "value" using the formula as mentioned "plaintext= key-ciphertext"
        plaintext += chr(value + 65)# converting the "value" into character and adding it to "plaintext"
    return plaintext

plain_text=decrypt(ciphertext,key)
print("The plaintext is:",plain_text)#print plaintext