//
// Generated file, do not edit! Created by nedtool 5.6 from inet/transportlayer/rtp/RTPParticipantInfo.msg.
//

#ifndef __INET__RTP_RTPPARTICIPANTINFO_M_H
#define __INET__RTP_RTPPARTICIPANTINFO_M_H

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
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
// }}


namespace inet {
namespace rtp {

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPParticipantInfo.msg:40</tt> by nedtool.
 * <pre>
 * //
 * // This class is a super class for classes intended for storing information
 * // about ~RTP end systems.
 * // It has two subclasses: RTPReceiverInformation which is used for storing
 * // information about other system participating in an ~RTP session.
 * // RTPSenderInformation is used by an ~RTP endsystem for storing information
 * // about itself.
 * // sa RTPReceiverInformation
 * // sa RTPSenderInformation
 * //
 * class RTPParticipantInfo extends cNamedObject
 * {
 *     \@customize(true);  // see the generated C++ header for more info
 * 
 *     abstract uint32 ssrc;
 * 
 *     // Used for storing the ip address of this endsystem.
 *     IPv4Address address = IPv4Address::UNSPECIFIED_ADDRESS;
 * 
 *     // Used for storing the port for ~RTP by this endsystem.
 *     int RTPPort = PORT_UNDEF;
 * 
 *     // Used for storing the port for ~RTCP by this endsystem.
 *     int RTCPPort = PORT_UNDEF;
 * }
 * </pre>
 *
 * RTPParticipantInfo_Base is only useful if it gets subclassed, and RTPParticipantInfo is derived from it.
 * The minimum code to be written for RTPParticipantInfo is the following:
 *
 * <pre>
 * class INET_API RTPParticipantInfo : public RTPParticipantInfo_Base
 * {
 *   private:
 *     void copy(const RTPParticipantInfo& other) { ... }

 *   public:
 *     RTPParticipantInfo(const char *name=nullptr) : RTPParticipantInfo_Base(name) {}
 *     RTPParticipantInfo(const RTPParticipantInfo& other) : RTPParticipantInfo_Base(other) {copy(other);}
 *     RTPParticipantInfo& operator=(const RTPParticipantInfo& other) {if (this==&other) return *this; RTPParticipantInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual RTPParticipantInfo *dup() const override {return new RTPParticipantInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTPParticipantInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTPParticipantInfo)
 * </pre>
 */
class INET_API RTPParticipantInfo_Base : public ::omnetpp::cNamedObject
{
  protected:
    IPv4Address address;
    int RTPPort;
    int RTCPPort;

  private:
    void copy(const RTPParticipantInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPParticipantInfo_Base&);
    // make constructors protected to avoid instantiation
    RTPParticipantInfo_Base(const char *name=nullptr);
    RTPParticipantInfo_Base(const RTPParticipantInfo_Base& other);
    // make assignment operator protected to force the user override it
    RTPParticipantInfo_Base& operator=(const RTPParticipantInfo_Base& other);

  public:
    virtual ~RTPParticipantInfo_Base();
    virtual RTPParticipantInfo_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class RTPParticipantInfo");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getSsrc() const = 0;
    virtual void setSsrc(uint32_t ssrc) = 0;
    virtual IPv4Address& getAddress();
    virtual const IPv4Address& getAddress() const {return const_cast<RTPParticipantInfo_Base*>(this)->getAddress();}
    virtual void setAddress(const IPv4Address& address);
    virtual int getRTPPort() const;
    virtual void setRTPPort(int RTPPort);
    virtual int getRTCPPort() const;
    virtual void setRTCPPort(int RTCPPort);
};

} // namespace rtp
} // namespace inet

#endif // ifndef __INET__RTP_RTPPARTICIPANTINFO_M_H
