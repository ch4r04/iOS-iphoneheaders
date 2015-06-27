/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _HDDataFaker, _HDDataReplayer, _HDDataRecorder;

@interface HDDemoManager : NSObject {

	_HDDataFaker* _faker;
	_HDDataReplayer* _replayer;
	_HDDataRecorder* _recorder;

}
-(void)stopFakingData;
-(void)stopReplayingData;
-(void)stopRecordingData;
-(void)recordData:(id)arg1 ;
-(void)startFakingDataForActivity:(int)arg1 speed:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startReplayingDataFromFile:(id)arg1 repeat:(char)arg2 withHandler:(/*^block*/id)arg3 ;
-(char)isProvidingData;
-(void)startRecordingDataToFile:(id)arg1 ;
@end
