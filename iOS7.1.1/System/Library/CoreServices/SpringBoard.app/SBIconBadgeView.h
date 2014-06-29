/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconAccessoryView.h>

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconBadgeView : UIView <SBIconAccessoryView> {

	NSString* _text;
	SBDarkeningImageView* _incomingTextView;
	BOOL _animating;
	/*^block*/ id _queuedAnimation;
	BOOL _displayingAccessory;
	SBIconAccessoryImage* _backgroundImage;
	SBDarkeningImageView* _backgroundView;
	SBIconAccessoryImage* _textImage;
	SBDarkeningImageView* _textView;

}
+(id)_checkoutBackgroundImage;
+(CGPoint)_textOffset;
+(id)_checkoutImageForText:(id)arg1 highlighted:(BOOL)arg2 ;
+(CGPoint)_overhang;
+(id)_createImageForText:(id)arg1 highlighted:(BOOL)arg2 ;
+(id)_textFont;
+(float)_maxTextWidth;
+(float)_textPadding;
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2 ;
-(void)_clearText;
-(void)_configureAnimatedForText:(id)arg1 highlighted:(BOOL)arg2 withPreparation:(/*^block*/ id)arg3 animation:(/*^block*/ id)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_resizeForTextImage:(id)arg1 ;
-(void)_crossfadeToTextImage:(id)arg1 withPreparation:(/*^block*/ id)arg2 animation:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_zoomInWithTextImage:(id)arg1 preparation:(/*^block*/ id)arg2 animation:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_zoomOutWithPreparation:(/*^block*/ id)arg1 animation:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/ id)arg4 animation:(/*^block*/ id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 ;
-(CGPoint)accessoryOriginForIconBounds:(CGRect)arg1 ;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end
