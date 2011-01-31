#pragma once

#include <sys/socket.h>

extern int h_errno;

struct hostent {
	char* h_name;
	char** h_aliases;
	int h_addrtype;
	int h_length;
	char** h_addr_list;
	#define h_addr h_addr_list[0]
};

#define NETDB_INTERNAL	-1
#define NETDB_SUCCESS	0x00
#define HOST_NOT_FOUND	0x01
#define TRY_AGAIN		0x02
#define NO_RECOVERY		0x03
#define NO_DATA			0x04
#define NO_ADDRESS		NO_DATA

EXTERN_BEGIN

struct hostent* gethostbyaddr(const char* addr, socklen_t len, int type);
struct hostent* gethostbyname(const char* name);

EXTERN_END
