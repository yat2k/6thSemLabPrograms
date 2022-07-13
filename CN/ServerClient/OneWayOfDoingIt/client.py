import socket

s=socket.socket()
port = 6000
s.connect(('127.0.0.1',port))
print(s.recv(1024).decode())

msg=input("Enter the text to be Conveted : ")
s.send(msg.encode())
print(s.recv(1024).decode())
s.close()
