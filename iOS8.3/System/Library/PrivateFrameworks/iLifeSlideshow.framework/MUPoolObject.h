/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@interface MUPoolObject : NSObject {

	MUPoolObject* mPoolPrev;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)clearAllPools;
+(SCD_Struct_MR16*)poolInfo;
+(char)clearVars;
+(id)pooledClasses;
+(int)clearPool;
-(void)purge;
-(oneway void)release;
@end
