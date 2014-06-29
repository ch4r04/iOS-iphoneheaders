/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(bool)supportsIDMapForType:(int)arg1 ;
-(unsigned)maxKey;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(bool)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(bool)arg2 ;
-(void)p_setupNamesList;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end
