/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface MBSFileExtendedAttribute : PBCodable {

	NSString* _name;
	NSData* _value;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSData * value;               //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setValue:(NSData *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)value;
-(id)dictionaryRepresentation;
-(char)hasValue;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

