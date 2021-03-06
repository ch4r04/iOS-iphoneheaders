/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable <NSCopying> {

	NSData* _signature;
	int _version;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) int version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)setSignature:(NSData *)arg1 ;
-(char)hasSignature;
-(NSData *)signature;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(char)hasVersion;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

