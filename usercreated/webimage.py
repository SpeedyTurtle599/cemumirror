import socket

data = open('car.jpg', 'rb').read()

s = socket.socket()
s.bind(('0.0.0.0', 40001))

s.listen(1)
while True:
    c, a = s.accept()
    c.send(data)
    c.close()