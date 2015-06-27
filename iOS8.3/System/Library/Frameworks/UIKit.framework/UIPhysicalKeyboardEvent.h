/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:46 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPhysicalButtonsEvent.h>

@class NSString;

@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent {

	NSString* _modifiedInput;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;
	NSString* _markedInput;
	int _modifierFlags;
	int _inputFlags;
	NSString* _privateInput;

}

@property (nonatomic,retain) NSString * _modifiedInput;                     //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _unmodifiedInput;                   //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _shiftModifiedInput;                //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _commandModifiedInput;              //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _markedInput;                       //@synthesize markedInput=_markedInput - In the implementation block
@property (nonatomic,retain) NSString * _privateInput;                      //@synthesize privateInput=_privateInput - In the implementation block
@property (assign,nonatomic) int _modifierFlags;                            //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) int _gsModifierFlags; 
@property (nonatomic,readonly) char _isKeyDown; 
@property (nonatomic,readonly) long _keyCode; 
@property (assign,nonatomic) int _inputFlags;                               //@synthesize inputFlags=_inputFlags - In the implementation block
+(id)_eventWithInput:(id)arg1 inputFlags:(int)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(int)type;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(char)_isKeyDown;
-(long)_keyCode;
-(char)_matchesKeyCommand:(id)arg1 ;
-(int)_modifierFlags;
-(int)_gsModifierFlags;
-(NSString *)_modifiedInput;
-(int)_inputFlags;
-(NSString *)_unmodifiedInput;
-(void)set_modifiedInput:(NSString *)arg1 ;
-(id)_cloneEvent;
-(void)_privatizeInput;
-(NSString *)_markedInput;
-(void)set_modifierFlags:(int)arg1 ;
-(void)set_inputFlags:(int)arg1 ;
-(void)set_unmodifiedInput:(NSString *)arg1 ;
-(void)set_markedInput:(NSString *)arg1 ;
-(void)set_shiftModifiedInput:(NSString *)arg1 ;
-(void)set_commandModifiedInput:(NSString *)arg1 ;
-(void)set_privateInput:(NSString *)arg1 ;
-(NSString *)_commandModifiedInput;
-(NSString *)_shiftModifiedInput;
-(NSString *)_privateInput;
@end
