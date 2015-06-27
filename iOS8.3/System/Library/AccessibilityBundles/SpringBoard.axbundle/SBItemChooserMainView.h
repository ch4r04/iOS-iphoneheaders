/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:46:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBVoiceOverTouchItemChooser;

@interface SBItemChooserMainView : UIView {

	SBVoiceOverTouchItemChooser* _itemChooser;

}

@property (nonatomic,retain) SBVoiceOverTouchItemChooser * itemChooser;              //@synthesize itemChooser=_itemChooser - In the implementation block
-(void)setItemChooser:(SBVoiceOverTouchItemChooser *)arg1 ;
-(SBVoiceOverTouchItemChooser *)itemChooser;
-(id)_accessibilityObscuredScreenAllowedViews;
-(char)_accessibilitySupportsActivateAction;
-(void)dealloc;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(char)accessibilityViewIsModal;
-(char)accessibilityPerformEscape;
-(char)accessibilityActivate;
@end
