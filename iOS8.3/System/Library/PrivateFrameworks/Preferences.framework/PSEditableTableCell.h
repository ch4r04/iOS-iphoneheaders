/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:09:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController, NSString;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	char _forceFirstResponder;
	char _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	char _valueChanged;
	char _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) char returnKeyTapped;                             //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)cellStyle;
-(void)setPlaceholderText:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)value;
-(void)setValue:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(char)isEditing;
-(void)prepareForReuse;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(char)canResignFirstResponder;
-(id)textField;
-(PSListController *)controllerDelegate;
-(void)setControllerDelegate:(PSListController *)arg1 ;
-(char)canReload;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)cellRemovedFromView;
-(void)setCellEnabled:(char)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)controlChanged:(id)arg1 ;
-(char)isTextFieldEditing;
-(void)_setValueChanged;
-(void)_saveForExit;
-(void)endEditingAndSave;
-(id)_defaultTextColor;
-(char)_cellIsEditing;
-(char)returnKeyTapped;
@end

