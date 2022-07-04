// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubPeer_custom.h file.

#ifndef STUB_SERVER_PEER_H
#define STUB_SERVER_PEER_H

#include "server/Peer.h"
#include "stubPeer_custom.h"

#ifndef STUB_Peer_Peer
//#define STUB_Peer_Peer
   Peer::Peer(CommSocket & client, ServerRouting & svr, const std::string & addr, int port, RouterId id)
    : Link(client, svr, addr, port, id)
  {
    
  }
#endif //STUB_Peer_Peer

#ifndef STUB_Peer_Peer_DTOR
//#define STUB_Peer_Peer_DTOR
   Peer::~Peer()
  {
    
  }
#endif //STUB_Peer_Peer_DTOR

#ifndef STUB_Peer_setAuthState
//#define STUB_Peer_setAuthState
  void Peer::setAuthState(PeerAuthState state)
  {
    
  }
#endif //STUB_Peer_setAuthState

#ifndef STUB_Peer_getAuthState
//#define STUB_Peer_getAuthState
  PeerAuthState Peer::getAuthState()
  {
    return *static_cast<PeerAuthState*>(nullptr);
  }
#endif //STUB_Peer_getAuthState

#ifndef STUB_Peer_externalOperation
//#define STUB_Peer_externalOperation
  void Peer::externalOperation(const Operation & op, Link &)
  {
    
  }
#endif //STUB_Peer_externalOperation

#ifndef STUB_Peer_operation
//#define STUB_Peer_operation
  void Peer::operation(const Operation &, OpVector &)
  {
    
  }
#endif //STUB_Peer_operation

#ifndef STUB_Peer_teleportEntity
//#define STUB_Peer_teleportEntity
  int Peer::teleportEntity(const LocatedEntity *)
  {
    return 0;
  }
#endif //STUB_Peer_teleportEntity

#ifndef STUB_Peer_peerTeleportResponse
//#define STUB_Peer_peerTeleportResponse
  void Peer::peerTeleportResponse(const Operation &op, OpVector &res)
  {
    
  }
#endif //STUB_Peer_peerTeleportResponse

#ifndef STUB_Peer_cleanTeleports
//#define STUB_Peer_cleanTeleports
  void Peer::cleanTeleports()
  {
    
  }
#endif //STUB_Peer_cleanTeleports


#endif