/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SPUsageTrack : NSObject {

	NSMutableDictionary* _appUsageTrack;

}

@property (nonatomic,retain) NSMutableDictionary * appUsageTrack;              //@synthesize appUsageTrack=_appUsageTrack - In the implementation block
-(void)setAppUsageTrack:(NSMutableDictionary *)arg1 ;
-(void)_prepareString:(char*)arg1 fromArray:(unsigned*)arg2 ;
-(NSMutableDictionary *)appUsageTrack;
-(void)_printString:(char*)arg1 fromArray:(unsigned*)arg2 ;
-(void)_printSeparator;
-(void)_updateDataCount:(unsigned long long)arg1 application:(id)arg2 toGizmo:(BOOL)arg3 ;
-(unsigned*)_arrayForApplication:(id)arg1 toGizmo:(BOOL)arg2 ;
-(int)_indexForSize:(unsigned long long)arg1 ;
-(id)_aggdScalarKeyForIndex:(int)arg1 application:(id)arg2 toGizmo:(BOOL)arg3 ;
-(id)_aggdDistKeyForApplication:(id)arg1 toGizmo:(BOOL)arg2 ;
-(id)_aggdKeyForApplication:(id)arg1 toGizmo:(BOOL)arg2 ;
-(void)_logUsageData;
-(void)dataSentToGizmo:(unsigned long long)arg1 application:(id)arg2 ;
-(void)dataReceiedFromGizmo:(unsigned long long)arg1 application:(id)arg2 ;
-(id)init;
@end
