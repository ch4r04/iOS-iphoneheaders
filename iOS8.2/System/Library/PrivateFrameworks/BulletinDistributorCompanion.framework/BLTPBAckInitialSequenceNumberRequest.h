/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <BulletinDistributorCompanion/NSCopying.h>

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {

	char _assert;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) char hasAssert; 
@property (assign,nonatomic) char assert;                 //@synthesize assert=_assert - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAssert:(char)arg1 ;
-(void)setHasAssert:(char)arg1 ;
-(char)hasAssert;
-(char)assert;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

