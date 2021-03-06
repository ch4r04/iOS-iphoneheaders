/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <BulletinDistributorCompanion/NSCopying.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying> {

	BLTPBImage* _image;
	NSString* _title;
	BOOL _destructive;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) BLTPBImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hasDestructive; 
@property (assign,nonatomic) BOOL destructive;                 //@synthesize destructive=_destructive - In the implementation block
-(id)description;
-(void)setImage:(BLTPBImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BLTPBImage *)image;
-(id)dictionaryRepresentation;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(void)setHasDestructive:(BOOL)arg1 ;
-(BOOL)hasDestructive;
-(BOOL)destructive;
-(BOOL)hasImage;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

