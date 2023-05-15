#
# OMNeT++/OMNEST Makefile for $(LIB_PREFIX)INET
#
# This file was generated with the command:
#  opp_makemake --make-so -f --deep -o INET -O out -pINET -I. -Xinet/applications/voipstream -Xinet/linklayer/ext -Xinet/transportlayer/tcp_lwip -Xinet/transportlayer/tcp_nsc
#

# Name of target to be created (-o option)
TARGET = $(LIB_PREFIX)INET$(D)$(SHARED_LIB_SUFFIX)
TARGET_DIR = .

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc, .msg and .sm files
OBJS = \
    $O/inet/applications/base/ApplicationBase.o \
    $O/inet/applications/dhcp/DHCPClient.o \
    $O/inet/applications/dhcp/DHCPServer.o \
    $O/inet/applications/ethernet/EtherAppCli.o \
    $O/inet/applications/ethernet/EtherAppSrv.o \
    $O/inet/applications/ethernet/EthernetApplication.o \
    $O/inet/applications/ethernet/EtherTrafGen.o \
    $O/inet/applications/generic/IPvXTrafGen.o \
    $O/inet/applications/generic/IPvXTrafSink.o \
    $O/inet/applications/httptools/browser/HttpBrowser.o \
    $O/inet/applications/httptools/browser/HttpBrowserBase.o \
    $O/inet/applications/httptools/browser/HttpBrowserDirect.o \
    $O/inet/applications/httptools/common/HttpNodeBase.o \
    $O/inet/applications/httptools/common/HttpRandom.o \
    $O/inet/applications/httptools/common/HttpUtils.o \
    $O/inet/applications/httptools/configurator/HttpController.o \
    $O/inet/applications/httptools/server/HttpServer.o \
    $O/inet/applications/httptools/server/HttpServerBase.o \
    $O/inet/applications/httptools/server/HttpServerDirect.o \
    $O/inet/applications/httptools/server/HttpServerDirectEvilA.o \
    $O/inet/applications/httptools/server/HttpServerDirectEvilB.o \
    $O/inet/applications/httptools/server/HttpServerEvilA.o \
    $O/inet/applications/httptools/server/HttpServerEvilB.o \
    $O/inet/applications/netperfmeter/NetPerfMeter.o \
    $O/inet/applications/packetdrill/lexer.o \
    $O/inet/applications/packetdrill/PacketDrill.o \
    $O/inet/applications/packetdrill/PacketDrillApp.o \
    $O/inet/applications/packetdrill/PacketDrillUtils.o \
    $O/inet/applications/packetdrill/parser.o \
    $O/inet/applications/pingapp/PingApp.o \
    $O/inet/applications/rtpapp/RTPApplication.o \
    $O/inet/applications/sctpapp/SCTPClient.o \
    $O/inet/applications/sctpapp/SCTPNatPeer.o \
    $O/inet/applications/sctpapp/SCTPNatServer.o \
    $O/inet/applications/sctpapp/SCTPPeer.o \
    $O/inet/applications/sctpapp/SCTPServer.o \
    $O/inet/applications/tcpapp/TCPAppBase.o \
    $O/inet/applications/tcpapp/TCPBasicClientApp.o \
    $O/inet/applications/tcpapp/TCPEchoApp.o \
    $O/inet/applications/tcpapp/TCPGenericSrvApp.o \
    $O/inet/applications/tcpapp/TCPGenericSrvThread.o \
    $O/inet/applications/tcpapp/TCPSessionApp.o \
    $O/inet/applications/tcpapp/TCPSinkApp.o \
    $O/inet/applications/tcpapp/TCPSrvHostApp.o \
    $O/inet/applications/tcpapp/TelnetApp.o \
    $O/inet/applications/tunapp/TunLoopbackApp.o \
    $O/inet/applications/udpapp/UDPBasicApp.o \
    $O/inet/applications/udpapp/UDPBasicBurst.o \
    $O/inet/applications/udpapp/UDPEchoApp.o \
    $O/inet/applications/udpapp/UDPSink.o \
    $O/inet/applications/udpapp/UDPVideoStreamCli.o \
    $O/inet/applications/udpapp/UDPVideoStreamSvr.o \
    $O/inet/applications/voip/SimpleVoIPReceiver.o \
    $O/inet/applications/voip/SimpleVoIPSender.o \
    $O/inet/common/BitVector.o \
    $O/inet/common/ByteArray.o \
    $O/inet/common/ByteArrayBuffer.o \
    $O/inet/common/Compat.o \
    $O/inet/common/INETUtils.o \
    $O/inet/common/InitStages.o \
    $O/inet/common/int128.o \
    $O/inet/common/IntervalTree.o \
    $O/inet/common/LayeredProtocolBase.o \
    $O/inet/common/Macho.o \
    $O/inet/common/MatchableObject.o \
    $O/inet/common/ModuleAccess.o \
    $O/inet/common/NedFunctions.o \
    $O/inet/common/NetworkCommunicationFingerprintCalculator.o \
    $O/inet/common/NotifierConsts.o \
    $O/inet/common/OSGScene.o \
    $O/inet/common/OSGUtils.o \
    $O/inet/common/PatternMatcher.o \
    $O/inet/common/ProtocolMap.o \
    $O/inet/common/RawPacket.o \
    $O/inet/common/ReassemblyBuffer.o \
    $O/inet/common/ResultFilters.o \
    $O/inet/common/ResultRecorders.o \
    $O/inet/common/ShortBitVector.o \
    $O/inet/common/TLVOption.o \
    $O/inet/common/Topology.o \
    $O/inet/common/XMLUtils.o \
    $O/inet/common/figures/BarFigure.o \
    $O/inet/common/figures/BoxedLabelFigure.o \
    $O/inet/common/figures/CounterFigure.o \
    $O/inet/common/figures/cPanelFigure.o \
    $O/inet/common/figures/DelegateSignalConfigurator.o \
    $O/inet/common/figures/FigureRecorder.o \
    $O/inet/common/figures/GaugeFigure.o \
    $O/inet/common/figures/HeatMapFigure.o \
    $O/inet/common/figures/IndexedImageFigure.o \
    $O/inet/common/figures/IndicatorLabelFigure.o \
    $O/inet/common/figures/IndicatorTextFigure.o \
    $O/inet/common/figures/InstrumentUtil.o \
    $O/inet/common/figures/LabeledIconFigure.o \
    $O/inet/common/figures/LabeledLineFigure.o \
    $O/inet/common/figures/LabeledPolylineFigure.o \
    $O/inet/common/figures/LinearGaugeFigure.o \
    $O/inet/common/figures/PlotFigure.o \
    $O/inet/common/figures/ProgressMeterFigure.o \
    $O/inet/common/figures/QueueFigure.o \
    $O/inet/common/figures/SignalFigure.o \
    $O/inet/common/figures/ThermometerFigure.o \
    $O/inet/common/figures/TrailFigure.o \
    $O/inet/common/geometry/base/GeometricObjectBase.o \
    $O/inet/common/geometry/base/ShapeBase.o \
    $O/inet/common/geometry/common/CanvasProjection.o \
    $O/inet/common/geometry/common/Coord.o \
    $O/inet/common/geometry/common/CoordinateSystem.o \
    $O/inet/common/geometry/common/EulerAngles.o \
    $O/inet/common/geometry/common/Quaternion.o \
    $O/inet/common/geometry/common/Rotation.o \
    $O/inet/common/geometry/container/BVHTree.o \
    $O/inet/common/geometry/container/QuadTree.o \
    $O/inet/common/geometry/container/SpatialGrid.o \
    $O/inet/common/geometry/object/Box.o \
    $O/inet/common/geometry/object/LineSegment.o \
    $O/inet/common/geometry/object/Plane.o \
    $O/inet/common/geometry/object/Polygon.o \
    $O/inet/common/geometry/shape/Cuboid.o \
    $O/inet/common/geometry/shape/Prism.o \
    $O/inet/common/geometry/shape/Sphere.o \
    $O/inet/common/geometry/shape/polyhedron/Polyhedron.o \
    $O/inet/common/geometry/shape/polyhedron/PolyhedronEdge.o \
    $O/inet/common/geometry/shape/polyhedron/PolyhedronFace.o \
    $O/inet/common/geometry/shape/polyhedron/PolyhedronPoint.o \
    $O/inet/common/lifecycle/InterfaceOperations.o \
    $O/inet/common/lifecycle/LifecycleController.o \
    $O/inet/common/lifecycle/NodeOperations.o \
    $O/inet/common/lifecycle/NodeStatus.o \
    $O/inet/common/lifecycle/OperationalBase.o \
    $O/inet/common/mapping/MappingBase.o \
    $O/inet/common/mapping/MappingUtils.o \
    $O/inet/common/misc/MessageChecker.o \
    $O/inet/common/misc/NetAnimTrace.o \
    $O/inet/common/misc/SignalSource.o \
    $O/inet/common/misc/ThruputMeter.o \
    $O/inet/common/misc/ThruputMeteringChannel.o \
    $O/inet/common/packet/InetPacketBytesPrinter.o \
    $O/inet/common/packet/InetPacketPrinter.o \
    $O/inet/common/packet/InetPacketPrinter2.o \
    $O/inet/common/packet/PacketDump.o \
    $O/inet/common/packet/PcapDump.o \
    $O/inet/common/packet/PcapRecorder.o \
    $O/inet/common/packet/TCPDump.o \
    $O/inet/common/queue/AbstractQueue.o \
    $O/inet/common/queue/AlgorithmicDropperBase.o \
    $O/inet/common/queue/Delayer.o \
    $O/inet/common/queue/DropTailQueue.o \
    $O/inet/common/queue/FIFOQueue.o \
    $O/inet/common/queue/Join.o \
    $O/inet/common/queue/OrdinalBasedDropper.o \
    $O/inet/common/queue/OrdinalBasedDuplicator.o \
    $O/inet/common/queue/PacketQueue.o \
    $O/inet/common/queue/PassiveQueueBase.o \
    $O/inet/common/queue/PriorityScheduler.o \
    $O/inet/common/queue/QueueBase.o \
    $O/inet/common/queue/REDDropper.o \
    $O/inet/common/queue/SchedulerBase.o \
    $O/inet/common/queue/Sink.o \
    $O/inet/common/queue/ThresholdDropper.o \
    $O/inet/common/queue/WRRScheduler.o \
    $O/inet/common/scenario/ScenarioManager.o \
    $O/inet/common/serializer/Buffer.o \
    $O/inet/common/serializer/SerializerBase.o \
    $O/inet/common/serializer/TCPIPchecksum.o \
    $O/inet/common/serializer/headerserializers/EthernetCRC.o \
    $O/inet/common/serializer/headerserializers/arp/ARPSerializer.o \
    $O/inet/common/serializer/headerserializers/ethernet/EthernetSerializer.o \
    $O/inet/common/serializer/headerserializers/ieee80211/Ieee80211PhySerializer.o \
    $O/inet/common/serializer/headerserializers/ieee80211/Ieee80211Serializer.o \
    $O/inet/common/serializer/ipv4/ICMPSerializer.o \
    $O/inet/common/serializer/ipv4/IGMPSerializer.o \
    $O/inet/common/serializer/ipv4/IPv4Serializer.o \
    $O/inet/common/serializer/ipv6/ICMPv6Serializer.o \
    $O/inet/common/serializer/ipv6/IPv6Serializer.o \
    $O/inet/common/serializer/sctp/SCTPSerializer.o \
    $O/inet/common/serializer/tcp/TCPSerializer.o \
    $O/inet/common/serializer/udp/UDPSerializer.o \
    $O/inet/environment/common/Material.o \
    $O/inet/environment/common/MaterialRegistry.o \
    $O/inet/environment/common/PhysicalEnvironment.o \
    $O/inet/environment/common/PhysicalObject.o \
    $O/inet/environment/ground/FlatGround.o \
    $O/inet/environment/objectcache/BVHObjectCache.o \
    $O/inet/environment/objectcache/GridObjectCache.o \
    $O/inet/linklayer/base/MACBase.o \
    $O/inet/linklayer/base/MACProtocolBase.o \
    $O/inet/linklayer/bmac/BMacLayer.o \
    $O/inet/linklayer/common/ExampleQoSClassifier.o \
    $O/inet/linklayer/common/MACAddress.o \
    $O/inet/linklayer/common/MACAddressType.o \
    $O/inet/linklayer/common/RandomQoSClassifier.o \
    $O/inet/linklayer/common/TxNotifDetails.o \
    $O/inet/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/inet/linklayer/configurator/L2NetworkConfigurator.o \
    $O/inet/linklayer/configurator/L2NodeConfigurator.o \
    $O/inet/linklayer/csma/CSMA.o \
    $O/inet/linklayer/csmaca/CsmaCaMac.o \
    $O/inet/linklayer/ethernet/EtherBus.o \
    $O/inet/linklayer/ethernet/EtherEncap.o \
    $O/inet/linklayer/ethernet/EtherFrame.o \
    $O/inet/linklayer/ethernet/EtherFrameClassifier.o \
    $O/inet/linklayer/ethernet/EtherHub.o \
    $O/inet/linklayer/ethernet/EtherLLC.o \
    $O/inet/linklayer/ethernet/EtherMAC.o \
    $O/inet/linklayer/ethernet/EtherMACBase.o \
    $O/inet/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/inet/linklayer/ethernet/switch/MACAddressTable.o \
    $O/inet/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/inet/linklayer/ideal/IdealMac.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/inet/linklayer/ieee80211/mac/Rx.o \
    $O/inet/linklayer/ieee80211/mac/Tx.o \
    $O/inet/linklayer/ieee80211/mac/aggregation/BasicMsduAggregationPolicy.o \
    $O/inet/linklayer/ieee80211/mac/aggregation/MsduAggregation.o \
    $O/inet/linklayer/ieee80211/mac/aggregation/MsduDeaggregation.o \
    $O/inet/linklayer/ieee80211/mac/blockack/BlockAckRecord.o \
    $O/inet/linklayer/ieee80211/mac/blockack/OriginatorBlockAckAgreementHandler.o \
    $O/inet/linklayer/ieee80211/mac/blockack/OriginatorBlockAckAgreementPolicy.o \
    $O/inet/linklayer/ieee80211/mac/blockack/OriginatorBlockAckProcedure.o \
    $O/inet/linklayer/ieee80211/mac/blockack/RecipientBlockAckAgreement.o \
    $O/inet/linklayer/ieee80211/mac/blockack/RecipientBlockAckAgreementHandler.o \
    $O/inet/linklayer/ieee80211/mac/blockack/RecipientBlockAckAgreementPolicy.o \
    $O/inet/linklayer/ieee80211/mac/blockack/RecipientBlockAckProcedure.o \
    $O/inet/linklayer/ieee80211/mac/blockackreordering/BlockAckReordering.o \
    $O/inet/linklayer/ieee80211/mac/blockackreordering/ReceiveBuffer.o \
    $O/inet/linklayer/ieee80211/mac/channelaccess/Dcaf.o \
    $O/inet/linklayer/ieee80211/mac/channelaccess/Edca.o \
    $O/inet/linklayer/ieee80211/mac/channelaccess/Edcaf.o \
    $O/inet/linklayer/ieee80211/mac/channelaccess/Hcca.o \
    $O/inet/linklayer/ieee80211/mac/common/ModeSetListener.o \
    $O/inet/linklayer/ieee80211/mac/common/SequenceControlField.o \
    $O/inet/linklayer/ieee80211/mac/contention/Contention.o \
    $O/inet/linklayer/ieee80211/mac/contention/EdcaCollisionController.o \
    $O/inet/linklayer/ieee80211/mac/coordinationfunction/Dcf.o \
    $O/inet/linklayer/ieee80211/mac/coordinationfunction/Hcf.o \
    $O/inet/linklayer/ieee80211/mac/coordinationfunction/Mcf.o \
    $O/inet/linklayer/ieee80211/mac/coordinationfunction/Pcf.o \
    $O/inet/linklayer/ieee80211/mac/duplicateremoval/LegacyDuplicateRemoval.o \
    $O/inet/linklayer/ieee80211/mac/duplicateremoval/QosDuplicateRemoval.o \
    $O/inet/linklayer/ieee80211/mac/fragmentation/BasicFragmentationPolicy.o \
    $O/inet/linklayer/ieee80211/mac/fragmentation/BasicReassembly.o \
    $O/inet/linklayer/ieee80211/mac/fragmentation/Defragmentation.o \
    $O/inet/linklayer/ieee80211/mac/fragmentation/Fragmentation.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/DcfFs.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/FrameSequenceContext.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/FrameSequenceHandler.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/GenericFrameSequences.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/HcfFs.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/HtTxOpFs.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/McfFs.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/PcfFs.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/PrimitiveFrameSequences.o \
    $O/inet/linklayer/ieee80211/mac/framesequence/TxOpFs.o \
    $O/inet/linklayer/ieee80211/mac/lifetime/DcfReceiveLifetimeHandler.o \
    $O/inet/linklayer/ieee80211/mac/lifetime/DcfTransmitLifetimeHandler.o \
    $O/inet/linklayer/ieee80211/mac/lifetime/EdcaTransmitLifetimeHandler.o \
    $O/inet/linklayer/ieee80211/mac/originator/AckHandler.o \
    $O/inet/linklayer/ieee80211/mac/originator/NonQoSRecoveryProcedure.o \
    $O/inet/linklayer/ieee80211/mac/originator/OriginatorAckPolicy.o \
    $O/inet/linklayer/ieee80211/mac/originator/OriginatorMacDataService.o \
    $O/inet/linklayer/ieee80211/mac/originator/OriginatorQoSAckPolicy.o \
    $O/inet/linklayer/ieee80211/mac/originator/OriginatorQoSMacDataService.o \
    $O/inet/linklayer/ieee80211/mac/originator/QoSAckHandler.o \
    $O/inet/linklayer/ieee80211/mac/originator/QoSRecoveryProcedure.o \
    $O/inet/linklayer/ieee80211/mac/originator/QoSRtsPolicy.o \
    $O/inet/linklayer/ieee80211/mac/originator/RtsPolicy.o \
    $O/inet/linklayer/ieee80211/mac/originator/RtsProcedure.o \
    $O/inet/linklayer/ieee80211/mac/originator/TxopProcedure.o \
    $O/inet/linklayer/ieee80211/mac/protectionmechanism/OriginatorProtectionMechanism.o \
    $O/inet/linklayer/ieee80211/mac/protectionmechanism/SingleProtectionMechanism.o \
    $O/inet/linklayer/ieee80211/mac/queue/Ieee80211Queue.o \
    $O/inet/linklayer/ieee80211/mac/queue/InProgressFrames.o \
    $O/inet/linklayer/ieee80211/mac/ratecontrol/AARFRateControl.o \
    $O/inet/linklayer/ieee80211/mac/ratecontrol/OnoeRateControl.o \
    $O/inet/linklayer/ieee80211/mac/ratecontrol/RateControlBase.o \
    $O/inet/linklayer/ieee80211/mac/rateselection/QoSRateSelection.o \
    $O/inet/linklayer/ieee80211/mac/rateselection/RateSelection.o \
    $O/inet/linklayer/ieee80211/mac/recipient/CtsPolicy.o \
    $O/inet/linklayer/ieee80211/mac/recipient/CtsProcedure.o \
    $O/inet/linklayer/ieee80211/mac/recipient/QoSCtsPolicy.o \
    $O/inet/linklayer/ieee80211/mac/recipient/RecipientAckPolicy.o \
    $O/inet/linklayer/ieee80211/mac/recipient/RecipientAckProcedure.o \
    $O/inet/linklayer/ieee80211/mac/recipient/RecipientMacDataService.o \
    $O/inet/linklayer/ieee80211/mac/recipient/RecipientQoSAckPolicy.o \
    $O/inet/linklayer/ieee80211/mac/recipient/RecipientQoSMacDataService.o \
    $O/inet/linklayer/ieee80211/mac/sequencenumberassignment/LegacySequenceNumberAssigment.o \
    $O/inet/linklayer/ieee80211/mac/sequencenumberassignment/NonQoSSequenceNumberAssignment.o \
    $O/inet/linklayer/ieee80211/mac/sequencenumberassignment/QoSSequenceNumberAssignment.o \
    $O/inet/linklayer/ieee80211/mac/statistics/BasicStatistics.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/inet/linklayer/ieee8021d/common/STPBase.o \
    $O/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/inet/linklayer/ieee8021d/rstp/RSTP.o \
    $O/inet/linklayer/ieee8021d/stp/STP.o \
    $O/inet/linklayer/ieee8021d/tester/STPTester.o \
    $O/inet/linklayer/lmac/LMacLayer.o \
    $O/inet/linklayer/loopback/Loopback.o \
    $O/inet/linklayer/ppp/PPP.o \
    $O/inet/linklayer/tun/TunInterface.o \
    $O/inet/linklayer/xmac/XMacLayer.o \
    $O/inet/mobility/base/LinearRotatingMobilityBase.o \
    $O/inet/mobility/base/LineSegmentsMobilityBase.o \
    $O/inet/mobility/base/MobilityBase.o \
    $O/inet/mobility/base/MovingMobilityBase.o \
    $O/inet/mobility/base/RotatingMobilityBase.o \
    $O/inet/mobility/contract/IMobility.o \
    $O/inet/mobility/group/MoBANCoordinator.o \
    $O/inet/mobility/group/MoBANLocal.o \
    $O/inet/mobility/group/Posture.o \
    $O/inet/mobility/group/PostureTransition.o \
    $O/inet/mobility/single/ANSimMobility.o \
    $O/inet/mobility/single/BonnMotionFileCache.o \
    $O/inet/mobility/single/BonnMotionMobility.o \
    $O/inet/mobility/single/ChiangMobility.o \
    $O/inet/mobility/single/CircleMobility.o \
    $O/inet/mobility/single/ConstSpeedMobility.o \
    $O/inet/mobility/single/GaussMarkovMobility.o \
    $O/inet/mobility/single/LinearMobility.o \
    $O/inet/mobility/single/LinearNodeDistributionMobility.o \
    $O/inet/mobility/single/MassMobility.o \
    $O/inet/mobility/single/Ns2MotionMobility.o \
    $O/inet/mobility/single/RandomWPMobility.o \
    $O/inet/mobility/single/RectangleMobility.o \
    $O/inet/mobility/single/TractorMobility.o \
    $O/inet/mobility/single/TurtleMobility.o \
    $O/inet/mobility/single/VehicleMobility.o \
    $O/inet/mobility/static/StaticConcentricMobility.o \
    $O/inet/mobility/static/StaticGridMobility.o \
    $O/inet/mobility/static/StationaryMobility.o \
    $O/inet/networklayer/arp/generic/GenericARP.o \
    $O/inet/networklayer/arp/ipv4/ARP.o \
    $O/inet/networklayer/arp/ipv4/GlobalARP.o \
    $O/inet/networklayer/base/NetworkProtocolBase.o \
    $O/inet/networklayer/common/EchoProtocol.o \
    $O/inet/networklayer/common/InterfaceEntry.o \
    $O/inet/networklayer/common/InterfaceMatcher.o \
    $O/inet/networklayer/common/InterfaceTable.o \
    $O/inet/networklayer/common/IPSocket.o \
    $O/inet/networklayer/common/L3Address.o \
    $O/inet/networklayer/common/L3AddressResolver.o \
    $O/inet/networklayer/common/ModuleIdAddress.o \
    $O/inet/networklayer/common/ModuleIdAddressType.o \
    $O/inet/networklayer/common/ModulePathAddress.o \
    $O/inet/networklayer/common/ModulePathAddressType.o \
    $O/inet/networklayer/common/NetfilterInfoHook.o \
    $O/inet/networklayer/configurator/base/NetworkConfiguratorBase.o \
    $O/inet/networklayer/configurator/generic/GenericNetworkConfigurator.o \
    $O/inet/networklayer/configurator/ipv4/FlatNetworkConfigurator.o \
    $O/inet/networklayer/configurator/ipv4/HostAutoConfigurator.o \
    $O/inet/networklayer/configurator/ipv4/IPv4NetworkConfigurator.o \
    $O/inet/networklayer/configurator/ipv4/IPv4NodeConfigurator.o \
    $O/inet/networklayer/configurator/ipv6/FlatNetworkConfigurator6.o \
    $O/inet/networklayer/contract/IARP.o \
    $O/inet/networklayer/contract/INetworkDatagram.o \
    $O/inet/networklayer/contract/IRoute.o \
    $O/inet/networklayer/contract/ipv4/IPv4Address.o \
    $O/inet/networklayer/contract/ipv4/IPv4AddressType.o \
    $O/inet/networklayer/contract/ipv4/IPv4ControlInfo.o \
    $O/inet/networklayer/contract/ipv6/IPv6Address.o \
    $O/inet/networklayer/contract/ipv6/IPv6AddressType.o \
    $O/inet/networklayer/contract/ipv6/IPv6ControlInfo.o \
    $O/inet/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/inet/networklayer/diffserv/DiffservUtil.o \
    $O/inet/networklayer/diffserv/DSCPMarker.o \
    $O/inet/networklayer/diffserv/MultiFieldClassifier.o \
    $O/inet/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/inet/networklayer/diffserv/TokenBucketMeter.o \
    $O/inet/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/inet/networklayer/flood/Flood.o \
    $O/inet/networklayer/generic/GenericNetworkProtocol.o \
    $O/inet/networklayer/generic/GenericNetworkProtocolInterfaceData.o \
    $O/inet/networklayer/generic/GenericRoute.o \
    $O/inet/networklayer/generic/GenericRoutingTable.o \
    $O/inet/networklayer/icmpv6/ICMPv6.o \
    $O/inet/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/inet/networklayer/internetcloud/CloudDelayerBase.o \
    $O/inet/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/inet/networklayer/ipv4/ErrorHandling.o \
    $O/inet/networklayer/ipv4/ICMP.o \
    $O/inet/networklayer/ipv4/IGMPv2.o \
    $O/inet/networklayer/ipv4/IGMPv3.o \
    $O/inet/networklayer/ipv4/IPv4.o \
    $O/inet/networklayer/ipv4/IPv4Datagram.o \
    $O/inet/networklayer/ipv4/IPv4FragBuf.o \
    $O/inet/networklayer/ipv4/IPv4InterfaceData.o \
    $O/inet/networklayer/ipv4/IPv4Route.o \
    $O/inet/networklayer/ipv4/IPv4RoutingTable.o \
    $O/inet/networklayer/ipv4/NetworkInfo.o \
    $O/inet/networklayer/ipv4/RoutingTableParser.o \
    $O/inet/networklayer/ipv4/RoutingTableRecorder.o \
    $O/inet/networklayer/ipv6/IPv6.o \
    $O/inet/networklayer/ipv6/IPv6Datagram.o \
    $O/inet/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/inet/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/inet/networklayer/ipv6/IPv6FragBuf.o \
    $O/inet/networklayer/ipv6/IPv6InterfaceData.o \
    $O/inet/networklayer/ipv6/IPv6Route.o \
    $O/inet/networklayer/ipv6/IPv6RoutingTable.o \
    $O/inet/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/inet/networklayer/ldp/LDP.o \
    $O/inet/networklayer/mpls/LIBTable.o \
    $O/inet/networklayer/mpls/MPLS.o \
    $O/inet/networklayer/mpls/MPLSPacket.o \
    $O/inet/networklayer/multi/MultiNetworkLayerLowerMultiplexer.o \
    $O/inet/networklayer/multi/MultiNetworkLayerUpperMultiplexer.o \
    $O/inet/networklayer/multi/NetworkDatagramMultiplexer.o \
    $O/inet/networklayer/probabilistic/AdaptiveProbabilisticBroadcast.o \
    $O/inet/networklayer/probabilistic/ProbabilisticBroadcast.o \
    $O/inet/networklayer/rsvp_te/RSVP.o \
    $O/inet/networklayer/rsvp_te/SimpleClassifier.o \
    $O/inet/networklayer/rsvp_te/Utils.o \
    $O/inet/networklayer/ted/LinkStateRouting.o \
    $O/inet/networklayer/ted/TED.o \
    $O/inet/networklayer/wiseroute/WiseRoute.o \
    $O/inet/networklayer/xmipv6/BindingCache.o \
    $O/inet/networklayer/xmipv6/BindingUpdateList.o \
    $O/inet/networklayer/xmipv6/MobilityHeader.o \
    $O/inet/networklayer/xmipv6/xMIPv6.o \
    $O/inet/physicallayer/analogmodel/bitlevel/DimensionalSignalAnalogModel.o \
    $O/inet/physicallayer/analogmodel/bitlevel/LayeredDimensionalAnalogModel.o \
    $O/inet/physicallayer/analogmodel/bitlevel/LayeredScalarAnalogModel.o \
    $O/inet/physicallayer/analogmodel/bitlevel/ScalarSignalAnalogModel.o \
    $O/inet/physicallayer/analogmodel/bitlevel/SignalAnalogModel.o \
    $O/inet/physicallayer/analogmodel/packetlevel/DimensionalAnalogModel.o \
    $O/inet/physicallayer/analogmodel/packetlevel/DimensionalNoise.o \
    $O/inet/physicallayer/analogmodel/packetlevel/DimensionalReception.o \
    $O/inet/physicallayer/analogmodel/packetlevel/DimensionalSNIR.o \
    $O/inet/physicallayer/analogmodel/packetlevel/DimensionalTransmission.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarAnalogModel.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarNoise.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarReception.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarSNIR.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarTransmission.o \
    $O/inet/physicallayer/antenna/ConstantGainAntenna.o \
    $O/inet/physicallayer/antenna/CosineAntenna.o \
    $O/inet/physicallayer/antenna/DipoleAntenna.o \
    $O/inet/physicallayer/antenna/InterpolatingAntenna.o \
    $O/inet/physicallayer/antenna/IsotropicAntenna.o \
    $O/inet/physicallayer/antenna/ParabolicAntenna.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKCode.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKDecoder.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKDemodulator.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKEncoder.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKLayeredReceiver.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKLayeredTransmitter.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKModulator.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKPhyFrameSerializer.o \
    $O/inet/physicallayer/apskradio/bitlevel/errormodel/APSKLayeredErrorModel.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKDimensionalReceiver.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKDimensionalTransmitter.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKRadio.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKScalarReceiver.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKScalarTransmission.o \
    $O/inet/physicallayer/apskradio/packetlevel/APSKScalarTransmitter.o \
    $O/inet/physicallayer/apskradio/packetlevel/errormodel/APSKErrorModel.o \
    $O/inet/physicallayer/backgroundnoise/IsotropicDimensionalBackgroundNoise.o \
    $O/inet/physicallayer/backgroundnoise/IsotropicScalarBackgroundNoise.o \
    $O/inet/physicallayer/base/bitlevel/LayeredErrorModelBase.o \
    $O/inet/physicallayer/base/packetlevel/AnalogModelBase.o \
    $O/inet/physicallayer/base/packetlevel/AntennaBase.o \
    $O/inet/physicallayer/base/packetlevel/APSKModulationBase.o \
    $O/inet/physicallayer/base/packetlevel/CommunicationCacheBase.o \
    $O/inet/physicallayer/base/packetlevel/DimensionalAnalogModelBase.o \
    $O/inet/physicallayer/base/packetlevel/DimensionalTransmitterBase.o \
    $O/inet/physicallayer/base/packetlevel/DPSKModulationBase.o \
    $O/inet/physicallayer/base/packetlevel/ErrorModelBase.o \
    $O/inet/physicallayer/base/packetlevel/FlatRadioBase.o \
    $O/inet/physicallayer/base/packetlevel/FlatReceiverBase.o \
    $O/inet/physicallayer/base/packetlevel/FlatReceptionBase.o \
    $O/inet/physicallayer/base/packetlevel/FlatTransmissionBase.o \
    $O/inet/physicallayer/base/packetlevel/FlatTransmitterBase.o \
    $O/inet/physicallayer/base/packetlevel/GFSKModulationBase.o \
    $O/inet/physicallayer/base/packetlevel/ListeningBase.o \
    $O/inet/physicallayer/base/packetlevel/MQAMModulationBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandNoiseBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandRadioBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandReceiverBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandReceptionBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandTransmissionBase.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandTransmitterBase.o \
    $O/inet/physicallayer/base/packetlevel/NoiseBase.o \
    $O/inet/physicallayer/base/packetlevel/PathLossBase.o \
    $O/inet/physicallayer/base/packetlevel/PhysicalLayerBase.o \
    $O/inet/physicallayer/base/packetlevel/PPMModulationBase.o \
    $O/inet/physicallayer/base/packetlevel/PropagationBase.o \
    $O/inet/physicallayer/base/packetlevel/ReceiverBase.o \
    $O/inet/physicallayer/base/packetlevel/ReceptionBase.o \
    $O/inet/physicallayer/base/packetlevel/ScalarAnalogModelBase.o \
    $O/inet/physicallayer/base/packetlevel/SNIRBase.o \
    $O/inet/physicallayer/base/packetlevel/SNIRReceiverBase.o \
    $O/inet/physicallayer/base/packetlevel/TracingObstacleLossBase.o \
    $O/inet/physicallayer/base/packetlevel/TransmissionBase.o \
    $O/inet/physicallayer/base/packetlevel/TransmitterBase.o \
    $O/inet/physicallayer/common/bitlevel/AdditiveScrambler.o \
    $O/inet/physicallayer/common/bitlevel/AdditiveScramblerModule.o \
    $O/inet/physicallayer/common/bitlevel/AdditiveScrambling.o \
    $O/inet/physicallayer/common/bitlevel/AnalogDigitalConverter.o \
    $O/inet/physicallayer/common/bitlevel/ConvolutionalCode.o \
    $O/inet/physicallayer/common/bitlevel/ConvolutionalCoder.o \
    $O/inet/physicallayer/common/bitlevel/ConvolutionalCoderModule.o \
    $O/inet/physicallayer/common/bitlevel/DigitalAnalogConverter.o \
    $O/inet/physicallayer/common/bitlevel/LayeredReception.o \
    $O/inet/physicallayer/common/bitlevel/LayeredReceptionResult.o \
    $O/inet/physicallayer/common/bitlevel/LayeredTransmission.o \
    $O/inet/physicallayer/common/bitlevel/PulseFilter.o \
    $O/inet/physicallayer/common/bitlevel/PulseShaper.o \
    $O/inet/physicallayer/common/bitlevel/SignalBitModel.o \
    $O/inet/physicallayer/common/bitlevel/SignalPacketModel.o \
    $O/inet/physicallayer/common/bitlevel/SignalSampleModel.o \
    $O/inet/physicallayer/common/bitlevel/SignalSymbolModel.o \
    $O/inet/physicallayer/common/packetlevel/Arrival.o \
    $O/inet/physicallayer/common/packetlevel/BandListening.o \
    $O/inet/physicallayer/common/packetlevel/CommunicationLog.o \
    $O/inet/physicallayer/common/packetlevel/Interference.o \
    $O/inet/physicallayer/common/packetlevel/ListeningDecision.o \
    $O/inet/physicallayer/common/packetlevel/MediumLimitCache.o \
    $O/inet/physicallayer/common/packetlevel/Radio.o \
    $O/inet/physicallayer/common/packetlevel/RadioFrame.o \
    $O/inet/physicallayer/common/packetlevel/RadioMedium.o \
    $O/inet/physicallayer/common/packetlevel/ReceptionDecision.o \
    $O/inet/physicallayer/common/packetlevel/ReceptionResult.o \
    $O/inet/physicallayer/communicationcache/MapCommunicationCache.o \
    $O/inet/physicallayer/communicationcache/ReferenceCommunicationCache.o \
    $O/inet/physicallayer/communicationcache/VectorCommunicationCache.o \
    $O/inet/physicallayer/contract/packetlevel/IRadio.o \
    $O/inet/physicallayer/contract/packetlevel/IRadioMedium.o \
    $O/inet/physicallayer/contract/packetlevel/IRadioSignal.o \
    $O/inet/physicallayer/contract/packetlevel/ITracingObstacleLoss.o \
    $O/inet/physicallayer/contract/packetlevel/ITransmission.o \
    $O/inet/physicallayer/energyconsumer/StateBasedCcEnergyConsumer.o \
    $O/inet/physicallayer/energyconsumer/StateBasedEpEnergyConsumer.o \
    $O/inet/physicallayer/errormodel/bitlevel/StochasticLayeredErrorModel.o \
    $O/inet/physicallayer/errormodel/packetlevel/StochasticErrorModel.o \
    $O/inet/physicallayer/idealradio/IdealAnalogModel.o \
    $O/inet/physicallayer/idealradio/IdealListening.o \
    $O/inet/physicallayer/idealradio/IdealNoise.o \
    $O/inet/physicallayer/idealradio/IdealReceiver.o \
    $O/inet/physicallayer/idealradio/IdealReception.o \
    $O/inet/physicallayer/idealradio/IdealSNIR.o \
    $O/inet/physicallayer/idealradio/IdealTransmission.o \
    $O/inet/physicallayer/idealradio/IdealTransmitter.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211ConvolutionalCode.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211HTInterleaving.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211LayeredOFDMReceiver.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211LayeredOFDMTransmitter.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMDecoder.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMDecoderModule.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMDemodulator.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMDemodulatorModule.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMEncoder.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMEncoderModule.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaver.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaverModule.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaving.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMModulator.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMModulatorModule.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMSymbol.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMSymbolModel.o \
    $O/inet/physicallayer/ieee80211/bitlevel/errormodel/Ieee80211OFDMErrorModel.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211Band.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211Channel.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211DSSSMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211DSSSOFDMMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211ERPOFDMMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211FHSSMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211HRDSSSMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211HTCode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211HTMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211IRMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211ModeBase.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211ModeSet.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211OFDMCode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211OFDMMode.o \
    $O/inet/physicallayer/ieee80211/mode/Ieee80211OFDMModulation.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211DimensionalReceiver.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211DimensionalTransmission.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211DimensionalTransmitter.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211IdealReceiver.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211IdealTransmission.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211IdealTransmitter.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211Radio.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211ReceiverBase.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211ScalarReceiver.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211ScalarTransmission.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211ScalarTransmitter.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211TransmissionBase.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211TransmitterBase.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/BerParseFile.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/dsss-error-rate-model.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/Ieee80211BerTableErrorModel.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/Ieee80211ErrorModelBase.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/Ieee80211NistErrorModel.o \
    $O/inet/physicallayer/ieee80211/packetlevel/errormodel/Ieee80211YansErrorModel.o \
    $O/inet/physicallayer/ieee802154/bitlevel/Ieee802154UWBIRMode.o \
    $O/inet/physicallayer/ieee802154/bitlevel/Ieee802154UWBIRReceiver.o \
    $O/inet/physicallayer/ieee802154/bitlevel/Ieee802154UWBIRTransmitter.o \
    $O/inet/physicallayer/ieee802154/packetlevel/Ieee802154NarrowbandScalarReceiver.o \
    $O/inet/physicallayer/ieee802154/packetlevel/Ieee802154NarrowbandScalarTransmitter.o \
    $O/inet/physicallayer/modulation/16PPMModulation.o \
    $O/inet/physicallayer/modulation/2GFSKModulation.o \
    $O/inet/physicallayer/modulation/4GFSKModulation.o \
    $O/inet/physicallayer/modulation/4PPMModulation.o \
    $O/inet/physicallayer/modulation/BPSKModulation.o \
    $O/inet/physicallayer/modulation/DBPSKModulation.o \
    $O/inet/physicallayer/modulation/DQPSKModulation.o \
    $O/inet/physicallayer/modulation/DSSSOQPSK16Modulation.o \
    $O/inet/physicallayer/modulation/MASKModulation.o \
    $O/inet/physicallayer/modulation/MFSKModulation.o \
    $O/inet/physicallayer/modulation/MPSKModulation.o \
    $O/inet/physicallayer/modulation/MQAMModulation.o \
    $O/inet/physicallayer/modulation/QAM16Modulation.o \
    $O/inet/physicallayer/modulation/QAM256Modulation.o \
    $O/inet/physicallayer/modulation/QAM64Modulation.o \
    $O/inet/physicallayer/modulation/QBPSKModulation.o \
    $O/inet/physicallayer/modulation/QPSKModulation.o \
    $O/inet/physicallayer/neighborcache/GridNeighborCache.o \
    $O/inet/physicallayer/neighborcache/NeighborListNeighborCache.o \
    $O/inet/physicallayer/neighborcache/QuadTreeNeighborCache.o \
    $O/inet/physicallayer/obstacleloss/DielectricObstacleLoss.o \
    $O/inet/physicallayer/obstacleloss/IdealObstacleLoss.o \
    $O/inet/physicallayer/pathloss/BreakpointPathLoss.o \
    $O/inet/physicallayer/pathloss/FreeSpacePathLoss.o \
    $O/inet/physicallayer/pathloss/LogNormalShadowing.o \
    $O/inet/physicallayer/pathloss/NakagamiFading.o \
    $O/inet/physicallayer/pathloss/RayleighFading.o \
    $O/inet/physicallayer/pathloss/RicianFading.o \
    $O/inet/physicallayer/pathloss/SUIPathLoss.o \
    $O/inet/physicallayer/pathloss/TwoRayGroundReflection.o \
    $O/inet/physicallayer/pathloss/TwoRayInterference.o \
    $O/inet/physicallayer/pathloss/UWBIRStochasticPathLoss.o \
    $O/inet/physicallayer/propagation/ConstantSpeedPropagation.o \
    $O/inet/physicallayer/propagation/ConstantTimePropagation.o \
    $O/inet/power/base/CcEnergySinkBase.o \
    $O/inet/power/base/CcEnergySourceBase.o \
    $O/inet/power/base/CcEnergyStorageBase.o \
    $O/inet/power/base/EnergySinkBase.o \
    $O/inet/power/base/EnergySourceBase.o \
    $O/inet/power/base/EnergyStorageBase.o \
    $O/inet/power/base/EpEnergySinkBase.o \
    $O/inet/power/base/EpEnergySourceBase.o \
    $O/inet/power/base/EpEnergyStorageBase.o \
    $O/inet/power/consumer/AlternatingEpEnergyConsumer.o \
    $O/inet/power/contract/ICcEnergyConsumer.o \
    $O/inet/power/contract/ICcEnergyGenerator.o \
    $O/inet/power/contract/ICcEnergySink.o \
    $O/inet/power/contract/ICcEnergySource.o \
    $O/inet/power/contract/ICcEnergyStorage.o \
    $O/inet/power/contract/IEpEnergyConsumer.o \
    $O/inet/power/contract/IEpEnergyGenerator.o \
    $O/inet/power/contract/IEpEnergySink.o \
    $O/inet/power/contract/IEpEnergySource.o \
    $O/inet/power/contract/IEpEnergyStorage.o \
    $O/inet/power/generator/AlternatingEpEnergyGenerator.o \
    $O/inet/power/management/SimpleEpEnergyManagement.o \
    $O/inet/power/storage/IdealEpEnergyStorage.o \
    $O/inet/power/storage/SimpleCcBattery.o \
    $O/inet/power/storage/SimpleEpEnergyStorage.o \
    $O/inet/routing/aodv/AODVRouteData.o \
    $O/inet/routing/aodv/AODVRouting.o \
    $O/inet/routing/bgpv4/BGPFSM.o \
    $O/inet/routing/bgpv4/BGPRouting.o \
    $O/inet/routing/bgpv4/BGPSession.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPUpdate.o \
    $O/inet/routing/dymo/DYMO.o \
    $O/inet/routing/dymo/DYMORouteData.o \
    $O/inet/routing/gpsr/GPSR.o \
    $O/inet/routing/gpsr/PositionTable.o \
    $O/inet/routing/ospfv2/OSPFConfigReader.o \
    $O/inet/routing/ospfv2/OSPFRouting.o \
    $O/inet/routing/ospfv2/interface/OSPFInterface.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceState.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/inet/routing/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/inet/routing/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/inet/routing/ospfv2/messagehandler/HelloHandler.o \
    $O/inet/routing/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/inet/routing/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/inet/routing/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/inet/routing/ospfv2/messagehandler/MessageHandler.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighbor.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborState.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/inet/routing/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/inet/routing/ospfv2/router/ASExternalLSA.o \
    $O/inet/routing/ospfv2/router/LSA.o \
    $O/inet/routing/ospfv2/router/NetworkLSA.o \
    $O/inet/routing/ospfv2/router/OSPFArea.o \
    $O/inet/routing/ospfv2/router/OSPFRouter.o \
    $O/inet/routing/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/inet/routing/ospfv2/router/RouterLSA.o \
    $O/inet/routing/ospfv2/router/SummaryLSA.o \
    $O/inet/routing/pim/PIMPacket.o \
    $O/inet/routing/pim/PIMSplitter.o \
    $O/inet/routing/pim/modes/PIMBase.o \
    $O/inet/routing/pim/modes/PIMDM.o \
    $O/inet/routing/pim/modes/PIMSM.o \
    $O/inet/routing/pim/tables/PIMInterfaceTable.o \
    $O/inet/routing/pim/tables/PIMNeighborTable.o \
    $O/inet/routing/rip/RIPRouting.o \
    $O/inet/transportlayer/base/TransportProtocolBase.o \
    $O/inet/transportlayer/contract/sctp/SCTPSocket.o \
    $O/inet/transportlayer/contract/sctp/SCTPSocketMap.o \
    $O/inet/transportlayer/contract/tcp/TCPSocket.o \
    $O/inet/transportlayer/contract/tcp/TCPSocketMap.o \
    $O/inet/transportlayer/contract/udp/UDPSocket.o \
    $O/inet/transportlayer/rtp/reports.o \
    $O/inet/transportlayer/rtp/RTCP.o \
    $O/inet/transportlayer/rtp/RTCPPacket.o \
    $O/inet/transportlayer/rtp/RTP.o \
    $O/inet/transportlayer/rtp/RTPInnerPacket.o \
    $O/inet/transportlayer/rtp/RTPPacket.o \
    $O/inet/transportlayer/rtp/RTPParticipantInfo.o \
    $O/inet/transportlayer/rtp/RTPPayloadReceiver.o \
    $O/inet/transportlayer/rtp/RTPPayloadSender.o \
    $O/inet/transportlayer/rtp/RTPProfile.o \
    $O/inet/transportlayer/rtp/RTPReceiverInfo.o \
    $O/inet/transportlayer/rtp/RTPSenderInfo.o \
    $O/inet/transportlayer/rtp/sdes.o \
    $O/inet/transportlayer/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/inet/transportlayer/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/inet/transportlayer/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/inet/transportlayer/sctp/SCTP.o \
    $O/inet/transportlayer/sctp/SCTPAlg.o \
    $O/inet/transportlayer/sctp/SCTPAssociationAddIP.o \
    $O/inet/transportlayer/sctp/SCTPAssociationBase.o \
    $O/inet/transportlayer/sctp/SCTPAssociationEventProc.o \
    $O/inet/transportlayer/sctp/SCTPAssociationRcvMessage.o \
    $O/inet/transportlayer/sctp/SCTPAssociationSendAll.o \
    $O/inet/transportlayer/sctp/SCTPAssociationStreamReset.o \
    $O/inet/transportlayer/sctp/SCTPAssociationUtil.o \
    $O/inet/transportlayer/sctp/SCTPCCFunctions.o \
    $O/inet/transportlayer/sctp/SCTPGapList.o \
    $O/inet/transportlayer/sctp/SCTPMessage.o \
    $O/inet/transportlayer/sctp/SCTPNatHook.o \
    $O/inet/transportlayer/sctp/SCTPNatTable.o \
    $O/inet/transportlayer/sctp/SCTPQueue.o \
    $O/inet/transportlayer/sctp/SCTPReceiveStream.o \
    $O/inet/transportlayer/sctp/SCTPSendStream.o \
    $O/inet/transportlayer/sctp/SCTPSSFunctions.o \
    $O/inet/transportlayer/tcp/TCP.o \
    $O/inet/transportlayer/tcp/TCPConnectionBase.o \
    $O/inet/transportlayer/tcp/TCPConnectionEventProc.o \
    $O/inet/transportlayer/tcp/TCPConnectionRcvSegment.o \
    $O/inet/transportlayer/tcp/TCPConnectionSackUtil.o \
    $O/inet/transportlayer/tcp/TCPConnectionUtil.o \
    $O/inet/transportlayer/tcp/TCPSACKRexmitQueue.o \
    $O/inet/transportlayer/tcp/flavours/DumbTCP.o \
    $O/inet/transportlayer/tcp/flavours/TCPBaseAlg.o \
    $O/inet/transportlayer/tcp/flavours/TCPNewReno.o \
    $O/inet/transportlayer/tcp/flavours/TCPNoCongestionControl.o \
    $O/inet/transportlayer/tcp/flavours/TCPReno.o \
    $O/inet/transportlayer/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/inet/transportlayer/tcp/flavours/TCPTahoe.o \
    $O/inet/transportlayer/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/inet/transportlayer/tcp/flavours/TCPVegas.o \
    $O/inet/transportlayer/tcp/flavours/TCPWestwood.o \
    $O/inet/transportlayer/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/inet/transportlayer/tcp/queues/TCPByteStreamSendQueue.o \
    $O/inet/transportlayer/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/inet/transportlayer/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/inet/transportlayer/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/inet/transportlayer/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/inet/transportlayer/tcp_common/TCPSegment.o \
    $O/inet/transportlayer/tcp_common/TCPSpoof.o \
    $O/inet/transportlayer/udp/UDP.o \
    $O/inet/visualizer/base/EnergyStorageVisualizerBase.o \
    $O/inet/visualizer/base/Ieee80211VisualizerBase.o \
    $O/inet/visualizer/base/InfoVisualizerBase.o \
    $O/inet/visualizer/base/InterfaceTableVisualizerBase.o \
    $O/inet/visualizer/base/LinkBreakVisualizerBase.o \
    $O/inet/visualizer/base/LinkCanvasVisualizerBase.o \
    $O/inet/visualizer/base/LinkOsgVisualizerBase.o \
    $O/inet/visualizer/base/LinkVisualizerBase.o \
    $O/inet/visualizer/base/MediumVisualizerBase.o \
    $O/inet/visualizer/base/MobilityVisualizerBase.o \
    $O/inet/visualizer/base/NetworkConnectionVisualizerBase.o \
    $O/inet/visualizer/base/NetworkNodeVisualizerBase.o \
    $O/inet/visualizer/base/PacketDropVisualizerBase.o \
    $O/inet/visualizer/base/PathCanvasVisualizerBase.o \
    $O/inet/visualizer/base/PathOsgVisualizerBase.o \
    $O/inet/visualizer/base/PathVisualizerBase.o \
    $O/inet/visualizer/base/PhysicalEnvironmentVisualizerBase.o \
    $O/inet/visualizer/base/QueueVisualizerBase.o \
    $O/inet/visualizer/base/RadioVisualizerBase.o \
    $O/inet/visualizer/base/RoutingTableVisualizerBase.o \
    $O/inet/visualizer/base/SceneOsgVisualizerBase.o \
    $O/inet/visualizer/base/SceneVisualizerBase.o \
    $O/inet/visualizer/base/StatisticVisualizerBase.o \
    $O/inet/visualizer/base/TracingObstacleLossVisualizerBase.o \
    $O/inet/visualizer/base/TransportConnectionVisualizerBase.o \
    $O/inet/visualizer/base/VisualizerBase.o \
    $O/inet/visualizer/common/InfoCanvasVisualizer.o \
    $O/inet/visualizer/common/InfoOsgVisualizer.o \
    $O/inet/visualizer/common/PacketDropCanvasVisualizer.o \
    $O/inet/visualizer/common/PacketDropOsgVisualizer.o \
    $O/inet/visualizer/common/QueueCanvasVisualizer.o \
    $O/inet/visualizer/common/QueueOsgVisualizer.o \
    $O/inet/visualizer/common/StatisticCanvasVisualizer.o \
    $O/inet/visualizer/common/StatisticOsgVisualizer.o \
    $O/inet/visualizer/environment/PhysicalEnvironmentCanvasVisualizer.o \
    $O/inet/visualizer/environment/PhysicalEnvironmentOsgVisualizer.o \
    $O/inet/visualizer/linklayer/DataLinkCanvasVisualizer.o \
    $O/inet/visualizer/linklayer/DataLinkOsgVisualizer.o \
    $O/inet/visualizer/linklayer/Ieee80211CanvasVisualizer.o \
    $O/inet/visualizer/linklayer/Ieee80211OsgVisualizer.o \
    $O/inet/visualizer/linklayer/InterfaceTableCanvasVisualizer.o \
    $O/inet/visualizer/linklayer/InterfaceTableOsgVisualizer.o \
    $O/inet/visualizer/linklayer/LinkBreakCanvasVisualizer.o \
    $O/inet/visualizer/linklayer/LinkBreakOsgVisualizer.o \
    $O/inet/visualizer/mobility/MobilityCanvasVisualizer.o \
    $O/inet/visualizer/mobility/MobilityOsgVisualizer.o \
    $O/inet/visualizer/networklayer/NetworkRouteCanvasVisualizer.o \
    $O/inet/visualizer/networklayer/NetworkRouteOsgVisualizer.o \
    $O/inet/visualizer/networklayer/RoutingTableCanvasVisualizer.o \
    $O/inet/visualizer/networklayer/RoutingTableOsgVisualizer.o \
    $O/inet/visualizer/physicallayer/MediumCanvasVisualizer.o \
    $O/inet/visualizer/physicallayer/MediumOsgVisualizer.o \
    $O/inet/visualizer/physicallayer/PhysicalLinkCanvasVisualizer.o \
    $O/inet/visualizer/physicallayer/PhysicalLinkOsgVisualizer.o \
    $O/inet/visualizer/physicallayer/RadioCanvasVisualizer.o \
    $O/inet/visualizer/physicallayer/RadioOsgVisualizer.o \
    $O/inet/visualizer/physicallayer/TracingObstacleLossCanvasVisualizer.o \
    $O/inet/visualizer/physicallayer/TracingObstacleLossOsgVisualizer.o \
    $O/inet/visualizer/power/EnergyStorageCanvasVisualizer.o \
    $O/inet/visualizer/power/EnergyStorageOsgVisualizer.o \
    $O/inet/visualizer/scene/NetworkConnectionCanvasVisualizer.o \
    $O/inet/visualizer/scene/NetworkConnectionOsgVisualizer.o \
    $O/inet/visualizer/scene/NetworkNodeCanvasVisualization.o \
    $O/inet/visualizer/scene/NetworkNodeCanvasVisualizer.o \
    $O/inet/visualizer/scene/NetworkNodeOsgVisualization.o \
    $O/inet/visualizer/scene/NetworkNodeOsgVisualizer.o \
    $O/inet/visualizer/scene/SceneCanvasVisualizer.o \
    $O/inet/visualizer/scene/SceneOsgEarthVisualizer.o \
    $O/inet/visualizer/scene/SceneOsgVisualizer.o \
    $O/inet/visualizer/transportlayer/TransportConnectionCanvasVisualizer.o \
    $O/inet/visualizer/transportlayer/TransportConnectionOsgVisualizer.o \
    $O/inet/visualizer/transportlayer/TransportRouteCanvasVisualizer.o \
    $O/inet/visualizer/transportlayer/TransportRouteOsgVisualizer.o \
    $O/inet/visualizer/util/AnimationPosition.o \
    $O/inet/visualizer/util/AnimationSpeedInterpolator.o \
    $O/inet/visualizer/util/ColorSet.o \
    $O/inet/visualizer/util/InterfaceFilter.o \
    $O/inet/visualizer/util/LineManager.o \
    $O/inet/visualizer/util/ModuleFilter.o \
    $O/inet/visualizer/util/NetworkNodeFilter.o \
    $O/inet/visualizer/util/PacketFilter.o \
    $O/inet/visualizer/util/Placement.o \
    $O/inet/visualizer/util/PortFilter.o \
    $O/inet/visualizer/util/QueueFilter.o \
    $O/inet/visualizer/util/StringFormat.o \
    $O/inet/applications/base/ApplicationPacket_m.o \
    $O/inet/applications/dhcp/DHCPMessage_m.o \
    $O/inet/applications/ethernet/EtherApp_m.o \
    $O/inet/applications/httptools/common/HttpEventMessages_m.o \
    $O/inet/applications/httptools/common/HttpMessages_m.o \
    $O/inet/applications/netperfmeter/NetPerfMeter_m.o \
    $O/inet/applications/packetdrill/PacketDrillInfo_m.o \
    $O/inet/applications/pingapp/PingPayload_m.o \
    $O/inet/applications/tcpapp/GenericAppMsg_m.o \
    $O/inet/applications/voip/SimpleVoIPPacket_m.o \
    $O/inet/common/ByteArray_m.o \
    $O/inet/common/RawPacket_m.o \
    $O/inet/common/TLVOption_m.o \
    $O/inet/common/queue/PacketQueue_m.o \
    $O/inet/environment/common/Material_m.o \
    $O/inet/environment/common/PhysicalObject_m.o \
    $O/inet/linklayer/base/MACFrameBase_m.o \
    $O/inet/linklayer/bmac/BMacFrame_m.o \
    $O/inet/linklayer/common/Ieee802Ctrl_m.o \
    $O/inet/linklayer/common/SimpleLinkLayerControlInfo_m.o \
    $O/inet/linklayer/csma/CSMAFrame_m.o \
    $O/inet/linklayer/csmaca/CsmaCaMacFrame_m.o \
    $O/inet/linklayer/ethernet/EtherFrame_m.o \
    $O/inet/linklayer/ideal/IdealMacFrame_m.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/inet/linklayer/lmac/LMacFrame_m.o \
    $O/inet/linklayer/ppp/PPPFrame_m.o \
    $O/inet/linklayer/xmac/XMacFrame_m.o \
    $O/inet/networklayer/arp/ipv4/ARPPacket_m.o \
    $O/inet/networklayer/base/NetworkDatagramBase_m.o \
    $O/inet/networklayer/common/EchoPacket_m.o \
    $O/inet/networklayer/common/InterfaceEntry_m.o \
    $O/inet/networklayer/common/IPProtocolId_m.o \
    $O/inet/networklayer/common/SimpleNetworkProtocolControlInfo_m.o \
    $O/inet/networklayer/contract/NetworkProtocolCommand_m.o \
    $O/inet/networklayer/contract/generic/GenericNetworkProtocolControlInfo_m.o \
    $O/inet/networklayer/contract/ipv4/IPv4ControlInfo_m.o \
    $O/inet/networklayer/contract/ipv6/IPv6ControlInfo_m.o \
    $O/inet/networklayer/diffserv/DSCP_m.o \
    $O/inet/networklayer/flood/FloodDatagram_m.o \
    $O/inet/networklayer/generic/GenericDatagram_m.o \
    $O/inet/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/inet/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/inet/networklayer/ipv4/ICMPMessage_m.o \
    $O/inet/networklayer/ipv4/IGMPMessage_m.o \
    $O/inet/networklayer/ipv4/IPv4Datagram_m.o \
    $O/inet/networklayer/ipv4/IPv4Route_m.o \
    $O/inet/networklayer/ipv6/IPv6Datagram_m.o \
    $O/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/inet/networklayer/ldp/LDPPacket_m.o \
    $O/inet/networklayer/probabilistic/ProbabilisticBroadcastDatagram_m.o \
    $O/inet/networklayer/rsvp_te/IntServ_m.o \
    $O/inet/networklayer/rsvp_te/RSVPHello_m.o \
    $O/inet/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/inet/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/inet/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/inet/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/inet/networklayer/ted/LinkStatePacket_m.o \
    $O/inet/networklayer/ted/TED_m.o \
    $O/inet/networklayer/wiseroute/WiseRouteDatagram_m.o \
    $O/inet/networklayer/xmipv6/MobilityHeader_m.o \
    $O/inet/physicallayer/analogmodel/packetlevel/ScalarTransmission_m.o \
    $O/inet/physicallayer/apskradio/bitlevel/APSKPhyFrame_m.o \
    $O/inet/physicallayer/base/packetlevel/FlatTransmissionBase_m.o \
    $O/inet/physicallayer/base/packetlevel/NarrowbandTransmissionBase_m.o \
    $O/inet/physicallayer/base/packetlevel/TransmissionBase_m.o \
    $O/inet/physicallayer/contract/packetlevel/RadioControlInfo_m.o \
    $O/inet/physicallayer/idealradio/IdealTransmission_m.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMPLCPFrame_m.o \
    $O/inet/physicallayer/ieee80211/bitlevel/Ieee80211PLCPFrame_m.o \
    $O/inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo_m.o \
    $O/inet/routing/aodv/AODVControlPackets_m.o \
    $O/inet/routing/bgpv4/BGPCommon_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/inet/routing/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/inet/routing/dymo/DYMO_m.o \
    $O/inet/routing/gpsr/GPSR_m.o \
    $O/inet/routing/ospfv2/OSPFPacket_m.o \
    $O/inet/routing/pim/PIMPacket_m.o \
    $O/inet/routing/rip/RIPPacket_m.o \
    $O/inet/transportlayer/contract/sctp/SCTPCommand_m.o \
    $O/inet/transportlayer/contract/tcp/TCPCommand_m.o \
    $O/inet/transportlayer/contract/udp/UDPControlInfo_m.o \
    $O/inet/transportlayer/rtp/reports_m.o \
    $O/inet/transportlayer/rtp/RTCPPacket1_m.o \
    $O/inet/transportlayer/rtp/RTCPPacket2_m.o \
    $O/inet/transportlayer/rtp/RTCPPacket3_m.o \
    $O/inet/transportlayer/rtp/RTPInnerPacket_m.o \
    $O/inet/transportlayer/rtp/RTPInterfacePacket_m.o \
    $O/inet/transportlayer/rtp/RTPPacket_m.o \
    $O/inet/transportlayer/rtp/RTPParticipantInfo_m.o \
    $O/inet/transportlayer/rtp/RTPSenderControlMessage_m.o \
    $O/inet/transportlayer/rtp/RTPSenderStatusMessage_m.o \
    $O/inet/transportlayer/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/inet/transportlayer/sctp/SCTPMessage_m.o \
    $O/inet/transportlayer/tcp/TCPConnection_m.o \
    $O/inet/transportlayer/tcp_common/TCPSegment_m.o \
    $O/inet/transportlayer/udp/UDPPacket_m.o

# Message files
MSGFILES = \
    inet/applications/base/ApplicationPacket.msg \
    inet/applications/dhcp/DHCPMessage.msg \
    inet/applications/ethernet/EtherApp.msg \
    inet/applications/httptools/common/HttpEventMessages.msg \
    inet/applications/httptools/common/HttpMessages.msg \
    inet/applications/netperfmeter/NetPerfMeter.msg \
    inet/applications/packetdrill/PacketDrillInfo.msg \
    inet/applications/pingapp/PingPayload.msg \
    inet/applications/tcpapp/GenericAppMsg.msg \
    inet/applications/voip/SimpleVoIPPacket.msg \
    inet/common/ByteArray.msg \
    inet/common/RawPacket.msg \
    inet/common/TLVOption.msg \
    inet/common/queue/PacketQueue.msg \
    inet/environment/common/Material.msg \
    inet/environment/common/PhysicalObject.msg \
    inet/linklayer/base/MACFrameBase.msg \
    inet/linklayer/bmac/BMacFrame.msg \
    inet/linklayer/common/Ieee802Ctrl.msg \
    inet/linklayer/common/SimpleLinkLayerControlInfo.msg \
    inet/linklayer/csma/CSMAFrame.msg \
    inet/linklayer/csmaca/CsmaCaMacFrame.msg \
    inet/linklayer/ethernet/EtherFrame.msg \
    inet/linklayer/ideal/IdealMacFrame.msg \
    inet/linklayer/ieee80211/mac/Ieee80211Frame.msg \
    inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    inet/linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    inet/linklayer/lmac/LMacFrame.msg \
    inet/linklayer/ppp/PPPFrame.msg \
    inet/linklayer/xmac/XMacFrame.msg \
    inet/networklayer/arp/ipv4/ARPPacket.msg \
    inet/networklayer/base/NetworkDatagramBase.msg \
    inet/networklayer/common/EchoPacket.msg \
    inet/networklayer/common/InterfaceEntry.msg \
    inet/networklayer/common/IPProtocolId.msg \
    inet/networklayer/common/SimpleNetworkProtocolControlInfo.msg \
    inet/networklayer/contract/NetworkProtocolCommand.msg \
    inet/networklayer/contract/generic/GenericNetworkProtocolControlInfo.msg \
    inet/networklayer/contract/ipv4/IPv4ControlInfo.msg \
    inet/networklayer/contract/ipv6/IPv6ControlInfo.msg \
    inet/networklayer/diffserv/DSCP.msg \
    inet/networklayer/flood/FloodDatagram.msg \
    inet/networklayer/generic/GenericDatagram.msg \
    inet/networklayer/icmpv6/ICMPv6Message.msg \
    inet/networklayer/icmpv6/IPv6NDMessage.msg \
    inet/networklayer/ipv4/ICMPMessage.msg \
    inet/networklayer/ipv4/IGMPMessage.msg \
    inet/networklayer/ipv4/IPv4Datagram.msg \
    inet/networklayer/ipv4/IPv4Route.msg \
    inet/networklayer/ipv6/IPv6Datagram.msg \
    inet/networklayer/ipv6/IPv6ExtensionHeaders.msg \
    inet/networklayer/ldp/LDPPacket.msg \
    inet/networklayer/probabilistic/ProbabilisticBroadcastDatagram.msg \
    inet/networklayer/rsvp_te/IntServ.msg \
    inet/networklayer/rsvp_te/RSVPHello.msg \
    inet/networklayer/rsvp_te/RSVPPacket.msg \
    inet/networklayer/rsvp_te/RSVPPathMsg.msg \
    inet/networklayer/rsvp_te/RSVPResvMsg.msg \
    inet/networklayer/rsvp_te/SignallingMsg.msg \
    inet/networklayer/ted/LinkStatePacket.msg \
    inet/networklayer/ted/TED.msg \
    inet/networklayer/wiseroute/WiseRouteDatagram.msg \
    inet/networklayer/xmipv6/MobilityHeader.msg \
    inet/physicallayer/analogmodel/packetlevel/ScalarTransmission.msg \
    inet/physicallayer/apskradio/bitlevel/APSKPhyFrame.msg \
    inet/physicallayer/base/packetlevel/FlatTransmissionBase.msg \
    inet/physicallayer/base/packetlevel/NarrowbandTransmissionBase.msg \
    inet/physicallayer/base/packetlevel/TransmissionBase.msg \
    inet/physicallayer/contract/packetlevel/RadioControlInfo.msg \
    inet/physicallayer/idealradio/IdealTransmission.msg \
    inet/physicallayer/ieee80211/bitlevel/Ieee80211OFDMPLCPFrame.msg \
    inet/physicallayer/ieee80211/bitlevel/Ieee80211PLCPFrame.msg \
    inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg \
    inet/routing/aodv/AODVControlPackets.msg \
    inet/routing/bgpv4/BGPCommon.msg \
    inet/routing/bgpv4/BGPMessage/BGPASPathSegment.msg \
    inet/routing/bgpv4/BGPMessage/BGPHeader.msg \
    inet/routing/bgpv4/BGPMessage/BGPKeepAlive.msg \
    inet/routing/bgpv4/BGPMessage/BGPOpen.msg \
    inet/routing/bgpv4/BGPMessage/BGPUpdate.msg \
    inet/routing/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    inet/routing/dymo/DYMO.msg \
    inet/routing/gpsr/GPSR.msg \
    inet/routing/ospfv2/OSPFPacket.msg \
    inet/routing/pim/PIMPacket.msg \
    inet/routing/rip/RIPPacket.msg \
    inet/transportlayer/contract/sctp/SCTPCommand.msg \
    inet/transportlayer/contract/tcp/TCPCommand.msg \
    inet/transportlayer/contract/udp/UDPControlInfo.msg \
    inet/transportlayer/rtp/reports.msg \
    inet/transportlayer/rtp/RTCPPacket1.msg \
    inet/transportlayer/rtp/RTCPPacket2.msg \
    inet/transportlayer/rtp/RTCPPacket3.msg \
    inet/transportlayer/rtp/RTPInnerPacket.msg \
    inet/transportlayer/rtp/RTPInterfacePacket.msg \
    inet/transportlayer/rtp/RTPPacket.msg \
    inet/transportlayer/rtp/RTPParticipantInfo.msg \
    inet/transportlayer/rtp/RTPSenderControlMessage.msg \
    inet/transportlayer/rtp/RTPSenderStatusMessage.msg \
    inet/transportlayer/rtp/profiles/avprofile/RTPMpegPacket.msg \
    inet/transportlayer/sctp/SCTPMessage.msg \
    inet/transportlayer/tcp/TCPConnection.msg \
    inet/transportlayer/tcp_common/TCPSegment.msg \
    inet/transportlayer/udp/UDPPacket.msg

# SM files
SMFILES =

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIBS = -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) $(IMPORT_DEFINES) -DINET_EXPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH) -PINET_API
SMCOPTS =

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
.DEFAULT_GOAL := all-pch

#
# Use the older message compiler. New compiler was introduced in OMNeT++ 5.3
#
MSGC:=$(MSGC) --msg4

ifeq ($(PLATFORM),win32.x86_64)
  #
  # on windows we have to link with the ws2_32 (winsock2) library as it is no longer added
  # to the omnetpp system libraries by default (as of OMNeT++ 5.1)
  #
  LIBS += -lws2_32
  DEFINES += -DINET_EXPORT
  ENABLE_AUTO_IMPORT=-Wl,--enable-auto-import
  LDFLAGS := $(filter-out $(ENABLE_AUTO_IMPORT), $(LDFLAGS))

  # FIX for clang not exporting typinfo and other thunks on Windows
  ifeq ($(CC),clang)
    DEFFILE = $O/typeinfo.def
    LDFLAGS += $(DEFFILE)

$(DEFFILE): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile $(CONFIGFILE)
	@echo Creating .DEF file for $(TARGET) - needed to fix an issue where clang is not exporting typinfo for classes on Windows
	$(Q)echo >.tmp$$$$ $(OBJS) $(EXTRA_OBJS) && $(DLLTOOL) --export-all-symbols --kill-at -z all$$$$.def @.tmp$$$$ && grep -E '( *_ZTI)|( *_ZThn)|EXPORTS' all$$$$.def | sed 's/ @.*//' >$(DEFFILE) && rm .tmp$$$$ all$$$$.def

$O/$(TARGET): $(DEFFILE)

  endif
endif

#
# TCP implementaion using the Network Simulation Cradle (TCP_NSC feature)
#
WITH_TCP_NSC := $(shell (cd .. && ./inet_featuretool -q isenabled TCP_NSC && echo enabled) )
ifeq ($(WITH_TCP_NSC), enabled)
  NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')
  ifneq ($(NSC_VERSION),)
    INCLUDE_PATH += -I../3rdparty/nsc-$(NSC_VERSION)/sim
    LIBS += -Wl,-rpath,$(abspath ../3rdparty/nsc-$(NSC_VERSION))
  else
    $(error Please install NSC or disable 'TCP_NSC' feature)
  endif
endif

#
# TCP implementation using the lwIP stack
#
WITH_TCP_LWIP := $(shell (cd .. && ./inet_featuretool -q isenabled TCP_lwIP && echo enabled) )
ifeq ($(WITH_TCP_LWIP), enabled)
  INCLUDE_PATH += -Iinet/transportlayer/tcp_lwip/lwip/include -Iinet/transportlayer/tcp_lwip/lwip/include/ipv4 -Iinet/transportlayer/tcp_lwip/lwip/include/ipv6
endif

#
# pkg-config:
#
HAVE_PKGCFG := $(shell pkg-config --version 2>/dev/null)
ifeq ($(strip $(HAVE_PKGCFG)),)
  HAVE_PKGCFG := no
else
  HAVE_PKGCFG := yes
  PKGCFG := $(shell which pkg-config)
endif

#
# VoipStream feature:
#
WITH_VOIPSTREAM := $(shell (cd .. && ./inet_featuretool -q isenabled VoIPStream && echo enabled) )
ifeq ($(WITH_VOIPSTREAM), enabled)
  ifeq ($(HAVE_PKGCFG), yes)
    HAVE_FFMPEG := $(shell $(PKGCFG) --exists libavcodec libavformat libavutil && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG), yes)
      LIBS += $(shell $(PKGCFG) --libs libavcodec libavformat libavutil)
      CFLAGS += $(shell $(PKGCFG) --cflags libavcodec libavformat libavutil) -DHAVE_FFMPEG
    endif
    HAVE_FFMPEG_AVRESAMPLE := $(shell $(PKGCFG) --exists libavresample && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG_AVRESAMPLE), yes)
      LIBS += $(shell $(PKGCFG) --libs libavresample)
      CFLAGS += $(shell $(PKGCFG) --cflags libavresample) -DHAVE_FFMPEG_AVRESAMPLE
    endif
  endif
endif

#
# visualization feature requires (optionally) some extra osg and osgEarth libraries
#
WITH_VISUALIZERS := $(shell (cd .. && ./inet_featuretool -q isenabled visualization && echo enabled) )
ifeq ($(WITH_VISUALIZERS), enabled)
  ifeq ($(WITH_OSGEARTH), yes)
      OMNETPP_LIBS += -lOpenThreads -losg -losgText -losgDB -losgEarth -losgEarthUtil
  endif
endif

# uncomment this if you want to run the NS3 vs INET 802.11 cross validation tests in the 'tests/misc/ns3' folder.
# CFLAGS += -DNS3_VALIDATION

# disable anoying "... hides overloaded virtual function" warning
CFLAGS += -Wno-overloaded-virtual

#########################################################################
# precompiled header support for GCC and CLANG

# Set this to "no" if you want to avoid using the precompiled header. The default is "yes".
USE_PRECOMPILED_HEADER ?= yes

# force turning off precompiled headers if ccache is used as it is not compatible with precompiled headers.
ifneq (,$(findstring ccache,$(shell (which $(CC)))))
  USE_PRECOMPILED_HEADER = no
  $(info *** CCACHE detected - precompiled headers disabled)
endif

PRECOMPILED_HEADER=inet/common/precompiled_$(MODE).h

ifeq ($(USE_PRECOMPILED_HEADER),yes)
  ifneq (,$(findstring gcc,$(CC)))
    PRECOMPILED_EXT=gch
  else ifneq (,$(findstring clang,$(CC)))
    PRECOMPILED_EXT=pch
  else
    PRECOMPILED_EXT=
  endif
  CFLAGS += -include $(PRECOMPILED_HEADER)
endif

PRECOMPILED_HEADER_PCH=$(PRECOMPILED_HEADER).$(PRECOMPILED_EXT)
PRECOMPILED_HEADER_D=$(PRECOMPILED_HEADER_PCH:%.$(PRECOMPILED_EXT)=%.d)

# Main target
all-pch: | pch msgheaders all

.PHONY: pch clean-pch

pch : $(PRECOMPILED_HEADER_PCH)

$(PRECOMPILED_HEADER_PCH): $(PRECOMPILED_HEADER)
ifneq ("$(PRECOMPILED_EXT)","")
	@echo Creating precompiled header for $(CC)...
	$(Q)$(CXX) -x c++-header $(CXXFLAGS) $(filter-out -MMD -include $(PRECOMPILED_HEADER),$(COPTS)) -MD -o $@ $<
endif

clean: clean-pch clean-defines

clean-pch:
	$(Q)-rm -f $(PRECOMPILED_HEADER_D) $(PRECOMPILED_HEADER).pch $(PRECOMPILED_HEADER).gch

-include $(PRECOMPILED_HEADER_D)

# Create opp_defines.h so important WITH_* macros from OMNeT++ can be included as macros from a header file
# This helps the IDE to properly enable/disable conditional code in the editor
DEFINES_FILE=inet/opp_defines.h

msgheaders: $(DEFINES_FILE)

clean-defines:
	$(Q)-rm -f $(DEFINES_FILE)

$(DEFINES_FILE) : $(COPTS_FILE)
	@echo "// Generated file, do not edit" >$(DEFINES_FILE)
ifeq ($(WITH_OSG),yes)
	@echo "#ifndef WITH_OSG" >>$(DEFINES_FILE)
	@echo "#define WITH_OSG" >>$(DEFINES_FILE)
	@echo "#endif" >>$(DEFINES_FILE)
endif
ifeq ($(WITH_OSGEARTH),yes)
	@echo "#ifndef WITH_OSGEARTH" >>$(DEFINES_FILE)
	@echo "#define WITH_OSGEARTH" >>$(DEFINES_FILE)
	@echo "#endif" >>$(DEFINES_FILE)
endif

# dump out the actual compiler and linker command line for easier debugging
ifneq ($(MAKECMDGOALS),clean)
$(info *** COMPILING with:)
$(info $(CXX) -c $(CXXFLAGS) $(COPTS))
$(info *** LINKING with:)
$(info $(SHLIB_LD) -o $O/$(TARGET) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS))
$(info Building...)
endif

# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET_DIR)/$(TARGET)

$(TARGET_DIR)/% :: $O/%
	@mkdir -p $(TARGET_DIR)
	$(Q)$(LN) $< $@
ifeq ($(TOOLCHAIN_NAME),clangc2)
	$(Q)-$(LN) $(<:%.dll=%.lib) $(@:%.dll=%.lib)
endif

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile $(CONFIGFILE)
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)echo >.tmp$$$$ $(OBJS) $(EXTRA_OBJS) && $(AR) .tmplib$$$$ @.tmp$$$$ && $(SHLIB_LD) -o $O/$(TARGET) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) .tmplib$$$$ $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS) && rm .tmp$$$$ && rm .tmplib$$$$
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders smheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE) | msgheaders smheaders
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc -MD -MP -MF $O/$(basename $<)_m.h.d $(MSGCOPTS) $?

%_sm.cc %_sm.h: %.sm
	$(qecho) SMC: $<
	$(Q)$(SMC) -c++ -suffix cc $(SMCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

smheaders: $(SMFILES:.sm=_sm.h)

clean:
	$(qecho) Cleaning $(TARGET)
	$(Q)-rm -rf $O
	$(Q)-rm -f $(TARGET_DIR)/$(TARGET)
	$(Q)-rm -f $(TARGET_DIR)/$(TARGET:%.dll=%.lib)
	$(Q)-rm -f $(call opp_rwildcard, . , *_m.cc *_m.h *_sm.cc *_sm.h)

cleanall:
	$(Q)$(MAKE) -s clean MODE=release
	$(Q)$(MAKE) -s clean MODE=debug
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

# include all dependencies
-include $(OBJS:%=%.d) $(MSGFILES:%.msg=$O/%_m.h.d)
