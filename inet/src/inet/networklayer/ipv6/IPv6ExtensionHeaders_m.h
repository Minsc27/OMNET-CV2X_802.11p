//
// Generated file, do not edit! Created by nedtool 5.6 from inet/networklayer/ipv6/IPv6ExtensionHeaders.msg.
//

#ifndef __INET_IPV6EXTENSIONHEADERS_M_H
#define __INET_IPV6EXTENSIONHEADERS_M_H

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
#include "inet/common/TLVOption.h"
#include "inet/networklayer/contract/ipv6/IPv6Address.h"
#include "inet/networklayer/ipv6/IPv6Datagram.h"
#include "inet/networklayer/common/IPProtocolId_m.h"

#define IPv6_FRAGMENT_HEADER_LENGTH 8
// }}


namespace inet {

/**
 * Enum generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:41</tt> by nedtool.
 * <pre>
 * //
 * // IPv6 TLV option types
 * //
 * enum IPv6TLVOptionTypes
 * {
 *     IPv6TLVOPTION_NOP1 = 0;
 *     IPv6TLVOPTION_NOPN = 1;
 *     IPv6TLVOPTION_TLV_GPSR = 47;
 * }
 * </pre>
 */
enum IPv6TLVOptionTypes {
    IPv6TLVOPTION_NOP1 = 0,
    IPv6TLVOPTION_NOPN = 1,
    IPv6TLVOPTION_TLV_GPSR = 47
};

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:54</tt> by nedtool.
 * <pre>
 * //
 * // Hop-by-Hop Options Header.
 * // RFC 2460 Section 4.3
 * // Next Header Value: 0
 * //
 * class IPv6HopByHopOptionsHeader extends IPv6ExtensionHeader
 * {
 *     extensionType = IP_PROT_IPv6EXT_HOP;
 *     // byteLength = utils::roundUp(2 + tlvOptions.getLength(), 8);
 *     TLVOptions tlvOptions;
 * }
 * </pre>
 */
class INET_API IPv6HopByHopOptionsHeader : public ::inet::IPv6ExtensionHeader
{
  protected:
    TLVOptions tlvOptions;

  private:
    void copy(const IPv6HopByHopOptionsHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6HopByHopOptionsHeader&);

  public:
    IPv6HopByHopOptionsHeader();
    IPv6HopByHopOptionsHeader(const IPv6HopByHopOptionsHeader& other);
    virtual ~IPv6HopByHopOptionsHeader();
    IPv6HopByHopOptionsHeader& operator=(const IPv6HopByHopOptionsHeader& other);
    virtual IPv6HopByHopOptionsHeader *dup() const override {return new IPv6HopByHopOptionsHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual TLVOptions& getTlvOptions();
    virtual const TLVOptions& getTlvOptions() const {return const_cast<IPv6HopByHopOptionsHeader*>(this)->getTlvOptions();}
    virtual void setTlvOptions(const TLVOptions& tlvOptions);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6HopByHopOptionsHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6HopByHopOptionsHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:66</tt> by nedtool.
 * <pre>
 * //
 * // Routing Header
 * // RFC 2460 Section 4.4
 * // Next Header Value: 43
 * //
 * class IPv6RoutingHeader extends IPv6ExtensionHeader
 * {
 *     \@customize(true);
 *     extensionType = IP_PROT_IPv6EXT_ROUTING;
 *     byteLength = 8;
 *     //byteLength = 8+16*getAddressArraySize() when routingType == 0
 *     uint8 routingType;
 *     uint8 segmentsLeft;
 *     IPv6Address address[];
 * }
 * </pre>
 *
 * IPv6RoutingHeader_Base is only useful if it gets subclassed, and IPv6RoutingHeader is derived from it.
 * The minimum code to be written for IPv6RoutingHeader is the following:
 *
 * <pre>
 * class INET_API IPv6RoutingHeader : public IPv6RoutingHeader_Base
 * {
 *   private:
 *     void copy(const IPv6RoutingHeader& other) { ... }

 *   public:
 *     IPv6RoutingHeader() : IPv6RoutingHeader_Base() {}
 *     IPv6RoutingHeader(const IPv6RoutingHeader& other) : IPv6RoutingHeader_Base(other) {copy(other);}
 *     IPv6RoutingHeader& operator=(const IPv6RoutingHeader& other) {if (this==&other) return *this; IPv6RoutingHeader_Base::operator=(other); copy(other); return *this;}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6RoutingHeader_Base
 * };
 * </pre>
 */
class INET_API IPv6RoutingHeader_Base : public ::inet::IPv6ExtensionHeader
{
  protected:
    uint8_t routingType;
    uint8_t segmentsLeft;
    IPv6Address *address; // array ptr
    unsigned int address_arraysize;

  private:
    void copy(const IPv6RoutingHeader_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6RoutingHeader_Base&);
    // make constructors protected to avoid instantiation
    IPv6RoutingHeader_Base();
    IPv6RoutingHeader_Base(const IPv6RoutingHeader_Base& other);
    // make assignment operator protected to force the user override it
    IPv6RoutingHeader_Base& operator=(const IPv6RoutingHeader_Base& other);

  public:
    virtual ~IPv6RoutingHeader_Base();
    virtual IPv6RoutingHeader_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class IPv6RoutingHeader");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint8_t getRoutingType() const;
    virtual void setRoutingType(uint8_t routingType);
    virtual uint8_t getSegmentsLeft() const;
    virtual void setSegmentsLeft(uint8_t segmentsLeft);
    virtual void setAddressArraySize(unsigned int size);
    virtual unsigned int getAddressArraySize() const;
    virtual IPv6Address& getAddress(unsigned int k);
    virtual const IPv6Address& getAddress(unsigned int k) const {return const_cast<IPv6RoutingHeader_Base*>(this)->getAddress(k);}
    virtual void setAddress(unsigned int k, const IPv6Address& address);
};

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:82</tt> by nedtool.
 * <pre>
 * //
 * // Fragment Header
 * // RFC 2460 Section 4.5
 * // Next Header Value: 44
 * //
 * class IPv6FragmentHeader extends IPv6ExtensionHeader
 * {
 *     extensionType = IP_PROT_IPv6EXT_FRAGMENT;
 *     byteLength = IPv6_FRAGMENT_HEADER_LENGTH;
 *     unsigned short fragmentOffset;
 *     unsigned int identification;  // datagram ID: identifies which datagram this fragment belongs to.
 *     bool moreFragments; //Is this the last fragment?
 * }
 * </pre>
 */
class INET_API IPv6FragmentHeader : public ::inet::IPv6ExtensionHeader
{
  protected:
    unsigned short fragmentOffset;
    unsigned int identification;
    bool moreFragments;

  private:
    void copy(const IPv6FragmentHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6FragmentHeader&);

  public:
    IPv6FragmentHeader();
    IPv6FragmentHeader(const IPv6FragmentHeader& other);
    virtual ~IPv6FragmentHeader();
    IPv6FragmentHeader& operator=(const IPv6FragmentHeader& other);
    virtual IPv6FragmentHeader *dup() const override {return new IPv6FragmentHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getFragmentOffset() const;
    virtual void setFragmentOffset(unsigned short fragmentOffset);
    virtual unsigned int getIdentification() const;
    virtual void setIdentification(unsigned int identification);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6FragmentHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6FragmentHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:96</tt> by nedtool.
 * <pre>
 * //
 * // Destination Options Header
 * // RFC 2460 Section 4.6
 * // Next Header Value: 60
 * //
 * class IPv6DestinationOptionsHeader extends IPv6ExtensionHeader
 * {
 *     extensionType = IP_PROT_IPv6EXT_DEST;
 *     byteLength = 8;    // utils::roundUp(2 + tlvOptions.getLength(), 8);
 *     TLVOptions tlvOptions;
 * }
 * </pre>
 */
class INET_API IPv6DestinationOptionsHeader : public ::inet::IPv6ExtensionHeader
{
  protected:
    TLVOptions tlvOptions;

  private:
    void copy(const IPv6DestinationOptionsHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6DestinationOptionsHeader&);

  public:
    IPv6DestinationOptionsHeader();
    IPv6DestinationOptionsHeader(const IPv6DestinationOptionsHeader& other);
    virtual ~IPv6DestinationOptionsHeader();
    IPv6DestinationOptionsHeader& operator=(const IPv6DestinationOptionsHeader& other);
    virtual IPv6DestinationOptionsHeader *dup() const override {return new IPv6DestinationOptionsHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual TLVOptions& getTlvOptions();
    virtual const TLVOptions& getTlvOptions() const {return const_cast<IPv6DestinationOptionsHeader*>(this)->getTlvOptions();}
    virtual void setTlvOptions(const TLVOptions& tlvOptions);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6DestinationOptionsHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6DestinationOptionsHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:108</tt> by nedtool.
 * <pre>
 * //
 * // Authentication Header
 * // RFC 2402
 * // Not Implemented
 * //
 * class IPv6AuthenticationHeader extends IPv6ExtensionHeader
 * {
 *     extensionType = IP_PROT_IPv6EXT_AUTH;
 *     byteLength = 8; // FIXME verify
 * }
 * </pre>
 */
class INET_API IPv6AuthenticationHeader : public ::inet::IPv6ExtensionHeader
{
  protected:

  private:
    void copy(const IPv6AuthenticationHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6AuthenticationHeader&);

  public:
    IPv6AuthenticationHeader();
    IPv6AuthenticationHeader(const IPv6AuthenticationHeader& other);
    virtual ~IPv6AuthenticationHeader();
    IPv6AuthenticationHeader& operator=(const IPv6AuthenticationHeader& other);
    virtual IPv6AuthenticationHeader *dup() const override {return new IPv6AuthenticationHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6AuthenticationHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6AuthenticationHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv6/IPv6ExtensionHeaders.msg:119</tt> by nedtool.
 * <pre>
 * //
 * // Encapsulating Security Payload Header
 * // RFC 2406
 * // Not Implemented
 * //
 * class IPv6EncapsulatingSecurityPayloadHeader extends IPv6ExtensionHeader
 * {
 *     extensionType = IP_PROT_IPv6EXT_ESP;
 *     byteLength = 8; // FIXME verify
 * }
 * </pre>
 */
class INET_API IPv6EncapsulatingSecurityPayloadHeader : public ::inet::IPv6ExtensionHeader
{
  protected:

  private:
    void copy(const IPv6EncapsulatingSecurityPayloadHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6EncapsulatingSecurityPayloadHeader&);

  public:
    IPv6EncapsulatingSecurityPayloadHeader();
    IPv6EncapsulatingSecurityPayloadHeader(const IPv6EncapsulatingSecurityPayloadHeader& other);
    virtual ~IPv6EncapsulatingSecurityPayloadHeader();
    IPv6EncapsulatingSecurityPayloadHeader& operator=(const IPv6EncapsulatingSecurityPayloadHeader& other);
    virtual IPv6EncapsulatingSecurityPayloadHeader *dup() const override {return new IPv6EncapsulatingSecurityPayloadHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6EncapsulatingSecurityPayloadHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6EncapsulatingSecurityPayloadHeader& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IPV6EXTENSIONHEADERS_M_H

