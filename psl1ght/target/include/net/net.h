#pragma once

#include <psl1ght/types.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <stdlib.h>

#define net_errno *netErrnoLoc()
#define net_h_errno *netHErrnoLoc();

typedef u32 net_socklen_t;

typedef struct
{
	u32 memory;
	s32 memory_size;
	s32 flags;
} netInitialization;

typedef struct
{
	s32 s;
	s32 proto;
	s32 recv_queue_len;
	s32 send_queue_len;
	struct in_addr local_adr;
	s32 local_port;
	struct in_addr remote_adr;
	s32 remote_port;
	s32 state;
} netSocketInfo;

struct net_iovec
{
	u32			padding1;
	lv2_void	iov_base;
	u32			padding2;
	lv2_size_t	iov_len;
};

struct net_msghdr
{
	u32				padding1;
	lv2_void		msg_name;
	net_socklen_t	msg_namelen;
	u32				padding2;
	u32				padding3;
	lv2_void		msg_iov;
	s32				msg_iovlen;
	u32				padding4;
	u32				padding5;
	lv2_void		msg_control;
	net_socklen_t	msg_controllen;
	s32				msg_flags;
};

struct net_hostent {
	lv2_void h_name;
	lv2_void h_aliases;
	s32 h_addrtype;
	s32 h_length;
	lv2_void h_addr_list;
};

#define	NET_FD_SETSIZE	32
//#define NBBY			8
#define	NET_NFDBITS		(sizeof(net_fd_mask) * NBBY)
typedef	s32 net_fd_mask;
typedef	struct {
	net_fd_mask	fds_bits[howmany(NET_FD_SETSIZE, NET_NFDBITS)];
} net_fd_set;

EXTERN_BEGIN

s32 netInitialize();
s32 netDeinitialize();

s32* netErrnoLoc(void);
s32* netHErrnoLoc(void);

s32 netFinalizeNetwork();
#define netInitializeNetwork netInitialize
s32 netGetSockInfo(s32 socket, netSocketInfo* p, s32 n);
s32 netInitializeNetworkEx(netInitialization* param);
s32 netShowIfConfig();
s32 netShowNameserver();
s32 netShowRoute();

int netAccept(int socket, const struct sockaddr* address, net_socklen_t* address_len);
int netBind(int socket, const struct sockaddr* address, net_socklen_t address_len);
int netConnect(int socket, const struct sockaddr* address, net_socklen_t address_len);
int netGetPeerName(int socket, struct sockaddr* address, net_socklen_t* address_len);
int netGetSockName(int socket, struct sockaddr* address, net_socklen_t* address_len);
int netGetSockOpt(int socket, int level, int option_name, void* option_value, socklen_t* option_len);
int netListen(int socket, int backlog);
ssize_t netRecv(int socket, void* buffer, size_t length, int flags);
ssize_t netRecvFrom(int socket, void* buffer, size_t length, int flags, struct sockaddr* address, net_socklen_t* address_len);
ssize_t netRecvMsg(int socket, struct net_msghdr* message, int flags);
ssize_t netSend(int socket, const void* message, size_t length, int flags);
ssize_t netSendTo(int socket, const void* message, size_t length, int flags, const struct sockaddr* dest_addr, net_socklen_t dest_len);
ssize_t netSendMsg(int socket, const struct net_msghdr* message, int flags);
int netSetSockOpt(int socket, int level, int option_name, const void* option_value, socklen_t option_len);
int netShutdown(int socket, int how);
int netSelect(int nfds, fd_set* readfds, fd_set* writefds, fd_set* errorfds, struct timeval_32* timeout);
int netSocket(int domain, int type, int protocol);
int netSocketPair(int domain, int type, int protocol, int socket_vector[2]);
s32 netClose(int socket);
s32 netGetSockInfo(s32 socket, netSocketInfo* p, s32 n);

struct net_hostent* netGetHostByAddr(const char* addr, net_socklen_t len, int type);
struct net_hostent* netGetHostByName(const char* name);

EXTERN_END
