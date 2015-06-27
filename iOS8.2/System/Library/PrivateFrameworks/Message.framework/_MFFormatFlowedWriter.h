/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject {

	MFPlainTextDocument* _inputDocument;
	unsigned long _encoding;
	NSMutableString* _outputString;
	NSMutableString* _quotedString;
	unsigned _addedTrailingSpaces : 1;
	NSMutableString* _lineString;

}
+(id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned long)arg2 ;
-(void)dealloc;
-(id)outputString;
-(char)addedTrailingSpaces;
-(id)quotedString;
-(unsigned)_findLineBreakInRange:(NSRange)arg1 maxCharWidthCount:(unsigned)arg2 endIsURL:(char)arg3 ;
-(void)_outputQuotedParagraph:(id)arg1 range:(NSRange)arg2 withQuoteLevel:(unsigned)arg3 ;
@end
