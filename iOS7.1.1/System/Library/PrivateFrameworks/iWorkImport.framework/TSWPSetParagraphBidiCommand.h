/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPTextCommand.h>

@class NSArray;

@interface TSWPSetParagraphBidiCommand : TSWPTextCommand {

	int _direction;
	NSArray* _paragraphDeltas;

}
-(void)doCommit;
-(int)persistenceKind;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 direction:(int)arg3 ;
-(void)dealloc;
-(id)actionString;
@end

