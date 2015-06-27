/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation;

@interface SUScriptOperation : ISOperation {

	id _options;
	ISOperation* _wrappedOperation;

}
+(Class)postOperationClassForType:(id)arg1 ;
+(void)registerPostOperationClass:(Class)arg1 forType:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(id)initWithPostType:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 options:(id)arg2 ;
-(void)setScriptOptions:(id)arg1 ;
-(void)_sendCompletionCallback;
-(id)_scriptOptions;
@end
