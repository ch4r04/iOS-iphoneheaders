/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface MPAudioDeviceController : NSObject {

	NSString* _category;
	id _delegate;
	char _determiningPickableRoutes;
	char _fakeRouteAvailable;
	NSArray* _pickableRoutes;
	NSDictionary* _pickedRoute;
	char _pickedRouteHasVolumeControl;
	char _pickedRouteHasVolumeControlIsValid;
	NSMutableArray* _pickableRoutesCompletionHandlers;
	char _scheduledSendAudioRoutesDidChange;

}

@property (assign,nonatomic,__weak) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char routeDiscoveryEnabled; 
+(id)_routeDiscoveryModeStack;
+(void)_internalPushRouteDiscoveryMode:(int)arg1 ;
+(int)routeDiscoveryMode;
+(void)_internalSetSystemRouteDiscoveryMode:(int)arg1 ;
+(void)setRouteDiscoveryMode:(int)arg1 ;
+(char)routeDiscoveryEnabled;
+(void)setRouteDiscoveryEnabled:(char)arg1 ;
+(void)pushRouteDiscoveryMode:(int)arg1 ;
+(void)restoreRouteDiscoveryMode;
-(char)pickBestDeviceRoute;
-(char)volumeControlIsAvailable;
-(id)_pickedRoute;
-(void)clearCachedRoutes;
-(char)airtunesRouteIsPicked;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(char)pickRoute:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(char)pickHandsetRoute;
-(char)pickSpeakerRoute;
-(char)speakerRouteIsPicked;
-(char)handsetRouteIsPicked;
-(char)receiverRouteIsPicked;
-(void)logCurrentRoutes;
-(id)_pickableRoutes;
-(char)_routeIsHandset:(id)arg1 ;
-(char)_routeIsSpeaker:(id)arg1 ;
-(char)_routeIsDisplayPort:(id)arg1 ;
-(char)routeDiscoveryEnabled;
-(void)setRouteDiscoveryEnabled:(char)arg1 ;
-(char)pickRouteAtIndex:(unsigned)arg1 withPassword:(id)arg2 ;
-(char)_routeIsHeadphones:(id)arg1 ;
-(int)indexOfPickedRoute;
-(id)routeNameAtIndex:(unsigned)arg1 isPicked:(char*)arg2 ;
-(char)_routeIsReceiver:(id)arg1 ;
-(char)_routeIsWireless:(id)arg1 ;
-(id)pickedRouteDescription;
-(void)_scheduleSendDelegateAudioRoutesChanged;
-(void)determinePickableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_pickableRoutesChangedNotification:(id)arg1 ;
-(void)_portStatusDidChangeNotification:(id)arg1 ;
-(void)_routeDiscoveryDidEndNotification:(id)arg1 ;
-(unsigned)numberOfAudioRoutes;
-(char)routeOtherThanHandsetIsAvailable;
-(char)routeOtherThanHandsetAndSpeakerIsAvailable;
-(id)routeDescriptionAtIndex:(unsigned)arg1 ;
-(char)routeRequiresPasswordAtIndex:(unsigned)arg1 ;
-(id)routeTypeAtIndex:(unsigned)arg1 ;
-(int)indexOfRouteWithName:(id)arg1 ;
-(char)pickRouteAtIndex:(unsigned)arg1 ;
-(void)restorePickedRoute;
-(id)nameOfPickedRoute;
-(char)wirelessRouteIsPicked;
-(char)isPickedRouteDistinctFromRoute:(id)arg1 ;
-(void)_sendFakeRouteChange;
-(char)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setCategory:(id)arg1 ;
@end
