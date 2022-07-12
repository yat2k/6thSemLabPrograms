import socket

ip = "127.0.0.1"
port = 4444

server=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
server.connect((ip, port))

string = input ("Enter string: ")
server.send(bytes(string, "utf-8"))
buffer = server.recv(1024)
buffer = buffer.decode("utf-8")
print(f"Server: {buffer} ")
