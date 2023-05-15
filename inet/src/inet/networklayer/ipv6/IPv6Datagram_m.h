//
// Generated file, do not edit! Created by nedtool 5.6 from inet/networklayer/ipv6/IPv6Datagram.msg.
//

#ifndef __INET_IPV6DATAGRAM_M_H
#define __INET_IPV6DATAGRAM_M_H

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
#include <iostream>
#include "inet/networklayer/contract/ipv6/IPv6Address.h"
#include "inet/networklayer/common/IPProtocolId_m.h"
// }}


namespace inet {

// cplusplus {{
class IPv6ExtensionHeader;
typedef IPv6ExtensionHeader *IPv6ExtensionHeaderPtr;
std::ostream& operator<<(std::ostream& os, IPv6ExtensionHeaderPtr eh);

const int IPv6_HEADER_BYTES = 40;
// }}

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6Datagram.msg:52</tt> by nedtool.
 * <pre>
 * //
 * // IPv6 datagram. RFC 2460 Section 3.
 * //
 * // Header fields not explicitly modelled:
 * //    - version (=6): represented by the class name itself
 * //    - payload length: will be calculated from encapsulated message length
 * //      and extension headers' length
 * //
 * packet IPv6Datagram
 * {
 *     \@customize(true);
 *     IPv6Address srcAddress;
 *     IPv6Address destAddress;
 *     unsigned char trafficClass;
 *     abstract int diffServCodePoint;  // maps to bits 0-5 of trafficClass
 *     abstract int explicitCongestionNotification;  // maps to bits 6-7 of trafficClass
 *     unsigned int flowLabel;
 *     short hopLimit = 0;
 *     int transportProtocol \@enum(IPProtocolId);
 * 
 *     abstract IPv6ExtensionHeaderPtr extensionHeader[]; // array of extension headers, subclassed from ~IPv6ExtensionHeader
 * }
 * </pre>
 *
 * IPv6Datagram_Base is only useful if it gets subclassed, and IPv6Datagram is derived from it.
 * The minimum code to be written for IPv6Datagram is the following:
 *
 * <pre>
 * class INET_API IPv6Datagram : public IPv6Datagram_Base
 * {
 *   private:
 *     void copy(const IPv6Datagram& other) { ... }

 *   public:
 *     IPv6Datagram(const char *name=nullptr, short kind=0) : IPv6Datagram_Base(name,kind) {}
 *     IPv6Datagram(const IPv6Datagram& other) : IPv6Datagram_Base(other) {copy(other);}
 *     IPv6Datagram& operator=(const IPv6Datagram& other) {if (this==&other) return *this; IPv6Datagram_Base::operator=(other); copy(other); return *this;}
 *     virtual IPv6Datagram *dup() const override {return new IPv6Datagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6Datagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv6Datagram)
 * </pre>
 */
class INET_API IPv6Datagram_Base : public ::omnetpp::cPacket
{
  protected:
    IPv6Address srcAddress;
    IPv6Address destAddress;
    unsigned char trafficClass;
    unsigned int flowLabel;
    short hopLimit;
    int transportProtocol;

  private:
    void copy(const IPv6Datagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6Datagram_Base&);
    // make constructors protected to avoid instantiation
    IPv6Datagram_Base(const char *name=nullptr, short kind=0);
    IPv6Datagram_Base(const IPv6Datagram_Base& other);
    // make assignment operator protected to force the user override it
    IPv6Datagram_Base& operator=(const IPv6Datagram_Base& other);

  public:
    virtual ~IPv6Datagram_Base();
    virtual IPv6Datagram_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class IPv6Datagram");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv6Address& getSrcAddress();
    virtual const IPv6Address& getSrcAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const IPv6Address& srcAddress);
    virtual IPv6Address& getDestAddress();
    virtual const IPv6Address& getDestAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getDestAddress();}
    virtual void setDestAddress(const IPv6Address& destAddress);
    virtual unsigned char getTrafficClass() const;
    virtual void setTrafficClass(unsigned char trafficClass);
    virtual int getDiffServCodePoint() const = 0;
    virtual void setDiffServCodePoint(int diffServCodePoint) = 0;
    virtual int getExplicitCongestionNotification() const = 0;
    virtual void setExplicitCongestionNotification(int explicitCongestionNotification) = 0;
    virtual unsigned int getFlowLabel() const;
    virtual void setFlowLabel(unsigned int flowLabel);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual void setExtensionHeaderArraySize(unsigned int size) = 0;
    virtual unsigned int getExtensionHeaderArraySize() const = 0;
    virtual IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k) = 0;
    virtual const IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k) const {return const_cast<IPv6Datagram_Base*>(this)->getExtensionHeader(k);}
    virtual void setExtensionHeader(unsigned int k, const IPv6ExtensionHeaderPtr& extensionHeader) = 0;
};

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6Datagram.msg:71</tt> by nedtool.
 * <pre>
 * //
 * // This serves as the base class for all the other extension headers.
 * //
 * class IPv6ExtensionHeader
 * {
 *     short extensionType;
 *     short byteLength = 0;   // byteLength = n * 8;
 * }
 * </pre>
 */
class INET_API IPv6ExtensionHeader : public ::omnetpp::cObject
{
  protected:
    short extensionType;
    short byteLength;

  private:
    void copy(const IPv6ExtensionHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6ExtensionHeader&);

  public:
    IPv6ExtensionHeader();
    IPv6ExtensionHeader(const IPv6ExtensionHeader& other);
    virtual ~IPv6ExtensionHeader();
    IPv6ExtensionHeader& operator=(const IPv6ExtensionHeader& other);
    virtual IPv6ExtensionHeader *dup() const override {return new IPv6ExtensionHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getExtensionType() const;
    virtual void setExtensionType(short extensionType);
    virtual short getByteLength() const;
    virtual void setByteLength(short byteLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6ExtensionHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6ExtensionHeader& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IPV6DATAGRAM_M_H

