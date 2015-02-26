/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject {

	NSMutableDictionary* _personIDToPersonInfoDictionary;
	NSString* _pathForPersonInfoDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPersonInfoDictionary;              //@synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary - In the implementation block
@property (nonatomic,retain) NSString * pathForPersonInfoDictionary;                            //@synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary - In the implementation block
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)sharedManager;
-(void)initWithPath:(id)arg1 ;
-(BOOL)updateWithSharingRelationship:(id)arg1 ;
-(id)personIDToPersonInfoDictionary;
-(void)setPersonIDToPersonInfoDictionary:(id)arg1 ;
-(id)pathForPersonInfoDictionary;
-(void)setPathForPersonInfoDictionary:(id)arg1 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
-(void).cxx_destruct;
@end
