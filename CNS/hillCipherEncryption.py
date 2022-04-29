# Python3 code to implement Hill Cipher  --- This is only encryption and not decryption
#Code is messy, if anyone wants to modify, feel free

keyMatrix = [[0] * 3 for i in range(3)]

# Generate vector for the message
messageVector = [[0] for i in range(3)]

# Generate vector for the cipher
cipherMatrix = [[0] for i in range(3)]

# Following function generates the
# key matrix for the key string
def getKeyMatrix(key):
	k = 0
	for i in range(3):
		for j in range(3):
			keyMatrix[i][j] = ord(key[k]) % 65
			k += 1

# Following function encrypts the message
def encrypt(messageVector):
	for i in range(3):
		for j in range(1):
			cipherMatrix[i][j] = 0
			for x in range(3):
				cipherMatrix[i][j] += (keyMatrix[i][x] *
									messageVector[x][j])
			cipherMatrix[i][j] = cipherMatrix[i][j] % 26

def HillCipher(message, key):

	# Get key matrix from the key string
	getKeyMatrix(key)

	# Generate vector for the message
	for i in range(3):
		messageVector[i][0] = ord(message[i]) % 65

	# Following function generates
	# the encrypted vector
	encrypt(messageVector)

	# Generate the encrypted text
	# from the encrypted vector
	CipherText = []
	for i in range(3):
		CipherText.append(chr(cipherMatrix[i][0] + 65))

	# Finally print the ciphertext
	print("Ciphertext: ", "".join(CipherText))

def main():

	msg1="YAT"					#Use your own name with each string divided into strings of length 3
	msg2="HIN"					#will make the code better with for loop (but lazy rn)
	msg3="RAO"

	key = "GYBNQKURP"                     #Any key is fine

	HillCipher(msg1, key)
	HillCipher(msg2, key)
	HillCipher(msg3, key)

if __name__ == "__main__":
	main()
