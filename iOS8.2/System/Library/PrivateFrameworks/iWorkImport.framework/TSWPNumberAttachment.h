/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment {

	int _numberFormat;
	NSString* _stringValue;

}

@property (assign,nonatomic) int numberFormat;                  //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)stringEquivalent;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(id)stringEquivalentWithLayoutParent:(id)arg1 ;
-(id)stringWithNumber:(unsigned)arg1 ;
-(const NumberAttachmentArchive*)numberAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
@end
