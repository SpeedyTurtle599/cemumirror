import socket

data = open('image.jpg', 'rb').read()

s = socket.socket()
s.bind(('0.0.0.0', 40001))

s.listen(1)
while True:
    c, a = s.accept()
    print(a)
    c.send(data)
    c.close()