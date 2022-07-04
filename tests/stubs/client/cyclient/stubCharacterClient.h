// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubCharacterClient_custom.h file.

#ifndef STUB_CLIENT_CYCLIENT_CHARACTERCLIENT_H
#define STUB_CLIENT_CYCLIENT_CHARACTERCLIENT_H

#include "client/cyclient/CharacterClient.h"
#include "stubCharacterClient_custom.h"

#ifndef STUB_CharacterClient_sendAndWaitReply
//#define STUB_CharacterClient_sendAndWaitReply
  int CharacterClient::sendAndWaitReply(const Operation&, OpVector&)
  {
    return 0;
  }
#endif //STUB_CharacterClient_sendAndWaitReply

#ifndef STUB_CharacterClient_sendLook
//#define STUB_CharacterClient_sendLook
  Ref<LocatedEntity> CharacterClient::sendLook(const Operation& op)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_CharacterClient_sendLook

#ifndef STUB_CharacterClient_CharacterClient
//#define STUB_CharacterClient_CharacterClient
   CharacterClient::CharacterClient(RouterId mindId, const std::string& entityId, ClientConnection&, TypeStore& typeStore)
    : BaseMind(mindId, entityId, ClientConnection, typeStore)
  {
    
  }
#endif //STUB_CharacterClient_CharacterClient

#ifndef STUB_CharacterClient_send
//#define STUB_CharacterClient_send
  void CharacterClient::send(const Operation& op)
  {
    
  }
#endif //STUB_CharacterClient_send

#ifndef STUB_CharacterClient_look
//#define STUB_CharacterClient_look
  Ref<LocatedEntity> CharacterClient::look(const std::string&)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_CharacterClient_look

#ifndef STUB_CharacterClient_lookFor
//#define STUB_CharacterClient_lookFor
  Ref<LocatedEntity> CharacterClient::lookFor(const Atlas::Objects::Entity::RootEntity&)
  {
    return *static_cast<Ref<LocatedEntity>*>(nullptr);
  }
#endif //STUB_CharacterClient_lookFor


#endif