#pragma once
#include <sys/socket.h>
// include the socket library

// the type of
enum class Domain { IPV4, IPV6, AFUNIX, AF_NS };

/*
 * IPV4: 32 bit ip address
 * IPV6: 128 bit ip address
 * AFUNIX: unix domain sockets (local seckets) that communicate between
 * processes on the same machine, AF_NS: Xerox networking, not widely used any
 * more
 */

// define a namespace to not cause name conflicts
namespace sock {

class Socket {
public:
  Socket(Domain domain);
};

}; // namespace sock
