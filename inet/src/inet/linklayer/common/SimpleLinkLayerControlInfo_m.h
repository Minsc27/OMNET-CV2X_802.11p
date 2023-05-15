//
// Generated file, do not edit! Created by nedtool 5.6 from inet/linklayer/common/SimpleLinkLayerControlInfo.msg.
//

#ifndef __INET_SIMPLELINKLAYERCONTROLINFO_M_H
#define __INET_SIMPLELINKLAYERCONTROLINFO_M_H

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
    #include "inet/linklayer/common/MACAddress.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/linklayer/common/SimpleLinkLayerControlInfo.msg:10</tt> by nedtool.
 * <pre>
 * class SimpleLinkLayerControlInfo
 * {
 *     \@customize(true);
 * 
 *     MACAddress src;  // can be left empty when sending
 *     MACAddress dest;
 *     int interfaceId;
 * }
 * </pre>
 *
 * SimpleLinkLayerControlInfo_Base is only useful if it gets subclassed, and SimpleLinkLayerControlInfo is derived from it.
 * The minimum code to be written for SimpleLinkLayerControlInfo is the following:
 *
 * <pre>
 * class INET_API SimpleLinkLayerControlInfo : public SimpleLinkLayerControlInfo_Base
 * {
 *   private:
 *     void copy(const SimpleLinkLayerControlInfo& other) { ... }

 *   public:
 *     SimpleLinkLayerControlInfo() : SimpleLinkLayerControlInfo_Base() {}
 *     SimpleLinkLayerControlInfo(const SimpleLinkLayerControlInfo& other) : SimpleLinkLayerControlInfo_Base(other) {copy(other);}
 *     SimpleLinkLayerControlInfo& operator=(const SimpleLinkLayerControlInfo& other) {if (this==&other) return *this; SimpleLinkLayerControlInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual SimpleLinkLayerControlInfo *dup() const override {return new SimpleLinkLayerControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from SimpleLinkLayerControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(SimpleLinkLayerControlInfo)
 * </pre>
 */
class INET_API SimpleLinkLayerControlInfo_Base : public ::omnetpp::cObject
{
  protected:
    MACAddress src;
    MACAddress dest;
    int interfaceId;

  private:
    void copy(const SimpleLinkLayerControlInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SimpleLinkLayerControlInfo_Base&);
    // make constructors protected to avoid instantiation
    SimpleLinkLayerControlInfo_Base();
    SimpleLinkLayerControlInfo_Base(const SimpleLinkLayerControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    SimpleLinkLayerControlInfo_Base& operator=(const SimpleLinkLayerControlInfo_Base& other);

  public:
    virtual ~SimpleLinkLayerControlInfo_Base();
    virtual SimpleLinkLayerControlInfo_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class SimpleLinkLayerControlInfo");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual MACAddress& getSrc();
    virtual const MACAddress& getSrc() const {return const_cast<SimpleLinkLayerControlInfo_Base*>(this)->getSrc();}
    virtual void setSrc(const MACAddress& src);
    virtual MACAddress& getDest();
    virtual const MACAddress& getDest() const {return const_cast<SimpleLinkLayerControlInfo_Base*>(this)->getDest();}
    virtual void setDest(const MACAddress& dest);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
};

} // namespace inet

#endif // ifndef __INET_SIMPLELINKLAYERCONTROLINFO_M_H

