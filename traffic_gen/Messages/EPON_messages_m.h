//
// Generated file, do not edit! Created by nedtool 5.6 from traffic_gen/Messages/EPON_messages.msg.
//

#ifndef __EPON_MESSAGES_M_H
#define __EPON_MESSAGES_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include <inttypes.h> 
// }}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:6</tt> by nedtool.
 * <pre>
 * packet MyPacket
 * {
 *     uint16_t SrcAddr;
 *     uint16_t DestAddr;
 *     uint16_t Priority;
 *     simtime_t txEnd;
 *     simtime_t txStart;
 * 
 *     bool lastPkt = false;
 *     uint32_t cycle;
 *     uint32_t cycleZ;
 *     uint16_t onuIndex;
 * }
 * </pre>
 */
class MyPacket : public ::omnetpp::cPacket
{
  protected:
    uint16_t SrcAddr;
    uint16_t DestAddr;
    uint16_t Priority;
    ::omnetpp::simtime_t txEnd;
    ::omnetpp::simtime_t txStart;
    bool lastPkt;
    uint32_t cycle;
    uint32_t cycleZ;
    uint16_t onuIndex;

  private:
    void copy(const MyPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MyPacket&);

  public:
    MyPacket(const char *name=nullptr, short kind=0);
    MyPacket(const MyPacket& other);
    virtual ~MyPacket();
    MyPacket& operator=(const MyPacket& other);
    virtual MyPacket *dup() const override {return new MyPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getSrcAddr() const;
    virtual void setSrcAddr(uint16_t SrcAddr);
    virtual uint16_t getDestAddr() const;
    virtual void setDestAddr(uint16_t DestAddr);
    virtual uint16_t getPriority() const;
    virtual void setPriority(uint16_t Priority);
    virtual ::omnetpp::simtime_t getTxEnd() const;
    virtual void setTxEnd(::omnetpp::simtime_t txEnd);
    virtual ::omnetpp::simtime_t getTxStart() const;
    virtual void setTxStart(::omnetpp::simtime_t txStart);
    virtual bool getLastPkt() const;
    virtual void setLastPkt(bool lastPkt);
    virtual uint32_t getCycle() const;
    virtual void setCycle(uint32_t cycle);
    virtual uint32_t getCycleZ() const;
    virtual void setCycleZ(uint32_t cycleZ);
    virtual uint16_t getOnuIndex() const;
    virtual void setOnuIndex(uint16_t onuIndex);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MyPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MyPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:20</tt> by nedtool.
 * <pre>
 * packet MPCP extends MyPacket
 * {
 *     uint16_t opcode;
 *     uint32_t ts;
 * }
 * </pre>
 */
class MPCP : public ::MyPacket
{
  protected:
    uint16_t opcode;
    uint32_t ts;

  private:
    void copy(const MPCP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MPCP&);

  public:
    MPCP(const char *name=nullptr, short kind=0);
    MPCP(const MPCP& other);
    virtual ~MPCP();
    MPCP& operator=(const MPCP& other);
    virtual MPCP *dup() const override {return new MPCP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getOpcode() const;
    virtual void setOpcode(uint16_t opcode);
    virtual uint32_t getTs() const;
    virtual void setTs(uint32_t ts);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MPCP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MPCP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:26</tt> by nedtool.
 * <pre>
 * packet RTTReg extends MPCP
 * {
 *     simtime_t Rtt;
 * }
 * </pre>
 */
class RTTReg : public ::MPCP
{
  protected:
    ::omnetpp::simtime_t Rtt;

  private:
    void copy(const RTTReg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTTReg&);

  public:
    RTTReg(const char *name=nullptr, short kind=0);
    RTTReg(const RTTReg& other);
    virtual ~RTTReg();
    RTTReg& operator=(const RTTReg& other);
    virtual RTTReg *dup() const override {return new RTTReg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getRtt() const;
    virtual void setRtt(::omnetpp::simtime_t Rtt);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RTTReg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RTTReg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:32</tt> by nedtool.
 * <pre>
 * packet MPCPAutoDiscovery extends MPCP
 * {
 *     // use for rtt test
 *     simtime_t rtt;
 * }
 * </pre>
 */
class MPCPAutoDiscovery : public ::MPCP
{
  protected:
    ::omnetpp::simtime_t rtt;

  private:
    void copy(const MPCPAutoDiscovery& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MPCPAutoDiscovery&);

  public:
    MPCPAutoDiscovery(const char *name=nullptr, short kind=0);
    MPCPAutoDiscovery(const MPCPAutoDiscovery& other);
    virtual ~MPCPAutoDiscovery();
    MPCPAutoDiscovery& operator=(const MPCPAutoDiscovery& other);
    virtual MPCPAutoDiscovery *dup() const override {return new MPCPAutoDiscovery(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getRtt() const;
    virtual void setRtt(::omnetpp::simtime_t rtt);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MPCPAutoDiscovery& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MPCPAutoDiscovery& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:38</tt> by nedtool.
 * <pre>
 * packet MPCPGate extends MPCP
 * {
 *     simtime_t startTime;
 *     uint32_t upLength;
 *     uint32_t downLength;
 *     uint32_t queueLength[2];
 * 
 *     simtime_t pwsTime[2];
 *     uint16_t pwsMode[2];
 * 
 *     bool interSleep = false;
 *     simtime_t endOfCycleTime;
 *     simtime_t endOfInterSleep;
 *     uint16_t transmitChannel;
 *     uint16_t onuIndex;
 *     bool holded = false;
 *     uint16_t recordedEnergyMode;
 * }
 * </pre>
 */
class MPCPGate : public ::MPCP
{
  protected:
    ::omnetpp::simtime_t startTime;
    uint32_t upLength;
    uint32_t downLength;
    uint32_t queueLength[2];
    ::omnetpp::simtime_t pwsTime[2];
    uint16_t pwsMode[2];
    bool interSleep;
    ::omnetpp::simtime_t endOfCycleTime;
    ::omnetpp::simtime_t endOfInterSleep;
    uint16_t transmitChannel;
    uint16_t onuIndex;
    bool holded;
    uint16_t recordedEnergyMode;

  private:
    void copy(const MPCPGate& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MPCPGate&);

  public:
    MPCPGate(const char *name=nullptr, short kind=0);
    MPCPGate(const MPCPGate& other);
    virtual ~MPCPGate();
    MPCPGate& operator=(const MPCPGate& other);
    virtual MPCPGate *dup() const override {return new MPCPGate(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getStartTime() const;
    virtual void setStartTime(::omnetpp::simtime_t startTime);
    virtual uint32_t getUpLength() const;
    virtual void setUpLength(uint32_t upLength);
    virtual uint32_t getDownLength() const;
    virtual void setDownLength(uint32_t downLength);
    virtual unsigned int getQueueLengthArraySize() const;
    virtual uint32_t getQueueLength(unsigned int k) const;
    virtual void setQueueLength(unsigned int k, uint32_t queueLength);
    virtual unsigned int getPwsTimeArraySize() const;
    virtual ::omnetpp::simtime_t getPwsTime(unsigned int k) const;
    virtual void setPwsTime(unsigned int k, ::omnetpp::simtime_t pwsTime);
    virtual unsigned int getPwsModeArraySize() const;
    virtual uint16_t getPwsMode(unsigned int k) const;
    virtual void setPwsMode(unsigned int k, uint16_t pwsMode);
    virtual bool getInterSleep() const;
    virtual void setInterSleep(bool interSleep);
    virtual ::omnetpp::simtime_t getEndOfCycleTime() const;
    virtual void setEndOfCycleTime(::omnetpp::simtime_t endOfCycleTime);
    virtual ::omnetpp::simtime_t getEndOfInterSleep() const;
    virtual void setEndOfInterSleep(::omnetpp::simtime_t endOfInterSleep);
    virtual uint16_t getTransmitChannel() const;
    virtual void setTransmitChannel(uint16_t transmitChannel);
    virtual uint16_t getOnuIndex() const;
    virtual void setOnuIndex(uint16_t onuIndex);
    virtual bool getHolded() const;
    virtual void setHolded(bool holded);
    virtual uint16_t getRecordedEnergyMode() const;
    virtual void setRecordedEnergyMode(uint16_t recordedEnergyMode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MPCPGate& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MPCPGate& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:57</tt> by nedtool.
 * <pre>
 * packet MPCPReport extends MPCP
 * {
 *     uint16_t curMode;
 *     uint32_t requestSize;
 * }
 * </pre>
 */
class MPCPReport : public ::MPCP
{
  protected:
    uint16_t curMode;
    uint32_t requestSize;

  private:
    void copy(const MPCPReport& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MPCPReport&);

  public:
    MPCPReport(const char *name=nullptr, short kind=0);
    MPCPReport(const MPCPReport& other);
    virtual ~MPCPReport();
    MPCPReport& operator=(const MPCPReport& other);
    virtual MPCPReport *dup() const override {return new MPCPReport(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getCurMode() const;
    virtual void setCurMode(uint16_t curMode);
    virtual uint32_t getRequestSize() const;
    virtual void setRequestSize(uint32_t requestSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MPCPReport& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MPCPReport& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>traffic_gen/Messages/EPON_messages.msg:63</tt> by nedtool.
 * <pre>
 * packet TimeOutMsg
 * {
 *     uint16_t onuIdx;
 * }
 * </pre>
 */
class TimeOutMsg : public ::omnetpp::cPacket
{
  protected:
    uint16_t onuIdx;

  private:
    void copy(const TimeOutMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TimeOutMsg&);

  public:
    TimeOutMsg(const char *name=nullptr, short kind=0);
    TimeOutMsg(const TimeOutMsg& other);
    virtual ~TimeOutMsg();
    TimeOutMsg& operator=(const TimeOutMsg& other);
    virtual TimeOutMsg *dup() const override {return new TimeOutMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getOnuIdx() const;
    virtual void setOnuIdx(uint16_t onuIdx);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TimeOutMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TimeOutMsg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __EPON_MESSAGES_M_H

