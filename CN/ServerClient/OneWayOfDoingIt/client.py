import socket

s=socket.socket()
port = 6000
s.connect(('127.0.0.1',port))
print(s.recv(1024).decode())

msg=input("Enter the text to be Conveted : ")
s.send(msg.encode())
print(s.recv(1024).decode())
s.close()



#for python 2 use the below code (literally the same with raw_input)

import socket

s=socket.socket()

port = 6000

s.connect(('127.0.0.1',port))
print(s.recv(1024).decode())

msg  =raw_input("Enter the text to be Conveted : ")
s.send(msg)
print(s.recv(1024).decode())

s.close()
