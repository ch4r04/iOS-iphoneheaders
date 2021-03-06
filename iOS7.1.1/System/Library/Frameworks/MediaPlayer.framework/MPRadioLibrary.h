/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MPRadioLibrary : NSObject

@property (nonatomic,readonly) bool isEnabled; 
@property (nonatomic,readonly) unsigned long long stationCount; 
@property (nonatomic,readonly) NSArray * stations; 
+(id)defaultRadioLibrary;
-(void)_radioModelDidChange:(id)arg1 ;
-(id)_radioModel;
-(id)stations;
-(unsigned long long)stationCount;
-(id)stationWithIdentifier:(long long)arg1 ;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(bool)isEnabled;
@end

