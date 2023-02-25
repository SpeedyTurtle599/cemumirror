import net

proc makeSocket(ip: string, port: int): Socket {.exportc.} =
    echo "Making socket..."
    let socket = newSocket(AF_INET, SOCK_STREAM, IPPROTO_TCP)
    echo "Connecting to server..."
    socket.connect(ip, Port(port))
    echo "Connected!"
    return socket

proc recv(sock: Socket, size: int): string {.exportc.} =
    echo ("Receiving data.")
    return net.recv(sock, size)

proc send(sock: Socket, data: string) {.exportc.} =
    echo ("Sending data.")
    net.send(sock, data)

proc close(sock: Socket) {.exportc.} =
    echo ("Closing socket.")
    net.close(sock)

#let s = makeSocket("localhost", 40001)
#echo s.recv(1024)
#s.close()
