//
// Generated file, do not edit! Created by nedtool 5.6 from inet/networklayer/base/NetworkDatagramBase.msg.
//

#ifndef __INET_NETWORKDATAGRAMBASE_M_H
#define __INET_NETWORKDATAGRAMBASE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif

// cplusplus {{
   #include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/networklayer/base/NetworkDatagramBase.msg:28</tt> by nedtool.
 * <pre>
 * packet NetworkDatagramBase
 * {
 *     L3Address srcAddr;
 *     L3Address destAddr;
 * }
 * </pre>
 */
class INET_API NetworkDatagramBase : public ::omnetpp::cPacket
{
  protected:
    L3Address srcAddr;
    L3Address destAddr;

  private:
    void copy(const NetworkDatagramBase& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NetworkDatagramBase&);

  public:
    NetworkDatagramBase(const char *name=nullptr, short kind=0);
    NetworkDatagramBase(const NetworkDatagramBase& other);
    virtual ~NetworkDatagramBase();
    NetworkDatagramBase& operator=(const NetworkDatagramBase& other);
    virtual NetworkDatagramBase *dup() const override {return new NetworkDatagramBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual L3Address& getSrcAddr();
    virtual const L3Address& getSrcAddr() const {return const_cast<NetworkDatagramBase*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const L3Address& srcAddr);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<NetworkDatagramBase*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NetworkDatagramBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NetworkDatagramBase& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_NETWORKDATAGRAMBASE_M_H

