//
// Generated file, do not edit! Created by nedtool 5.6 from inet/transportlayer/tcp_common/TCPSegment.msg.
//

#ifndef __INET__TCP_TCPSEGMENT_M_H
#define __INET__TCP_TCPSEGMENT_M_H

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
#include "inet/common/INETDefs.h"
#include "inet/common/ByteArray.h"

namespace inet {
namespace tcp {
class Sack;
class TCPOption;
typedef TCPOption *TCPOptionPtr;
}
}
// }}


namespace inet {
namespace tcp {

// cplusplus {{
    // default TCP header length: 20 bytes
    #define TCP_HEADER_OCTETS  20    // without options

    // maximum TCP header length (base + options): 60 = 4 * 15 bytes
    const unsigned int TCP_MAX_HEADER_OCTETS = 60;

    // maximum allowed sack entry number, if no other options are used
    const unsigned int MAX_SACK_ENTRIES = 4;

    typedef cPacket *cPacketPtr;

    inline std::ostream& operator<<(std::ostream& os, cPacketPtr msg)
    {
        return os << "(" << msg->getClassName() << ") " << msg->getName() << ": " << msg->str();
    }

    inline void doPacking(cCommBuffer *b, cPacketPtr& msg) {msg->parsimPack(b);}
    inline void doUnpacking(cCommBuffer *b, cPacketPtr& msg) {msg->parsimUnpack(b);}
// }}

/**
 * Struct generated from inet/transportlayer/tcp_common/TCPSegment.msg:63 by nedtool.
 */
struct INET_API TCPPayloadMessage
{
    TCPPayloadMessage();
    unsigned int endSequenceNo;
    cPacketPtr msg;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const TCPPayloadMessage& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, TCPPayloadMessage& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPPayloadMessage& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPPayloadMessage& obj) { __doUnpacking(b, obj); }

/**
 * Enum generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:76</tt> by nedtool.
 * <pre>
 * //
 * // TCP Option Numbers
 * // Reference: http://www.iana.org/assignments/tcp-parameters/
 * // Date: 2011-07-02
 * //
 * // Note: Options not yet implemented should stay commented out
 * //
 * enum TCPOptionNumbers
 * {
 *     TCPOPTION_END_OF_OPTION_LIST = 0;                   // RFC 793, LENGTH: 1 Byte
 *     TCPOPTION_NO_OPERATION = 1;                         // RFC 793, LENGTH: 1 Byte
 *     TCPOPTION_MAXIMUM_SEGMENT_SIZE = 2;                 // RFC 793, LENGTH: 4 Bytes
 *     TCPOPTION_WINDOW_SCALE = 3;                         // RFC 1323, LENGTH: 3 Bytes
 *     TCPOPTION_SACK_PERMITTED = 4;                       // RFC 2018, LENGTH: 2 Bytes
 *     TCPOPTION_SACK = 5;                                 // RFC 2018, LENGTH: N (max. N = 4) 8 * n + 2 Bytes  => 32 + 2 + 2 * NOP = 36 Bytes; If TIMESTAMP option is used with SACK: max. n = 3 => 12 Bytes (for Timestamp) + 28 Bytes (for SACK) = 40 Bytes
 *     //    TCPOPTION_ECHO = 6;                               // (obsoleted by option 8) RFC 1072 & RFC 6247, LENGTH: 6 Bytes
 *     //    TCPOPTION_ECHO_REPLY = 7;                         // (obsoleted by option 8) RFC 1072 & RFC 6247, LENGTH: 6 Bytes
 *     TCPOPTION_TIMESTAMP = 8;                            // RFC 1323, LENGTH: 10 Bytes
 * }
 * </pre>
 */
enum TCPOptionNumbers {
    TCPOPTION_END_OF_OPTION_LIST = 0,
    TCPOPTION_NO_OPERATION = 1,
    TCPOPTION_MAXIMUM_SEGMENT_SIZE = 2,
    TCPOPTION_WINDOW_SCALE = 3,
    TCPOPTION_SACK_PERMITTED = 4,
    TCPOPTION_SACK = 5,
    TCPOPTION_TIMESTAMP = 8
};

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:116</tt> by nedtool.
 * <pre>
 * //
 * // This structure represents a single SACK (selective acknowledgment):
 * //
 * class SackItem
 * {
 *     unsigned int start;     // start seq no. of sack block
 *     unsigned int end;       // end seq no. of sack block
 * }
 * </pre>
 */
class INET_API SackItem : public ::omnetpp::cObject
{
  protected:
    unsigned int start;
    unsigned int end;

  private:
    void copy(const SackItem& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SackItem&);

  public:
    SackItem();
    SackItem(const SackItem& other);
    virtual ~SackItem();
    SackItem& operator=(const SackItem& other);
    virtual SackItem *dup() const override {return new SackItem(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getStart() const;
    virtual void setStart(unsigned int start);
    virtual unsigned int getEnd() const;
    virtual void setEnd(unsigned int end);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SackItem& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SackItem& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:122</tt> by nedtool.
 * <pre>
 * class Sack extends SackItem
 * {
 *     \@customize(true);
 * }
 * </pre>
 *
 * Sack_Base is only useful if it gets subclassed, and Sack is derived from it.
 * The minimum code to be written for Sack is the following:
 *
 * <pre>
 * class INET_API Sack : public Sack_Base
 * {
 *   private:
 *     void copy(const Sack& other) { ... }

 *   public:
 *     Sack() : Sack_Base() {}
 *     Sack(const Sack& other) : Sack_Base(other) {copy(other);}
 *     Sack& operator=(const Sack& other) {if (this==&other) return *this; Sack_Base::operator=(other); copy(other); return *this;}
 *     virtual Sack *dup() const override {return new Sack(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Sack_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Sack)
 * </pre>
 */
class INET_API Sack_Base : public ::inet::tcp::SackItem
{
  protected:

  private:
    void copy(const Sack_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Sack_Base&);
    // make constructors protected to avoid instantiation
    Sack_Base();
    Sack_Base(const Sack_Base& other);
    // make assignment operator protected to force the user override it
    Sack_Base& operator=(const Sack_Base& other);

  public:
    virtual ~Sack_Base();
    virtual Sack_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class Sack");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:129</tt> by nedtool.
 * <pre>
 * class TCPOption
 * {
 *     unsigned short kind \@enum(TCPOptionNumbers) = -1;  // option kind
 *     unsigned short length = 1;                    // option length
 * }
 * </pre>
 */
class INET_API TCPOption : public ::omnetpp::cObject
{
  protected:
    unsigned short kind;
    unsigned short length;

  private:
    void copy(const TCPOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOption&);

  public:
    TCPOption();
    TCPOption(const TCPOption& other);
    virtual ~TCPOption();
    TCPOption& operator=(const TCPOption& other);
    virtual TCPOption *dup() const override {return new TCPOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getKind() const;
    virtual void setKind(unsigned short kind);
    virtual unsigned short getLength() const;
    virtual void setLength(unsigned short length);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:135</tt> by nedtool.
 * <pre>
 * class TCPOptionEnd extends TCPOption
 * {
 *     kind = TCPOPTION_END_OF_OPTION_LIST;
 *     length = 1;
 * }
 * </pre>
 */
class INET_API TCPOptionEnd : public ::inet::tcp::TCPOption
{
  protected:

  private:
    void copy(const TCPOptionEnd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionEnd&);

  public:
    TCPOptionEnd();
    TCPOptionEnd(const TCPOptionEnd& other);
    virtual ~TCPOptionEnd();
    TCPOptionEnd& operator=(const TCPOptionEnd& other);
    virtual TCPOptionEnd *dup() const override {return new TCPOptionEnd(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionEnd& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionEnd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:141</tt> by nedtool.
 * <pre>
 * class TCPOptionNop extends TCPOption
 * {
 *     kind = TCPOPTION_NO_OPERATION;
 *     length = 1;
 * }
 * </pre>
 */
class INET_API TCPOptionNop : public ::inet::tcp::TCPOption
{
  protected:

  private:
    void copy(const TCPOptionNop& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionNop&);

  public:
    TCPOptionNop();
    TCPOptionNop(const TCPOptionNop& other);
    virtual ~TCPOptionNop();
    TCPOptionNop& operator=(const TCPOptionNop& other);
    virtual TCPOptionNop *dup() const override {return new TCPOptionNop(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionNop& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionNop& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:147</tt> by nedtool.
 * <pre>
 * class TCPOptionMaxSegmentSize extends TCPOption
 * {
 *     kind = TCPOPTION_MAXIMUM_SEGMENT_SIZE;
 *     length = 4;
 *     uint16_t maxSegmentSize;   // uint16_t
 * }
 * </pre>
 */
class INET_API TCPOptionMaxSegmentSize : public ::inet::tcp::TCPOption
{
  protected:
    uint16_t maxSegmentSize;

  private:
    void copy(const TCPOptionMaxSegmentSize& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionMaxSegmentSize&);

  public:
    TCPOptionMaxSegmentSize();
    TCPOptionMaxSegmentSize(const TCPOptionMaxSegmentSize& other);
    virtual ~TCPOptionMaxSegmentSize();
    TCPOptionMaxSegmentSize& operator=(const TCPOptionMaxSegmentSize& other);
    virtual TCPOptionMaxSegmentSize *dup() const override {return new TCPOptionMaxSegmentSize(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getMaxSegmentSize() const;
    virtual void setMaxSegmentSize(uint16_t maxSegmentSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionMaxSegmentSize& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionMaxSegmentSize& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:154</tt> by nedtool.
 * <pre>
 * class TCPOptionWindowScale extends TCPOption
 * {
 *     kind = TCPOPTION_WINDOW_SCALE;
 *     length = 3;
 *     unsigned short windowScale;   // uint8_t
 * }
 * </pre>
 */
class INET_API TCPOptionWindowScale : public ::inet::tcp::TCPOption
{
  protected:
    unsigned short windowScale;

  private:
    void copy(const TCPOptionWindowScale& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionWindowScale&);

  public:
    TCPOptionWindowScale();
    TCPOptionWindowScale(const TCPOptionWindowScale& other);
    virtual ~TCPOptionWindowScale();
    TCPOptionWindowScale& operator=(const TCPOptionWindowScale& other);
    virtual TCPOptionWindowScale *dup() const override {return new TCPOptionWindowScale(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getWindowScale() const;
    virtual void setWindowScale(unsigned short windowScale);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionWindowScale& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionWindowScale& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:161</tt> by nedtool.
 * <pre>
 * class TCPOptionSackPermitted extends TCPOption
 * {
 *     kind = TCPOPTION_SACK_PERMITTED;
 *     length = 2;
 * }
 * </pre>
 */
class INET_API TCPOptionSackPermitted : public ::inet::tcp::TCPOption
{
  protected:

  private:
    void copy(const TCPOptionSackPermitted& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionSackPermitted&);

  public:
    TCPOptionSackPermitted();
    TCPOptionSackPermitted(const TCPOptionSackPermitted& other);
    virtual ~TCPOptionSackPermitted();
    TCPOptionSackPermitted& operator=(const TCPOptionSackPermitted& other);
    virtual TCPOptionSackPermitted *dup() const override {return new TCPOptionSackPermitted(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionSackPermitted& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionSackPermitted& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:167</tt> by nedtool.
 * <pre>
 * class TCPOptionSack extends TCPOption
 * {
 *     kind = TCPOPTION_SACK;
 *     length = 2;     // 2 + getSackArraySize() * 8
 *     SackItem sackItem[];
 * }
 * </pre>
 */
class INET_API TCPOptionSack : public ::inet::tcp::TCPOption
{
  protected:
    SackItem *sackItem; // array ptr
    unsigned int sackItem_arraysize;

  private:
    void copy(const TCPOptionSack& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionSack&);

  public:
    TCPOptionSack();
    TCPOptionSack(const TCPOptionSack& other);
    virtual ~TCPOptionSack();
    TCPOptionSack& operator=(const TCPOptionSack& other);
    virtual TCPOptionSack *dup() const override {return new TCPOptionSack(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setSackItemArraySize(unsigned int size);
    virtual unsigned int getSackItemArraySize() const;
    virtual SackItem& getSackItem(unsigned int k);
    virtual const SackItem& getSackItem(unsigned int k) const {return const_cast<TCPOptionSack*>(this)->getSackItem(k);}
    virtual void setSackItem(unsigned int k, const SackItem& sackItem);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionSack& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionSack& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:174</tt> by nedtool.
 * <pre>
 * class TCPOptionTimestamp extends TCPOption
 * {
 *     kind = TCPOPTION_TIMESTAMP;
 *     length = 10;
 *     uint32_t senderTimestamp;
 *     uint32_t echoedTimestamp;
 * }
 * </pre>
 */
class INET_API TCPOptionTimestamp : public ::inet::tcp::TCPOption
{
  protected:
    uint32_t senderTimestamp;
    uint32_t echoedTimestamp;

  private:
    void copy(const TCPOptionTimestamp& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionTimestamp&);

  public:
    TCPOptionTimestamp();
    TCPOptionTimestamp(const TCPOptionTimestamp& other);
    virtual ~TCPOptionTimestamp();
    TCPOptionTimestamp& operator=(const TCPOptionTimestamp& other);
    virtual TCPOptionTimestamp *dup() const override {return new TCPOptionTimestamp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getSenderTimestamp() const;
    virtual void setSenderTimestamp(uint32_t senderTimestamp);
    virtual uint32_t getEchoedTimestamp() const;
    virtual void setEchoedTimestamp(uint32_t echoedTimestamp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionTimestamp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionTimestamp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:182</tt> by nedtool.
 * <pre>
 * class TCPOptionUnknown extends TCPOption
 * {
 *     kind = -1;
 *     uint8_t bytes[];
 * }
 * </pre>
 */
class INET_API TCPOptionUnknown : public ::inet::tcp::TCPOption
{
  protected:
    uint8_t *bytes; // array ptr
    unsigned int bytes_arraysize;

  private:
    void copy(const TCPOptionUnknown& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPOptionUnknown&);

  public:
    TCPOptionUnknown();
    TCPOptionUnknown(const TCPOptionUnknown& other);
    virtual ~TCPOptionUnknown();
    TCPOptionUnknown& operator=(const TCPOptionUnknown& other);
    virtual TCPOptionUnknown *dup() const override {return new TCPOptionUnknown(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setBytesArraySize(unsigned int size);
    virtual unsigned int getBytesArraySize() const;
    virtual uint8_t getBytes(unsigned int k) const;
    virtual void setBytes(unsigned int k, uint8_t bytes);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TCPOptionUnknown& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TCPOptionUnknown& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/tcp_common/TCPSegment.msg:202</tt> by nedtool.
 * <pre>
 * //
 * // Represents a TCP segment, to be used with the ~TCP module.
 * //
 * // TCP header fields not explicitly modelled: work on going
 * // - Data Offset (number of 32 bit words in the header): represented
 * //   by cMessage::length().
 * // - Reserved (reserved for future use)
 * // - Checksum (header checksum): modelled by cMessage::hasBitError()
 * // - Header Options: Currently only EOL, NOP, MSS, WS, SACK_PERMITTED, SACK and TS are implemented
 * // - Padding
 * //
 * // cMessage::getKind() may be set to an arbitrary value: TCP entities will
 * // ignore it and use only the header fields (synBit, ackBit, rstBit).
 * //
 * packet TCPSegment
 * {
 *     \@customize(true);
 * 
 *     // Source Port
 *     unsigned short srcPort;
 * 
 *     // Destination Port
 *     unsigned short destPort;
 * 
 *     // Sequence Number: first sequence number of the first data octet
 *     // in the respective segment (except if SYN is set; then the the
 *     // seq. number is the initial seq. number (ISS) and the first data
 *     // octet is ISS + 1)
 *     unsigned int sequenceNo;
 * 
 *     // Acknowledgement Number: if ACK flag is set, this field contains
 *     // the next sequence number the sender of this segment is expecting
 *     // to receive
 *     unsigned int ackNo;
 * 
 *     // TCP Header Length - default: 20 bytes
 *     // if header options are used the headerLength is greater than 20 bytes (default)
 *     unsigned short headerLength = TCP_HEADER_OCTETS; // TCP_HEADER_OCTETS = 20
 * 
 *     bool urgBit; // URG: urgent pointer field significant if set
 *     bool ackBit; // ACK: ackNo significant if set
 *     bool pshBit; // PSH: push function
 *     bool rstBit; // RST: reset the connection
 *     bool synBit; // SYN: synchronize seq. numbers
 *     bool finBit; // FIN: finish - no more data from sender
 * 
 *     // Window Size: the number of data octets beginning with the one indicated
 *     // in the acknowledgement field which the sender of this segment is
 *     // willing to accept
 *     unsigned short window;
 * 
 *     // Urgent Pointer: communicates the current value of the urgent pointer
 *     // as a positive offset from the sequence number in this segment. The
 *     // urgent pointer points to the sequence number of the octet following
 *     // the urgent data. This field is only be interpreted in segments with
 *     // the URG control bit set.
 *     unsigned short urgentPointer;
 * 
 *     // Header options (optional)
 *     // Currently only EOL, NOP, MSS, WS, SACK_PERMITTED, SACK and TS are implemented
 *     abstract TCPOptionPtr headerOption[];
 * 
 *     // Payload length in octets (not an actual TCP header field).
 *     // This may not always be the same as encapsulatedPacket()->getByteLength();
 *     // e.g. when simulating a virtual data stream there's no encapsulated
 *     // packet at all.
 *     unsigned long payloadLength;
 * 
 *     // Message objects (cMessages) that travel in this segment as data.
 *     // This field is used only when the ~TCPDataTransferMode is TCP_TRANSFER_OBJECT.
 *     // Every message object is put into the TCPSegment that would (in real life)
 *     // carry its first octet. That is, if message object 'msg' with length=100 bytes
 *     // occupies stream offset number range 10000..10099, it will travel in the
 *     // TCPSegment which carries the octet 10000. This way it is easily achieved
 *     // that the receiving TCP passes up the message object to its client
 *     // when the last byte of the message has arrived.
 *     abstract TCPPayloadMessage payload[];
 * 
 *     // Message bytes that travel in this segment as data.
 *     // This field is used only when the ~TCPDataTransferMode is TCP_TRANSFER_BYTESTREAM.
 *     ByteArray byteArray;
 * }
 * </pre>
 *
 * TCPSegment_Base is only useful if it gets subclassed, and TCPSegment is derived from it.
 * The minimum code to be written for TCPSegment is the following:
 *
 * <pre>
 * class INET_API TCPSegment : public TCPSegment_Base
 * {
 *   private:
 *     void copy(const TCPSegment& other) { ... }

 *   public:
 *     TCPSegment(const char *name=nullptr, short kind=0) : TCPSegment_Base(name,kind) {}
 *     TCPSegment(const TCPSegment& other) : TCPSegment_Base(other) {copy(other);}
 *     TCPSegment& operator=(const TCPSegment& other) {if (this==&other) return *this; TCPSegment_Base::operator=(other); copy(other); return *this;}
 *     virtual TCPSegment *dup() const override {return new TCPSegment(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from TCPSegment_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(TCPSegment)
 * </pre>
 */
class INET_API TCPSegment_Base : public ::omnetpp::cPacket
{
  protected:
    unsigned short srcPort;
    unsigned short destPort;
    unsigned int sequenceNo;
    unsigned int ackNo;
    unsigned short headerLength;
    bool urgBit;
    bool ackBit;
    bool pshBit;
    bool rstBit;
    bool synBit;
    bool finBit;
    unsigned short window;
    unsigned short urgentPointer;
    unsigned long payloadLength;
    ByteArray byteArray;

  private:
    void copy(const TCPSegment_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPSegment_Base&);
    // make constructors protected to avoid instantiation
    TCPSegment_Base(const char *name=nullptr, short kind=0);
    TCPSegment_Base(const TCPSegment_Base& other);
    // make assignment operator protected to force the user override it
    TCPSegment_Base& operator=(const TCPSegment_Base& other);

  public:
    virtual ~TCPSegment_Base();
    virtual TCPSegment_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class TCPSegment");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getSrcPort() const;
    virtual void setSrcPort(unsigned short srcPort);
    virtual unsigned short getDestPort() const;
    virtual void setDestPort(unsigned short destPort);
    virtual unsigned int getSequenceNo() const;
    virtual void setSequenceNo(unsigned int sequenceNo);
    virtual unsigned int getAckNo() const;
    virtual void setAckNo(unsigned int ackNo);
    virtual unsigned short getHeaderLength() const;
    virtual void setHeaderLength(unsigned short headerLength);
    virtual bool getUrgBit() const;
    virtual void setUrgBit(bool urgBit);
    virtual bool getAckBit() const;
    virtual void setAckBit(bool ackBit);
    virtual bool getPshBit() const;
    virtual void setPshBit(bool pshBit);
    virtual bool getRstBit() const;
    virtual void setRstBit(bool rstBit);
    virtual bool getSynBit() const;
    virtual void setSynBit(bool synBit);
    virtual bool getFinBit() const;
    virtual void setFinBit(bool finBit);
    virtual unsigned short getWindow() const;
    virtual void setWindow(unsigned short window);
    virtual unsigned short getUrgentPointer() const;
    virtual void setUrgentPointer(unsigned short urgentPointer);
    virtual void setHeaderOptionArraySize(unsigned int size) = 0;
    virtual unsigned int getHeaderOptionArraySize() const = 0;
    virtual TCPOptionPtr& getHeaderOption(unsigned int k) = 0;
    virtual const TCPOptionPtr& getHeaderOption(unsigned int k) const {return const_cast<TCPSegment_Base*>(this)->getHeaderOption(k);}
    virtual void setHeaderOption(unsigned int k, const TCPOptionPtr& headerOption) = 0;
    virtual unsigned long getPayloadLength() const;
    virtual void setPayloadLength(unsigned long payloadLength);
    virtual void setPayloadArraySize(unsigned int size) = 0;
    virtual unsigned int getPayloadArraySize() const = 0;
    virtual TCPPayloadMessage& getPayload(unsigned int k) = 0;
    virtual const TCPPayloadMessage& getPayload(unsigned int k) const {return const_cast<TCPSegment_Base*>(this)->getPayload(k);}
    virtual void setPayload(unsigned int k, const TCPPayloadMessage& payload) = 0;
    virtual ByteArray& getByteArray();
    virtual const ByteArray& getByteArray() const {return const_cast<TCPSegment_Base*>(this)->getByteArray();}
    virtual void setByteArray(const ByteArray& byteArray);
};

} // namespace tcp
} // namespace inet

#endif // ifndef __INET__TCP_TCPSEGMENT_M_H

