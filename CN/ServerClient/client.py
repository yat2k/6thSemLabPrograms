import socket

s=socket.socket()

port = 6000

s.connect(('127.0.0.1',port))
print(s.recv(1024).decode())


msg  =raw_input("Enter the text to be Conveted : ")
s.send(msg)
print(s.recv(1024).decode())

s.close()
