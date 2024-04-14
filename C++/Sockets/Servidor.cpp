#include <iostream>
#include <WinSock2.h>
#include <string>

#pragma comment(lib, "Ws2_32.lib")

using std::cout;
using std::cin;
using std::endl;


class Server{
public:
    WSADATA WSAData;
    SOCKET server, client;
    SOCKADDR_IN serverAddr, clientAddr;
    char buffer[1024];

public:
    Server()
    {
        WSAStartup(MAKEWORD(2,0), &WSAData);
        // 1. creacion del socket
        server = socket(AF_INET, SOCK_STREAM, 0);

        // 2. opciones del socket (ip, familia, puerto)
        serverAddr.sin_addr.s_addr = INADDR_ANY;
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons(5555);

        // 3. avisar al SO que estamos listso
        bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));

        // 4. levantar el servicio
        listen(server, 0);

        cout << "Escuchando para conexiones entrantes." << endl;
        int clientAddrSize = sizeof(clientAddr);
        if((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
        {
            cout << "Cliente conectado!" << endl;
        }
    }

    void Recibir()
    {
      recv(client, buffer, sizeof(buffer), 0);
      // 5. desplegar mensaje recibido
      cout << "Cliente: " << buffer << endl;
      memset(buffer, 0, sizeof(buffer));
    }

    void Enviar()
    {
        // 5. enviar mensaje a cliente
        cout << "Ingrese mensaje para Cliente: " << endl;
        cin >> this->buffer; 
        send(client, buffer, sizeof(buffer), 0);
        memset(buffer, 0, sizeof(buffer));
        cout << "Mensaje enviado!" << endl;
    }

    void CerrarSocket()
    {
        // 6. cerrar la conexion
        closesocket(client);
        cout << "Socket cerrado, cliente desconectado." << endl;
    }
};


int main()
{
    Server *Servidor = new Server();
    while (true) {
        Servidor->Recibir();
        Servidor->Enviar();

    }
}
