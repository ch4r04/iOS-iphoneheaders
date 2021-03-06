/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	NSMutableArray* _problemIDs;
	NSString* _statusNotificationID;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) bool hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) bool hasStatusNotificationID; 
@property (nonatomic,retain) NSString * statusNotificationID;                     //@synthesize statusNotificationID=_statusNotificationID - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemIDs;                         //@synthesize problemIDs=_problemIDs - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setUserCredentials:(id)arg1 ;
-(void)setStatusNotificationID:(id)arg1 ;
-(void)setProblemIDs:(id)arg1 ;
-(void)addProblemID:(id)arg1 ;
-(unsigned long long)problemIDsCount;
-(void)clearProblemIDs;
-(id)problemIDAtIndex:(unsigned long long)arg1 ;
-(bool)hasUserCredentials;
-(bool)hasStatusNotificationID;
-(id)userCredentials;
-(id)statusNotificationID;
-(id)problemIDs;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

