/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)dealloc;
-(id)snapshot;
-(id)imprint;
-(NSString *)objectID;
-(void)finalize;
-(MCMontage *)montage;
-(void)demolish;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(char)isSnapshot;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initSnapshot;
@end

