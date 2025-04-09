#pragma once
// include the socket library
#include <sys/socket.h>

/* The type of the domain used for the socket
 * IPV4: 32 bit ip address
 * IPV6: 128 bit ip address
 * AFUNIX: unix domain sockets (local seckets) that communicate between
 * processes on the same machine, AF_NS: Xerox networking, not widely used any
 * more
 */
enum class Domain { IPV4, IPV6, FUNIX, AF_NS };

/* The type of socket
 * Stream: TCP under the hood, most reliable. For file transfer.
 * Dgram: UDP under the hood, not as reliable. Less overhead. For streaming.
 * Raw: no protocol under the hood. Need to implement all by ourselves.
 */
enum class SockType { SOCK_STREAM, SOCK_DGRAM, SOCK_RAW };

// define a namespace to not cause name conflicts
namespace sock {

class Socket {
public:
  Socket(Domain domain, SockType socktype);
};

}; // namespace sock
