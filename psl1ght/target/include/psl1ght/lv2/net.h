#pragma once

#include <psl1ght/lv2.h>

#include <sys/socket.h>
#include <net/net.h>
#include <sys/select.h>

LV2_SYSCALL lv2NetAccept(int socket, struct sockaddr* address, net_socklen_t* address_len) { return Lv2Syscall3(700, socket, (u64)address, (u64)address_len); }
LV2_SYSCALL lv2NetBind(int socket, const struct sockaddr* address, net_socklen_t address_len) { return Lv2Syscall3(701, socket, (u64)address, address_len); }
LV2_SYSCALL lv2NetConnect(int socket, const struct sockaddr* address, net_socklen_t address_len) { return Lv2Syscall3(702, socket, (u64)address, address_len); }
LV2_SYSCALL lv2NetGetPeerName(int socket, struct sockaddr* address, net_socklen_t* address_len) { return Lv2Syscall3(703, socket, (u64)address, (u64)address_len); }
LV2_SYSCALL lv2NetGetSockName(int socket, struct sockaddr* address, net_socklen_t* address_len) { return Lv2Syscall3(704, socket, (u64)address, (u64)address_len); }
LV2_SYSCALL lv2NetListen(int socket, int backlog) { return Lv2Syscall2(706, socket, backlog); }
LV2_SYSCALL lv2NetRecvFrom(int socket, void* buffer, size_t length, int flags,	struct sockaddr* address, net_socklen_t* address_len) { return Lv2Syscall6(707, socket, (u64)buffer, length, flags, (u64)address, (u64)address_len); }
LV2_SYSCALL lv2NetSendTo(int socket, const void* message, size_t length, int flags, const struct sockaddr* dest_addr, net_socklen_t dest_len) { return Lv2Syscall6(710, socket, (u64)message, length, flags, (u64)dest_addr, dest_len); }
LV2_SYSCALL lv2NetShutdown(int socket, int how) { return Lv2Syscall2(712, socket, how); }
LV2_SYSCALL lv2NetSocket(int domain, int type, int protocol) { return Lv2Syscall3(713, domain, type, protocol); }
LV2_SYSCALL lv2NetClose(int socket) { return Lv2Syscall1(714, socket); }
//LV2_SYSCALL lv2NetPoll(struct pollfd fds[], nfds_t nfds, int timeout) { return Lv2Syscall3(715, (u64)fds, nfds, timeout); }
LV2_SYSCALL lv2NetSelect(int nfds, fd_set* readfds, fd_set* writefds, fd_set* errorfds, struct timeval_32* timeout) { return Lv2Syscall5(716, nfds, (u64)readfds, (u64)writefds, (u64)errorfds, (u64)timeout); }
