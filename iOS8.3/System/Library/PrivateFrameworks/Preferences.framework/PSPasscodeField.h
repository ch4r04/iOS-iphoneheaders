/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PSPasscodeFieldDelegate;
@class NSMutableArray, NSMutableString, NSString;

@interface PSPasscodeField : UIView <UIKeyInput> {

	NSMutableArray* _dashViews;
	NSMutableArray* _dotViews;
	NSMutableArray* _digitViews;
	NSMutableString* _stringValue;
	char _securePasscodeEntry;
	id<PSPasscodeFieldDelegate> _delegate;
	unsigned _numberOfEntryFields;

}

@property (assign,nonatomic) id<PSPasscodeFieldDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned numberOfEntryFields;                             //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (assign,nonatomic) char securePasscodeEntry;                                   //@synthesize securePasscodeEntry=_securePasscodeEntry - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(void)dealloc;
-(void)setDelegate:(id<PSPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PSPasscodeFieldDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(int)keyboardAppearance;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setSecureTextEntry:(char)arg1 ;
-(char)isSecureTextEntry;
-(int)keyboardType;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(unsigned)numberOfEntryFields;
-(char)securePasscodeEntry;
-(void)setSecurePasscodeEntry:(char)arg1 ;
-(id)initWithNumberOfEntryFields:(unsigned)arg1 ;
@end
