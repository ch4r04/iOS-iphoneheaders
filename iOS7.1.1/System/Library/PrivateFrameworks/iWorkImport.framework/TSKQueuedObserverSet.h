/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSKQueuedObserverSet : NSObject {

	int mChangeType;
	id mObserver;
	id mChangeSource;
	bool mIsClass;

}
+(id)queuedObserverSetWithChangeType:(int)arg1 observer:(id)arg2 changeSource:(id)arg3 isClass:(bool)arg4 ;
-(void)dealloc;
@end
