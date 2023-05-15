//
// Generated file, do not edit! Created by nedtool 5.6 from inet/networklayer/icmpv6/IPv6NDMessage.msg.
//

#ifndef __INET_IPV6NDMESSAGE_M_H
#define __INET_IPV6NDMESSAGE_M_H

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
#include "inet/networklayer/icmpv6/ICMPv6Message_m.h"
#include "inet/networklayer/contract/ipv6/IPv6Address.h"
#include "inet/linklayer/common/MACAddress.h"
// }}


namespace inet {

/**
 * Enum generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:35</tt> by nedtool.
 * <pre>
 * // TLB options (type, length, bytes), length must be divisible by eight, max value is 8*255
 * // Length in bytes:
 * enum IPv6NDOptionLength
 * {
 *     IPv6ND_LINK_LAYER_ADDRESS_OPTION_LENGTH = 8;    // RFC 2461, Section 4.6.1. Source/Target Link-layer Address
 *     IPv6ND_PREFIX_INFORMATION_OPTION_LENGTH = 32;   // RFC 2461, Section 4.6.2. Prefix Information
 *     IPv6ND_REDIRECTED_HEADER_OPTION_LENGTH = 8;     // 8 + redirected packet, RFC 2461, Section 4.6.3. Redirected Header.
 *                                                     // The original packet truncated to ensure that the size of the redirect message does not exceed 1280 octets.
 *     IPv6ND_MTU_OPTION_LENGTH = 8;                   // RFC 2461, Section 4.6.4. MTU
 * }
 * </pre>
 */
enum IPv6NDOptionLength {
    IPv6ND_LINK_LAYER_ADDRESS_OPTION_LENGTH = 8,
    IPv6ND_PREFIX_INFORMATION_OPTION_LENGTH = 32,
    IPv6ND_REDIRECTED_HEADER_OPTION_LENGTH = 8,
    IPv6ND_MTU_OPTION_LENGTH = 8
};

/**
 * Enum generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:45</tt> by nedtool.
 * <pre>
 * // TLB options (type, length, bytes), length must be divisible by eight, max value is 8*255
 * // Type codes:
 * enum IPv6NDOptionTypes
 * {
 *     IPv6ND_SOURCE_LINK_LAYER_ADDR_OPTION = 1;          // RFC 2461
 *     IPv6ND_TARGET_LINK_LAYER_ADDR_OPTION = 2;          // RFC 2461
 * }
 * </pre>
 */
enum IPv6NDOptionTypes {
    IPv6ND_SOURCE_LINK_LAYER_ADDR_OPTION = 1,
    IPv6ND_TARGET_LINK_LAYER_ADDR_OPTION = 2
};

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:55</tt> by nedtool.
 * <pre>
 * //
 * // IPv6ND Prefix Information
 * // RFC 2461 / RFC 4861 Section 4.6.2
 * // RFC 3775 Section 7.2 (routerAddressFlag)
 * //
 * class IPv6NDPrefixInformation
 * {
 *     unsigned short prefixLength;
 *     bool onlinkFlag;        //L-bit
 *     bool autoAddressConfFlag;    //A-bit
 *     bool routerAddressFlag;        //R-bit: used in case of MIPv6 when the H-bit is set
 *     unsigned int validLifetime;    // seconds
 *     unsigned int preferredLifetime;    // seconds
 *     IPv6Address prefix;
 * }
 * </pre>
 */
class INET_API IPv6NDPrefixInformation : public ::omnetpp::cObject
{
  protected:
    unsigned short prefixLength;
    bool onlinkFlag;
    bool autoAddressConfFlag;
    bool routerAddressFlag;
    unsigned int validLifetime;
    unsigned int preferredLifetime;
    IPv6Address prefix;

  private:
    void copy(const IPv6NDPrefixInformation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NDPrefixInformation&);

  public:
    IPv6NDPrefixInformation();
    IPv6NDPrefixInformation(const IPv6NDPrefixInformation& other);
    virtual ~IPv6NDPrefixInformation();
    IPv6NDPrefixInformation& operator=(const IPv6NDPrefixInformation& other);
    virtual IPv6NDPrefixInformation *dup() const override {return new IPv6NDPrefixInformation(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getPrefixLength() const;
    virtual void setPrefixLength(unsigned short prefixLength);
    virtual bool getOnlinkFlag() const;
    virtual void setOnlinkFlag(bool onlinkFlag);
    virtual bool getAutoAddressConfFlag() const;
    virtual void setAutoAddressConfFlag(bool autoAddressConfFlag);
    virtual bool getRouterAddressFlag() const;
    virtual void setRouterAddressFlag(bool routerAddressFlag);
    virtual unsigned int getValidLifetime() const;
    virtual void setValidLifetime(unsigned int validLifetime);
    virtual unsigned int getPreferredLifetime() const;
    virtual void setPreferredLifetime(unsigned int preferredLifetime);
    virtual IPv6Address& getPrefix();
    virtual const IPv6Address& getPrefix() const {return const_cast<IPv6NDPrefixInformation*>(this)->getPrefix();}
    virtual void setPrefix(const IPv6Address& prefix);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6NDPrefixInformation& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6NDPrefixInformation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:69</tt> by nedtool.
 * <pre>
 * // MIPv6 New Advertisement Interval Option
 * // RFC 3775 Section 7.3
 * //
 * class MIPv6NDAdvertisementInterval
 * {
 *     unsigned int advertisementInterval;    // milliseconds
 * }
 * </pre>
 */
class INET_API MIPv6NDAdvertisementInterval : public ::omnetpp::cObject
{
  protected:
    unsigned int advertisementInterval;

  private:
    void copy(const MIPv6NDAdvertisementInterval& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MIPv6NDAdvertisementInterval&);

  public:
    MIPv6NDAdvertisementInterval();
    MIPv6NDAdvertisementInterval(const MIPv6NDAdvertisementInterval& other);
    virtual ~MIPv6NDAdvertisementInterval();
    MIPv6NDAdvertisementInterval& operator=(const MIPv6NDAdvertisementInterval& other);
    virtual MIPv6NDAdvertisementInterval *dup() const override {return new MIPv6NDAdvertisementInterval(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getAdvertisementInterval() const;
    virtual void setAdvertisementInterval(unsigned int advertisementInterval);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MIPv6NDAdvertisementInterval& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MIPv6NDAdvertisementInterval& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:76</tt> by nedtool.
 * <pre>
 * //MIPv6 Home Agent Information Option
 * //RFC 3775 Section 7.4
 * class MIPv6HAInformation
 * {
 *     unsigned int homeAgentPreference;
 *     unsigned int homeAgentLifetime;    // seconds
 * }
 * </pre>
 */
class INET_API MIPv6HAInformation : public ::omnetpp::cObject
{
  protected:
    unsigned int homeAgentPreference;
    unsigned int homeAgentLifetime;

  private:
    void copy(const MIPv6HAInformation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MIPv6HAInformation&);

  public:
    MIPv6HAInformation();
    MIPv6HAInformation(const MIPv6HAInformation& other);
    virtual ~MIPv6HAInformation();
    MIPv6HAInformation& operator=(const MIPv6HAInformation& other);
    virtual MIPv6HAInformation *dup() const override {return new MIPv6HAInformation(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getHomeAgentPreference() const;
    virtual void setHomeAgentPreference(unsigned int homeAgentPreference);
    virtual unsigned int getHomeAgentLifetime() const;
    virtual void setHomeAgentLifetime(unsigned int homeAgentLifetime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MIPv6HAInformation& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MIPv6HAInformation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:93</tt> by nedtool.
 * <pre>
 * //
 * // Neighbour Discovery for IPv6.
 * // RFC 2461
 * //
 * // ICMP fields inherited from ~ICMPv6Message:
 * //    - Type
 * //
 * // ICMP fields not implemented:
 * //    - Checksum
 * //    - Reserved
 * //
 * packet IPv6NDMessage extends ICMPv6Message
 * {
 *     //customize=true;
 *     int code = 0;
 * }
 * </pre>
 */
class INET_API IPv6NDMessage : public ::inet::ICMPv6Message
{
  protected:
    int code;

  private:
    void copy(const IPv6NDMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NDMessage&);

  public:
    IPv6NDMessage(const char *name=nullptr, short kind=0);
    IPv6NDMessage(const IPv6NDMessage& other);
    virtual ~IPv6NDMessage();
    IPv6NDMessage& operator=(const IPv6NDMessage& other);
    virtual IPv6NDMessage *dup() const override {return new IPv6NDMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6NDMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6NDMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:103</tt> by nedtool.
 * <pre>
 * //
 * // Router Solicitation Message Format
 * // RFC 4861 Section 4.1
 * //
 * packet IPv6RouterSolicitation extends IPv6NDMessage
 * {
 *     // The link-layer address of the sender, if known.
 *     // MUST NOT be included if the Source Address is the unspecified address.
 *     // Otherwise, it SHOULD be included on link layers that have addresses.
 *     MACAddress sourceLinkLayerAddress;
 * }
 * </pre>
 */
class INET_API IPv6RouterSolicitation : public ::inet::IPv6NDMessage
{
  protected:
    MACAddress sourceLinkLayerAddress;

  private:
    void copy(const IPv6RouterSolicitation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6RouterSolicitation&);

  public:
    IPv6RouterSolicitation(const char *name=nullptr, short kind=0);
    IPv6RouterSolicitation(const IPv6RouterSolicitation& other);
    virtual ~IPv6RouterSolicitation();
    IPv6RouterSolicitation& operator=(const IPv6RouterSolicitation& other);
    virtual IPv6RouterSolicitation *dup() const override {return new IPv6RouterSolicitation(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6RouterSolicitation*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6RouterSolicitation& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6RouterSolicitation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:118</tt> by nedtool.
 * <pre>
 * //
 * // Router Advertisement Message Format
 * // RFC 2461 Section 4.2
 * // RFC 3775 Section 7.1, RFC 5175 Section 3. (homeAgentFlag)
 * //
 * packet IPv6RouterAdvertisement extends IPv6NDMessage
 * {
 *     //Additional ICMP fields
 *     unsigned short curHopLimit;
 *     bool managedAddrConfFlag;    //M-bit
 *     bool otherStatefulConfFlag;    //O-bit
 *     bool homeAgentFlag = false;        //H-bit
 *     unsigned short routerLifetime;  // 0 indicates router is not a default router
 *     unsigned int reachableTime;
 *     unsigned int retransTimer;
 * 
 *     //Possible Options
 *     MACAddress sourceLinkLayerAddress;        //source link layer option
 *     unsigned int MTU;                //MTU option
 *     IPv6NDPrefixInformation prefixInformation[];    //Prefix Information Option
 *     MIPv6NDAdvertisementInterval advInterval;    //New Advertisement Interval Option (MIPv6)
 *     MIPv6HAInformation haInformation;    //New Home Agent Information Option (MIPv6)
 * }
 * </pre>
 */
class INET_API IPv6RouterAdvertisement : public ::inet::IPv6NDMessage
{
  protected:
    unsigned short curHopLimit;
    bool managedAddrConfFlag;
    bool otherStatefulConfFlag;
    bool homeAgentFlag;
    unsigned short routerLifetime;
    unsigned int reachableTime;
    unsigned int retransTimer;
    MACAddress sourceLinkLayerAddress;
    unsigned int MTU;
    IPv6NDPrefixInformation *prefixInformation; // array ptr
    unsigned int prefixInformation_arraysize;
    MIPv6NDAdvertisementInterval advInterval;
    MIPv6HAInformation haInformation;

  private:
    void copy(const IPv6RouterAdvertisement& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6RouterAdvertisement&);

  public:
    IPv6RouterAdvertisement(const char *name=nullptr, short kind=0);
    IPv6RouterAdvertisement(const IPv6RouterAdvertisement& other);
    virtual ~IPv6RouterAdvertisement();
    IPv6RouterAdvertisement& operator=(const IPv6RouterAdvertisement& other);
    virtual IPv6RouterAdvertisement *dup() const override {return new IPv6RouterAdvertisement(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getCurHopLimit() const;
    virtual void setCurHopLimit(unsigned short curHopLimit);
    virtual bool getManagedAddrConfFlag() const;
    virtual void setManagedAddrConfFlag(bool managedAddrConfFlag);
    virtual bool getOtherStatefulConfFlag() const;
    virtual void setOtherStatefulConfFlag(bool otherStatefulConfFlag);
    virtual bool getHomeAgentFlag() const;
    virtual void setHomeAgentFlag(bool homeAgentFlag);
    virtual unsigned short getRouterLifetime() const;
    virtual void setRouterLifetime(unsigned short routerLifetime);
    virtual unsigned int getReachableTime() const;
    virtual void setReachableTime(unsigned int reachableTime);
    virtual unsigned int getRetransTimer() const;
    virtual void setRetransTimer(unsigned int retransTimer);
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6RouterAdvertisement*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
    virtual unsigned int getMTU() const;
    virtual void setMTU(unsigned int MTU);
    virtual void setPrefixInformationArraySize(unsigned int size);
    virtual unsigned int getPrefixInformationArraySize() const;
    virtual IPv6NDPrefixInformation& getPrefixInformation(unsigned int k);
    virtual const IPv6NDPrefixInformation& getPrefixInformation(unsigned int k) const {return const_cast<IPv6RouterAdvertisement*>(this)->getPrefixInformation(k);}
    virtual void setPrefixInformation(unsigned int k, const IPv6NDPrefixInformation& prefixInformation);
    virtual MIPv6NDAdvertisementInterval& getAdvInterval();
    virtual const MIPv6NDAdvertisementInterval& getAdvInterval() const {return const_cast<IPv6RouterAdvertisement*>(this)->getAdvInterval();}
    virtual void setAdvInterval(const MIPv6NDAdvertisementInterval& advInterval);
    virtual MIPv6HAInformation& getHaInformation();
    virtual const MIPv6HAInformation& getHaInformation() const {return const_cast<IPv6RouterAdvertisement*>(this)->getHaInformation();}
    virtual void setHaInformation(const MIPv6HAInformation& haInformation);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6RouterAdvertisement& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6RouterAdvertisement& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:141</tt> by nedtool.
 * <pre>
 * //
 * // Neighbour Solicitation Message Format
 * // RFC 4861 Section 4.3
 * //
 * packet IPv6NeighbourSolicitation extends IPv6NDMessage
 * {
 *     //Additional ICMP fields
 *     IPv6Address targetAddress;// MUST NOT be a multicast address.
 * 
 *     //Possible Options
 * 
 *     // The link-layer address for the sender.
 *     // MUST NOT be included when the source IP address is the unspecified address.
 *     // Otherwise, on link layers that have addresses this option MUST be included in multicast
 *     // solicitations and SHOULD be included in unicast solicitations.
 *     MACAddress sourceLinkLayerAddress;
 * }
 * </pre>
 */
class INET_API IPv6NeighbourSolicitation : public ::inet::IPv6NDMessage
{
  protected:
    IPv6Address targetAddress;
    MACAddress sourceLinkLayerAddress;

  private:
    void copy(const IPv6NeighbourSolicitation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NeighbourSolicitation&);

  public:
    IPv6NeighbourSolicitation(const char *name=nullptr, short kind=0);
    IPv6NeighbourSolicitation(const IPv6NeighbourSolicitation& other);
    virtual ~IPv6NeighbourSolicitation();
    IPv6NeighbourSolicitation& operator=(const IPv6NeighbourSolicitation& other);
    virtual IPv6NeighbourSolicitation *dup() const override {return new IPv6NeighbourSolicitation(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6NeighbourSolicitation*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6NeighbourSolicitation*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6NeighbourSolicitation& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6NeighbourSolicitation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:159</tt> by nedtool.
 * <pre>
 * //
 * // Neighbour Advertisement Message Format
 * // RFC 2461 Section 4.4
 * //
 * packet IPv6NeighbourAdvertisement extends IPv6NDMessage
 * {
 *     //Additional ICMP fields
 *     bool routerFlag;    //R-flag
 *     bool solicitedFlag;    //S-flag
 *     bool overrideFlag;    //O-flag
 *     IPv6Address targetAddress;// MUST NOT be a multicast address.
 * 
 *     //Possible Options
 *     MACAddress targetLinkLayerAddress;    //Target Link Layer Address option
 * }
 * </pre>
 */
class INET_API IPv6NeighbourAdvertisement : public ::inet::IPv6NDMessage
{
  protected:
    bool routerFlag;
    bool solicitedFlag;
    bool overrideFlag;
    IPv6Address targetAddress;
    MACAddress targetLinkLayerAddress;

  private:
    void copy(const IPv6NeighbourAdvertisement& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NeighbourAdvertisement&);

  public:
    IPv6NeighbourAdvertisement(const char *name=nullptr, short kind=0);
    IPv6NeighbourAdvertisement(const IPv6NeighbourAdvertisement& other);
    virtual ~IPv6NeighbourAdvertisement();
    IPv6NeighbourAdvertisement& operator=(const IPv6NeighbourAdvertisement& other);
    virtual IPv6NeighbourAdvertisement *dup() const override {return new IPv6NeighbourAdvertisement(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getRouterFlag() const;
    virtual void setRouterFlag(bool routerFlag);
    virtual bool getSolicitedFlag() const;
    virtual void setSolicitedFlag(bool solicitedFlag);
    virtual bool getOverrideFlag() const;
    virtual void setOverrideFlag(bool overrideFlag);
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6NeighbourAdvertisement*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual MACAddress& getTargetLinkLayerAddress();
    virtual const MACAddress& getTargetLinkLayerAddress() const {return const_cast<IPv6NeighbourAdvertisement*>(this)->getTargetLinkLayerAddress();}
    virtual void setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6NeighbourAdvertisement& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6NeighbourAdvertisement& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:175</tt> by nedtool.
 * <pre>
 * //
 * // Redirect Message Format
 * // RFC 2461 Section 4.5
 * //
 * packet IPv6Redirect extends IPv6NDMessage
 * {
 *     //Additional ICMP fields
 *     IPv6Address targetAddress;
 *     IPv6Address destinationAddress;
 * 
 *     //Possible Options
 *     MACAddress targetLinkLayerAddress;
 *         //Redirected Header Encapsulated Msg
 * }
 * </pre>
 */
class INET_API IPv6Redirect : public ::inet::IPv6NDMessage
{
  protected:
    IPv6Address targetAddress;
    IPv6Address destinationAddress;
    MACAddress targetLinkLayerAddress;

  private:
    void copy(const IPv6Redirect& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6Redirect&);

  public:
    IPv6Redirect(const char *name=nullptr, short kind=0);
    IPv6Redirect(const IPv6Redirect& other);
    virtual ~IPv6Redirect();
    IPv6Redirect& operator=(const IPv6Redirect& other);
    virtual IPv6Redirect *dup() const override {return new IPv6Redirect(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6Redirect*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual IPv6Address& getDestinationAddress();
    virtual const IPv6Address& getDestinationAddress() const {return const_cast<IPv6Redirect*>(this)->getDestinationAddress();}
    virtual void setDestinationAddress(const IPv6Address& destinationAddress);
    virtual MACAddress& getTargetLinkLayerAddress();
    virtual const MACAddress& getTargetLinkLayerAddress() const {return const_cast<IPv6Redirect*>(this)->getTargetLinkLayerAddress();}
    virtual void setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6Redirect& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6Redirect& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/icmpv6/IPv6NDMessage.msg:186</tt> by nedtool.
 * <pre>
 * class IPv6NDControlInfo
 * {
 *     IPv6Address nextHop;   // next hop address
 *     int interfaceId = -1; // interface on which the datagram should be sent
 *     bool fromHL = false;    // packet came from higher layer
 * }
 * </pre>
 */
class INET_API IPv6NDControlInfo : public ::omnetpp::cObject
{
  protected:
    IPv6Address nextHop;
    int interfaceId;
    bool fromHL;

  private:
    void copy(const IPv6NDControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NDControlInfo&);

  public:
    IPv6NDControlInfo();
    IPv6NDControlInfo(const IPv6NDControlInfo& other);
    virtual ~IPv6NDControlInfo();
    IPv6NDControlInfo& operator=(const IPv6NDControlInfo& other);
    virtual IPv6NDControlInfo *dup() const override {return new IPv6NDControlInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv6Address& getNextHop();
    virtual const IPv6Address& getNextHop() const {return const_cast<IPv6NDControlInfo*>(this)->getNextHop();}
    virtual void setNextHop(const IPv6Address& nextHop);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual bool getFromHL() const;
    virtual void setFromHL(bool fromHL);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv6NDControlInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv6NDControlInfo& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IPV6NDMESSAGE_M_H

