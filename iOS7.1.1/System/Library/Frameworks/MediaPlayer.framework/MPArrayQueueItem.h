/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {

	MPAVItem* _item;
	NSString* _path;
	double _startTime;
	double _stopTime;
	NSString* _videoID;

}

@property (nonatomic,readonly) MPAVItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double stopTime;                //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,copy) NSString * videoID;               //@synthesize videoID=_videoID - In the implementation block
-(void)setVideoID:(id)arg1 ;
-(double)stopTime;
-(id)videoID;
-(id)initWithMPAVItem:(id)arg1 ;
-(void)setStopTime:(double)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(id)path;
-(id)item;
-(void)setPath:(id)arg1 ;
-(void).cxx_destruct;
-(double)startTime;
@end

