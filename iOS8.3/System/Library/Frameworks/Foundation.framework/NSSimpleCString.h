/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:24 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString {

	char* bytes;
	int numBytes;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(const char*)_fastCStringContents:(char)arg1 ;
-(unsigned)cStringLength;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned)arg2 ;
-(char)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)hasPrefix:(id)arg1 ;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)hasSuffix:(id)arg1 ;
-(id)stringByAppendingString:(id)arg1 ;
-(int)compare:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(char)getBytes:(void*)arg1 maxLength:(unsigned)arg2 usedLength:(unsigned*)arg3 encoding:(unsigned)arg4 options:(unsigned)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(void)finalize;
-(char)canBeConvertedToEncoding:(unsigned)arg1 ;
@end

