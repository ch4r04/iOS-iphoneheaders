/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/XPCServices/com.apple.UIKit.KeyboardManagement.xpc/com.apple.UIKit.KeyboardManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.UIKit.KeyboardManagement/_UIKeyboardArbitration.h>

@class _UIKeyboardArbiter, NSXPCConnection;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {

	_UIKeyboardArbiter* _owner;
	NSXPCConnection* _connection;

}

@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2 ;
-(NSXPCConnection *)connection;
-(void)startArbitrationWithExpectedState:(id)arg1 ;
-(void)setWindowContextID:(unsigned)arg1 forKeyboard:(BOOL)arg2 ;
-(void)signalKeyboardChanged:(id)arg1 ;
@end
