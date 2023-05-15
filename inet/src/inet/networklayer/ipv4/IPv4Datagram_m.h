//
// Generated file, do not edit! Created by nedtool 5.6 from inet/networklayer/ipv4/IPv4Datagram.msg.
//

#ifndef __INET_IPV4DATAGRAM_M_H
#define __INET_IPV4DATAGRAM_M_H

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
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
#include "inet/networklayer/common/IPProtocolId_m.h"
// }}


namespace inet {

// cplusplus {{
// default IPv4 header length: 20 bytes
const int IP_HEADER_BYTES = 20;

// maximum IPv4 header length (base+options): 60 = 4 * 15 bytes
const int IP_MAX_HEADER_BYTES = 60;

// option type fields
const unsigned char IPOPTION_COPY_MASK   = 0x80;
const unsigned char IPOPTION_CLASS_MASK  = 0x60;
const unsigned char IPOPTION_NUMBER_MASK = 0x1F;

// option entry number
const unsigned int MAX_IPADDR_OPTION_ENTRIES = 9;
const unsigned int MAX_TIMESTAMP_OPTION_ENTRIES = 4;
// }}

/**
 * Enum generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:58</tt> by nedtool.
 * <pre>
 * //
 * // IPv4 options class
 * //
 * enum IPOptionClass
 * {
 *     IPOPTION_CLASS_CONTROL = 0;
 *     IPOPTION_CLASS_RESERVED = 1;
 *     IPOPTION_CLASS_DEBUGGING = 2;
 *     IPOPTION_CLASS_RESERVED2 = 3;
 * }
 * </pre>
 */
enum IPOptionClass {
    IPOPTION_CLASS_CONTROL = 0,
    IPOPTION_CLASS_RESERVED = 1,
    IPOPTION_CLASS_DEBUGGING = 2,
    IPOPTION_CLASS_RESERVED2 = 3
};

/**
 * Enum generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:69</tt> by nedtool.
 * <pre>
 * //
 * // IPv4 option types
 * //
 * enum IPOption
 * {
 *     IPOPTION_END_OF_OPTIONS = 0;
 *     IPOPTION_NO_OPTION = 1;
 *     IPOPTION_STREAM_ID = 8;
 * 
 *     IPOPTION_TIMESTAMP = 68;
 * 
 *     IPOPTION_SECURITY = 130;
 *     IPOPTION_LOOSE_SOURCE_ROUTING = 131;
 *     IPOPTION_RECORD_ROUTE = 136;
 *     IPOPTION_STRICT_SOURCE_ROUTING = 137;
 *     IPOPTION_ROUTER_ALERT = 148;
 * 
 *     IPOPTION_TLV_GPSR = 47;
 * }
 * </pre>
 */
enum IPOption {
    IPOPTION_END_OF_OPTIONS = 0,
    IPOPTION_NO_OPTION = 1,
    IPOPTION_STREAM_ID = 8,
    IPOPTION_TIMESTAMP = 68,
    IPOPTION_SECURITY = 130,
    IPOPTION_LOOSE_SOURCE_ROUTING = 131,
    IPOPTION_RECORD_ROUTE = 136,
    IPOPTION_STRICT_SOURCE_ROUTING = 137,
    IPOPTION_ROUTER_ALERT = 148,
    IPOPTION_TLV_GPSR = 47
};

/**
 * Enum generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:89</tt> by nedtool.
 * <pre>
 * //
 * // The timestamp flag uses the same numeric values as the IPv4 Protocol
 * //
 * enum TimestampFlag
 * {
 *     IP_TIMESTAMP_TIMESTAMP_ONLY = 0;
 *     IP_TIMESTAMP_WITH_ADDRESS = 1;
 *     IP_TIMESTAMP_SENDER_INIT_ADDRESS = 3;
 * }
 * </pre>
 */
enum TimestampFlag {
    IP_TIMESTAMP_TIMESTAMP_ONLY = 0,
    IP_TIMESTAMP_WITH_ADDRESS = 1,
    IP_TIMESTAMP_SENDER_INIT_ADDRESS = 3
};

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:96</tt> by nedtool.
 * <pre>
 * class IPv4Option extends TLVOptionBase
 * {
 * }
 * </pre>
 */
class INET_API IPv4Option : public ::inet::TLVOptionBase
{
  protected:

  private:
    void copy(const IPv4Option& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4Option&);

  public:
    IPv4Option();
    IPv4Option(const IPv4Option& other);
    virtual ~IPv4Option();
    IPv4Option& operator=(const IPv4Option& other);
    virtual IPv4Option *dup() const override {return new IPv4Option(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4Option& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4Option& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:100</tt> by nedtool.
 * <pre>
 * class IPv4OptionNop extends IPv4Option
 * {
 *     type = IPOPTION_NO_OPTION;
 *     length = 1;
 * }
 * </pre>
 */
class INET_API IPv4OptionNop : public ::inet::IPv4Option
{
  protected:

  private:
    void copy(const IPv4OptionNop& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionNop&);

  public:
    IPv4OptionNop();
    IPv4OptionNop(const IPv4OptionNop& other);
    virtual ~IPv4OptionNop();
    IPv4OptionNop& operator=(const IPv4OptionNop& other);
    virtual IPv4OptionNop *dup() const override {return new IPv4OptionNop(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionNop& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionNop& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:106</tt> by nedtool.
 * <pre>
 * class IPv4OptionEnd extends IPv4Option
 * {
 *     type = IPOPTION_END_OF_OPTIONS;
 *     length = 1;
 * }
 * </pre>
 */
class INET_API IPv4OptionEnd : public ::inet::IPv4Option
{
  protected:

  private:
    void copy(const IPv4OptionEnd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionEnd&);

  public:
    IPv4OptionEnd();
    IPv4OptionEnd(const IPv4OptionEnd& other);
    virtual ~IPv4OptionEnd();
    IPv4OptionEnd& operator=(const IPv4OptionEnd& other);
    virtual IPv4OptionEnd *dup() const override {return new IPv4OptionEnd(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionEnd& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionEnd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:115</tt> by nedtool.
 * <pre>
 * //
 * // Option structure: Record Route
 * //
 * class IPv4OptionRecordRoute extends IPv4Option
 * {
 *     // type = IPOPTION_RECORD_ROUTE;
 *     // type = IPOPTION_LOOSE_SOURCE_ROUTING
 *     // type = IPOPTION_STRICT_SOURCE_ROUTING
 *     // length = 3 + 4 * getRecordAddressArraySize();
 *     short nextAddressIdx;
 *     // pointer = 4 + 4 * nextAddressIdx
 *     IPv4Address recordAddress[];    // max size is 9
 * }
 * </pre>
 */
class INET_API IPv4OptionRecordRoute : public ::inet::IPv4Option
{
  protected:
    short nextAddressIdx;
    IPv4Address *recordAddress; // array ptr
    unsigned int recordAddress_arraysize;

  private:
    void copy(const IPv4OptionRecordRoute& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionRecordRoute&);

  public:
    IPv4OptionRecordRoute();
    IPv4OptionRecordRoute(const IPv4OptionRecordRoute& other);
    virtual ~IPv4OptionRecordRoute();
    IPv4OptionRecordRoute& operator=(const IPv4OptionRecordRoute& other);
    virtual IPv4OptionRecordRoute *dup() const override {return new IPv4OptionRecordRoute(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getNextAddressIdx() const;
    virtual void setNextAddressIdx(short nextAddressIdx);
    virtual void setRecordAddressArraySize(unsigned int size);
    virtual unsigned int getRecordAddressArraySize() const;
    virtual IPv4Address& getRecordAddress(unsigned int k);
    virtual const IPv4Address& getRecordAddress(unsigned int k) const {return const_cast<IPv4OptionRecordRoute*>(this)->getRecordAddress(k);}
    virtual void setRecordAddress(unsigned int k, const IPv4Address& recordAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionRecordRoute& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionRecordRoute& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:129</tt> by nedtool.
 * <pre>
 * //
 * // Option structure: Timestamp
 * //
 * class IPv4OptionTimestamp extends IPv4Option
 * {
 *     type = IPOPTION_TIMESTAMP;
 *     // length = 4 + 4 * getRecordAddressArraySize() + 4 * getRecordTimestampArraySize();
 *     int flag \@enum(TimestampFlag);
 *     short overflow;
 *     short nextIdx;
 *     // pointer = 5 + (flag == IP_TIMESTAMP_TIMESTAMP_ONLY ? 4 : 8) * nextIdx
 * 
 *     // use either up to 4 addresses with timestamps or
 *     // only up to 9 timestamps, according to the flag
 *     IPv4Address recordAddress[];
 *     simtime_t recordTimestamp[];
 * }
 * </pre>
 */
class INET_API IPv4OptionTimestamp : public ::inet::IPv4Option
{
  protected:
    int flag;
    short overflow;
    short nextIdx;
    IPv4Address *recordAddress; // array ptr
    unsigned int recordAddress_arraysize;
    ::omnetpp::simtime_t *recordTimestamp; // array ptr
    unsigned int recordTimestamp_arraysize;

  private:
    void copy(const IPv4OptionTimestamp& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionTimestamp&);

  public:
    IPv4OptionTimestamp();
    IPv4OptionTimestamp(const IPv4OptionTimestamp& other);
    virtual ~IPv4OptionTimestamp();
    IPv4OptionTimestamp& operator=(const IPv4OptionTimestamp& other);
    virtual IPv4OptionTimestamp *dup() const override {return new IPv4OptionTimestamp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getFlag() const;
    virtual void setFlag(int flag);
    virtual short getOverflow() const;
    virtual void setOverflow(short overflow);
    virtual short getNextIdx() const;
    virtual void setNextIdx(short nextIdx);
    virtual void setRecordAddressArraySize(unsigned int size);
    virtual unsigned int getRecordAddressArraySize() const;
    virtual IPv4Address& getRecordAddress(unsigned int k);
    virtual const IPv4Address& getRecordAddress(unsigned int k) const {return const_cast<IPv4OptionTimestamp*>(this)->getRecordAddress(k);}
    virtual void setRecordAddress(unsigned int k, const IPv4Address& recordAddress);
    virtual void setRecordTimestampArraySize(unsigned int size);
    virtual unsigned int getRecordTimestampArraySize() const;
    virtual ::omnetpp::simtime_t getRecordTimestamp(unsigned int k) const;
    virtual void setRecordTimestamp(unsigned int k, ::omnetpp::simtime_t recordTimestamp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionTimestamp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionTimestamp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:147</tt> by nedtool.
 * <pre>
 * //
 * // Option Structure: Stream ID
 * //
 * class IPv4OptionStreamId extends IPv4Option
 * {
 *     type = IPOPTION_STREAM_ID;
 *     length = 4;
 *     short streamId;
 * }
 * </pre>
 */
class INET_API IPv4OptionStreamId : public ::inet::IPv4Option
{
  protected:
    short streamId;

  private:
    void copy(const IPv4OptionStreamId& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionStreamId&);

  public:
    IPv4OptionStreamId();
    IPv4OptionStreamId(const IPv4OptionStreamId& other);
    virtual ~IPv4OptionStreamId();
    IPv4OptionStreamId& operator=(const IPv4OptionStreamId& other);
    virtual IPv4OptionStreamId *dup() const override {return new IPv4OptionStreamId(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getStreamId() const;
    virtual void setStreamId(short streamId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionStreamId& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionStreamId& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:154</tt> by nedtool.
 * <pre>
 * class IPv4OptionUnknown extends IPv4Option
 * {
 *     // type = any
 *     // length = 2 + getBytesArraySize()
 *     uint8_t bytes[];
 * }
 * </pre>
 */
class INET_API IPv4OptionUnknown : public ::inet::IPv4Option
{
  protected:
    uint8_t *bytes; // array ptr
    unsigned int bytes_arraysize;

  private:
    void copy(const IPv4OptionUnknown& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4OptionUnknown&);

  public:
    IPv4OptionUnknown();
    IPv4OptionUnknown(const IPv4OptionUnknown& other);
    virtual ~IPv4OptionUnknown();
    IPv4OptionUnknown& operator=(const IPv4OptionUnknown& other);
    virtual IPv4OptionUnknown *dup() const override {return new IPv4OptionUnknown(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setBytesArraySize(unsigned int size);
    virtual unsigned int getBytesArraySize() const;
    virtual uint8_t getBytes(unsigned int k) const;
    virtual void setBytes(unsigned int k, uint8_t bytes);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IPv4OptionUnknown& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IPv4OptionUnknown& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/ipv4/IPv4Datagram.msg:174</tt> by nedtool.
 * <pre>
 * //
 * // Represents an IPv4 datagram.
 * //
 * // Uses the following cPacket fields:
 * //    - getByteLength() / setByteLength() to represent total datagram length
 * //    - hasBitError() / setBitError() to represent datagram correctness
 * //    - getTimestamp() / setTimestamp (simtime) used in timestamp option
 * //
 * // Additional length fields defined in this class are in bytes.
 * //
 * // Only one of the option fields can exist at a time.
 * //
 * packet IPv4Datagram
 * {
 *     \@customize(true);
 * 
 *     short version = 4;
 *     short headerLength = IP_HEADER_BYTES;
 * 
 *     IPv4Address srcAddress;
 *     IPv4Address destAddress;
 * 
 *     int transportProtocol \@enum(IPProtocolId) = IP_PROT_NONE;
 *     short timeToLive;
 *     int identification;
 *     bool moreFragments;
 *     bool dontFragment;
 *     int fragmentOffset;         // bytes, must be multiple of 8
 *     int totalLengthField = -1;       // -1 means: getTotalLengthField() uses getByteLength()
 *     unsigned char typeOfService;  // ToS byte
 *     abstract int diffServCodePoint;  // maps to bits 0-5 of ToS
 *     abstract int explicitCongestionNotification;  // maps to bits 6-7 of ToS
 * 
 *     TLVOptions options; // array of option pointers, option pointers owned by datagram
 * }
 * </pre>
 *
 * IPv4Datagram_Base is only useful if it gets subclassed, and IPv4Datagram is derived from it.
 * The minimum code to be written for IPv4Datagram is the following:
 *
 * <pre>
 * class INET_API IPv4Datagram : public IPv4Datagram_Base
 * {
 *   private:
 *     void copy(const IPv4Datagram& other) { ... }

 *   public:
 *     IPv4Datagram(const char *name=nullptr, short kind=0) : IPv4Datagram_Base(name,kind) {}
 *     IPv4Datagram(const IPv4Datagram& other) : IPv4Datagram_Base(other) {copy(other);}
 *     IPv4Datagram& operator=(const IPv4Datagram& other) {if (this==&other) return *this; IPv4Datagram_Base::operator=(other); copy(other); return *this;}
 *     virtual IPv4Datagram *dup() const override {return new IPv4Datagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv4Datagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv4Datagram)
 * </pre>
 */
class INET_API IPv4Datagram_Base : public ::omnetpp::cPacket
{
  protected:
    short version;
    short headerLength;
    IPv4Address srcAddress;
    IPv4Address destAddress;
    int transportProtocol;
    short timeToLive;
    int identification;
    bool moreFragments;
    bool dontFragment;
    int fragmentOffset;
    int totalLengthField;
    unsigned char typeOfService;
    TLVOptions options;

  private:
    void copy(const IPv4Datagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4Datagram_Base&);
    // make constructors protected to avoid instantiation
    IPv4Datagram_Base(const char *name=nullptr, short kind=0);
    IPv4Datagram_Base(const IPv4Datagram_Base& other);
    // make assignment operator protected to force the user override it
    IPv4Datagram_Base& operator=(const IPv4Datagram_Base& other);

  public:
    virtual ~IPv4Datagram_Base();
    virtual IPv4Datagram_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class IPv4Datagram");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getVersion() const;
    virtual void setVersion(short version);
    virtual short getHeaderLength() const;
    virtual void setHeaderLength(short headerLength);
    virtual IPv4Address& getSrcAddress();
    virtual const IPv4Address& getSrcAddress() const {return const_cast<IPv4Datagram_Base*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const IPv4Address& srcAddress);
    virtual IPv4Address& getDestAddress();
    virtual const IPv4Address& getDestAddress() const {return const_cast<IPv4Datagram_Base*>(this)->getDestAddress();}
    virtual void setDestAddress(const IPv4Address& destAddress);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual short getTimeToLive() const;
    virtual void setTimeToLive(short timeToLive);
    virtual int getIdentification() const;
    virtual void setIdentification(int identification);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual bool getDontFragment() const;
    virtual void setDontFragment(bool dontFragment);
    virtual int getFragmentOffset() const;
    virtual void setFragmentOffset(int fragmentOffset);
    virtual int getTotalLengthField() const;
    virtual void setTotalLengthField(int totalLengthField);
    virtual unsigned char getTypeOfService() const;
    virtual void setTypeOfService(unsigned char typeOfService);
    virtual int getDiffServCodePoint() const = 0;
    virtual void setDiffServCodePoint(int diffServCodePoint) = 0;
    virtual int getExplicitCongestionNotification() const = 0;
    virtual void setExplicitCongestionNotification(int explicitCongestionNotification) = 0;
    virtual TLVOptions& getOptions();
    virtual const TLVOptions& getOptions() const {return const_cast<IPv4Datagram_Base*>(this)->getOptions();}
    virtual void setOptions(const TLVOptions& options);
};

} // namespace inet

#endif // ifndef __INET_IPV4DATAGRAM_M_H
