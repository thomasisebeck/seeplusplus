#include "Socket.hpp"
#include <sys/socket.h>

// todo: carru on here!
sock::Socket::Socket(Domain domain, SockType socktype) {

  // int connection = socket(domain, socktype, 0);
  // protocol chosen automatically
  int connection =
      socket(static_cast<int>(domain), static_cast<int>(socktype), 0);
}
