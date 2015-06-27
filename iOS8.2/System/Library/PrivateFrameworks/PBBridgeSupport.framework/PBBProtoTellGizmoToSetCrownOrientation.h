/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <PBBridgeSupport/NSCopying.h>

@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying> {

	char _crownOrientationRight;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) char hasCrownOrientationRight; 
@property (assign,nonatomic) char crownOrientationRight;                 //@synthesize crownOrientationRight=_crownOrientationRight - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCrownOrientationRight:(char)arg1 ;
-(char)crownOrientationRight;
-(void)setHasCrownOrientationRight:(char)arg1 ;
-(char)hasCrownOrientationRight;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
