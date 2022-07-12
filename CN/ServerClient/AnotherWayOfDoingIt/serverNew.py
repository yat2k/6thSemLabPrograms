import socket

ip = "127.0.0.1"
port = 4444

server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
print("Socket Succesfully Created")
server.bind((ip, port))
print("Socket Succesfully Binded")
server.listen(5)
print("Socket is Listening..")


while True:
    client, address = server.accept ()
    print (f"Connection Estabished {address}")
    string = client.recv(1024)
    string = string.decode("utf-8")
    string = string.upper()
    client.send(bytes (string, "utf-8"))
    client.close ()
    break
