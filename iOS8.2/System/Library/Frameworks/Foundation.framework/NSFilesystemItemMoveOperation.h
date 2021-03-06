/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {

	id _delegate;
	NSString* _sourcePath;
	NSString* _destinationPath;
	NSError* _error;

}
+(id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(char)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(void)_setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(id)error;
@end

