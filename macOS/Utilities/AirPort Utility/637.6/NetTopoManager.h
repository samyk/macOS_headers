//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SettingsFunctionDelegate-Protocol.h"
#import "TopoDiscoveryDelegate-Protocol.h"

@class CALayer, NSDictionary, NSMutableArray, NSMutableDictionary, NetTopoLayoutNewDevices, NetTopoLayoutRootLayer, TopoDiscovery, TopoNode;
@protocol NetTopoManagerDelegate;

@interface NetTopoManager : NSObject <TopoDiscoveryDelegate, SettingsFunctionDelegate>
{
    id <NetTopoManagerDelegate> _delegate;
    NetTopoLayoutRootLayer *_rootLayer;
    CALayer *_newDevicesLayer;
    CALayer *_remoteDevicesLayer;
    TopoNode *_curTopology;
    NSDictionary *_curUnconfiguredNodes;
    NSMutableDictionary *_curRemoteBaseStationNodes;
    TopoDiscovery *_topoDiscoverer;
    NSMutableArray *_topoRowArrays;
    NSMutableArray *_connectionLayers;
    NSMutableArray *_newDeviceRowArrays;
    NSMutableArray *_remoteDeviceRowArrays;
    NetTopoLayoutNewDevices *_newDevicesLayoutManager;
    NetTopoLayoutNewDevices *_remoteDevicesLayoutManager;
}

@property(readonly, nonatomic) NetTopoLayoutRootLayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(readonly, nonatomic) TopoDiscovery *topoDiscoverer; // @synthesize topoDiscoverer=_topoDiscoverer;
@property(nonatomic) id <NetTopoManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *curRemoteBaseStationNodes; // @synthesize curRemoteBaseStationNodes=_curRemoteBaseStationNodes;
@property(retain, nonatomic) NSDictionary *curUnconfiguredNodes; // @synthesize curUnconfiguredNodes=_curUnconfiguredNodes;
@property(retain, nonatomic) TopoNode *curTopology; // @synthesize curTopology=_curTopology;
- (unsigned long long)currentDeviceCount;
- (id)debugDescription;
- (int)callbackFunctionWithParamDict:(id)arg1;
- (id)findLayerForTopoNode:(id)arg1;
- (void)topologyNetworkInterfaceRemoved:(id)arg1;
- (void)topologyNetworkInterfaceAdded:(id)arg1 displayName:(id)arg2;
- (void)requiredFirmwareUpdateAvailabilityChanged:(id)arg1;
- (void)topologyNodeWasChanged:(id)arg1 treeRoot:(id)arg2;
- (void)topologyNoDevicesFoundYet;
- (void)topologyDestroyEntireTree;
- (void)topologyNodeWillBeDeleted:(id)arg1 treeRoot:(id)arg2;
- (void)topologyNodeHasGoneMissing:(id)arg1 treeRoot:(id)arg2;
- (void)topologyRemoteAirPortNodeWasRemoved:(id)arg1 fromConfigureOther:(BOOL)arg2;
- (void)topologyRemoteAirPortNodeWasAdded:(id)arg1 fromConfigureOther:(BOOL)arg2;
- (void)topologyUnconfiguredAirPortNodeWasRemoved:(id)arg1 unconfiguredNodes:(id)arg2;
- (void)topologyUnconfiguredAirPortNodeWasAdded:(id)arg1 unconfiguredNodes:(id)arg2;
- (void)topologyNodeHadReadError:(id)arg1 status:(int)arg2;
- (void)topologyNodeHadWriteError:(id)arg1 status:(int)arg2;
- (void)topologyNodeHadTaskError:(id)arg1 taskCode:(unsigned int)arg2 status:(int)arg3;
- (BOOL)topologyOkToRunDiscovery;
- (void)topologyNodeDiscoveryComplete:(id)arg1;
- (void)topologyNodeWasAdded:(id)arg1 treeRoot:(id)arg2;
- (void)detachUIObjectFromParentAndRelease:(id)arg1;
- (void)synchronizeTopologyTreeBecauseOfNode:(id)arg1;
- (unsigned long long)synchronizeThisNodesChildren:(id)arg1 parentUIObject:(id)arg2 superLayer:(id)arg3 startRow:(unsigned long long)arg4;
- (void)syncOneDeviceNode:(id)arg1 superLayer:(id)arg2 startRow:(unsigned long long)arg3 syncedLayer:(id *)arg4;
- (unsigned long long)syncOneRemoteAirPortDeviceNode:(id)arg1 superLayer:(id)arg2 startRow:(unsigned long long)arg3 maxDevicesPerRow:(unsigned long long)arg4 syncedLayer:(id *)arg5;
- (unsigned long long)syncOneUnconfiguredAirPortDeviceNode:(id)arg1 superLayer:(id)arg2 startRow:(unsigned long long)arg3 maxDevicesPerRow:(unsigned long long)arg4 syncedLayer:(id *)arg5;
- (void)topoWindowDidChangeBackingPropertiesNotification:(id)arg1;
- (void)informLayerAndChildrenOfContentsScaleChange:(id)arg1 withOldScale:(double)arg2 andNewScale:(double)arg3;
- (id)createNewAirPortUILayerForNode:(id)arg1 inLayer:(id)arg2;
- (unsigned long long)addUILayerObject:(id)arg1 toRow:(unsigned long long)arg2 usingRowArrays:(id)arg3;
- (void)destroyTopologyLayers;
- (void)dealloc;
- (id)initWithMainLayer:(id)arg1 newDevicesLayer:(id)arg2 remoteDevicesLayer:(id)arg3 andOptions:(int)arg4;

@end

