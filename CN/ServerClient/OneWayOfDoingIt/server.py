import socket

s = socket.socket()
print("Socket successfully created\n")

port = 6000
s.bind(('',port))
print("Socket binded to %s"%(port))

s.listen(5)
print("Socket is Listening")

while 1:
        c,addr = s.accept()
        print("Got Connection from",addr)
        c.send("Succesfully Connected".encode())
        msg = c.recv(1024).decode().upper()
        c.send(msg.encode())
        c.close()
        break
