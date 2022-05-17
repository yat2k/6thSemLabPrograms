def redun(x,y,z):
    res = 0;
    if(x==y):
        res = 0;
        if(str(res) == z):
            res = 0;
        else: res = 1;
       
    else:
        res = 1;
        if(str(res) == z):
            res = 0;
        else: res = 1;
       
    return res;
   
def syn(a,b,c,d):
    res = redun(a,b,c)
    if(str(res) == str(d)):
        res = 0;
    else: res = 1
   
    return str(res);
   
dataWord = list(raw_input("Enter the DataWord: "));
codeWord = dataWord[:]

dataWord.reverse();
codeWord.append(str(redun(dataWord[1], dataWord[0], dataWord[3])))
codeWord.append(str(redun(dataWord[3], dataWord[2], dataWord[1])))
codeWord.append(str(redun(dataWord[2], dataWord[1], dataWord[0])))
print("Redundant Bits are: ", redun(dataWord[1], dataWord[0], dataWord[3]), redun(dataWord[3], dataWord[2], dataWord[1]), redun(dataWord[2], dataWord[1], dataWord[0]))
print("Code Word is ", codeWord)


recCodeWord = list(raw_input("Enter the recieved Keyword: "));
s0 = syn(recCodeWord[1], recCodeWord[2], recCodeWord[3], recCodeWord[6])
s1 = syn(recCodeWord[0], recCodeWord[1], recCodeWord[2], recCodeWord[5])
s2 = syn(recCodeWord[2], recCodeWord[3], recCodeWord[0], recCodeWord[4])

synd = []
synd.append(s2); synd.append(s1); synd.append(s0);
actuSyn = "".join(synd)
print("The syndrome is", (actuSyn))

msg = "".join(codeWord)

if int(actuSyn) == 0: print("No Error In The Code")
elif int(actuSyn) == 1: print("Error in Q0\nThe corrected message is",msg);
elif int(actuSyn) == 10: print("Error in Q1\nThe corrected message is",msg);
elif int(actuSyn) == 11: print("Error in B2\nThe corrected message is",msg);
elif int(actuSyn) == 100: print("Error in Q2\nThe corrected message is",msg);
elif int(actuSyn) == 101: print("Error in B0\nThe corrected message is",msg);
elif int(actuSyn) == 110: print("Error in B3\nThe corrected message is",msg);
elif int(actuSyn) == 111: print("Error in Q0\nThe corrected message is",msg);
