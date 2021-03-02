#include <winsock2.h>
#include <stdio.h> 
#define MAX 80 
#define PORT 42069

int main() 
{ 
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	
	if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
	{
		printf("Failed. Error Code : %d",WSAGetLastError());
		exit(0); 
	}
	
	if((s = socket(AF_INET, SOCK_STREAM, 0 )) == INVALID_SOCKET)
	{
		printf("socket creation failed...\n");
	}
	
	server.sin_addr.s_addr = inet_addr("127.0.0.1"); 
	server.sin_family = AF_INET; 
	server.sin_port = htons(PORT); 
	
	if (connect(s, (struct sockaddr*) &server, sizeof(server)) < 0)
	{
		printf("connection with the server failed...\n");
		exit(0);
	}
	else
	{
		printf("trigger block reload\n");
	}

	const char* buff = "reload\n";
	send(s , buff , strlen(buff) , 0);

	closesocket(s); 
	WSACleanup();
} 
