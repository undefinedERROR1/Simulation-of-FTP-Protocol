#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>

#define PROMPT "FTP>> "
#define PORT 10075
#define MAXLINE 5000

//extern char buf[1024];
//extern char file_name[1024];
//extern int clientSocket;
//extern char buffer[1024];