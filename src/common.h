
#ifndef INCLUDES_H
#define INCLUDES_H

// C standard library header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <signal.h>
#include <inttypes.h>
#include <math.h>

// Linux specific header files
#ifndef _WIN32
#include <unistd.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/epoll.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/tcp.h>
#endif

// Windows specific
#ifdef _WIN32

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#endif // _WIN32

#ifdef _WIN32
#define CLOSE(s) WSACleanup(); closesocket(s)
#else
#define CLOSE(s) close(s)
#endif

#endif // INCLUDES_H
