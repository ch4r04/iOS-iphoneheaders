/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSSet* _versions;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSSet * versions;                 //@synthesize versions=_versions - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSSet *)versions;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setVersions:(NSSet *)arg1 ;
@end

