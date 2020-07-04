// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubPossessionClient_custom.h file.

#ifndef STUB_CLIENT_AICLIENT_POSSESSIONCLIENT_H
#define STUB_CLIENT_AICLIENT_POSSESSIONCLIENT_H

#include "client/aiclient/PossessionClient.h"
#include "stubPossessionClient_custom.h"

#ifndef STUB_PossessionClient_PossessionClient
//#define STUB_PossessionClient_PossessionClient
   PossessionClient::PossessionClient(CommSocket& commSocket, MindKit& mindFactory, std::unique_ptr<Inheritance> inheritance, std::function<void()> reconnectFn)
    : BaseClient(commSocket, mindFactory, inheritance, reconnectFn)
  {
    
  }
#endif //STUB_PossessionClient_PossessionClient

#ifndef STUB_PossessionClient_PossessionClient_DTOR
//#define STUB_PossessionClient_PossessionClient_DTOR
   PossessionClient::~PossessionClient()
  {
    
  }
#endif //STUB_PossessionClient_PossessionClient_DTOR

#ifndef STUB_PossessionClient_getMinds
//#define STUB_PossessionClient_getMinds
  const std::unordered_map<std::string, Ref<BaseMind>>& PossessionClient::getMinds() const
  {
    return *static_cast<const std::unordered_map<std::string, Ref<BaseMind>>*>(nullptr);
  }
#endif //STUB_PossessionClient_getMinds

#ifndef STUB_PossessionClient_operation
//#define STUB_PossessionClient_operation
  void PossessionClient::operation(const Operation& op, OpVector& res)
  {
    
  }
#endif //STUB_PossessionClient_operation

#ifndef STUB_PossessionClient_operationFromEntity
//#define STUB_PossessionClient_operationFromEntity
  void PossessionClient::operationFromEntity(const Operation& op, Ref<BaseMind> locatedEntity)
  {
    
  }
#endif //STUB_PossessionClient_operationFromEntity

#ifndef STUB_PossessionClient_getTime
//#define STUB_PossessionClient_getTime
  std::chrono::steady_clock::duration PossessionClient::getTime() const
  {
    return *static_cast<std::chrono::steady_clock::duration*>(nullptr);
  }
#endif //STUB_PossessionClient_getTime

#ifndef STUB_PossessionClient_scheduleDispatch
//#define STUB_PossessionClient_scheduleDispatch
  void PossessionClient::scheduleDispatch()
  {
    
  }
#endif //STUB_PossessionClient_scheduleDispatch

#ifndef STUB_PossessionClient_notifyAccountCreated
//#define STUB_PossessionClient_notifyAccountCreated
  void PossessionClient::notifyAccountCreated(const std::string& accountId)
  {
    
  }
#endif //STUB_PossessionClient_notifyAccountCreated


#endif