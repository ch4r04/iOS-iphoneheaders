/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTElementFetchDelegateProtocol
@required
-(void)elementFetchFoundElement:(id)arg1 needsForceCacheUpdate:(BOOL)arg2;
-(void)elementsRetrieved:(id)arg1 finished:(BOOL)arg2;
-(void)elementsCounted:(int)arg1;
-(void)elementFetchFoundDirectTouchElements:(id)arg1;
@end
