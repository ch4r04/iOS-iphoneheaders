/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, _UIBackdropView;

@interface TPWallpaperView : UIView {

	char _blursBackground;
	char _hidesContactImage;
	char _shouldLockContactImage;
	char _shouldBindBlurringWithPresenceOfContactImage;
	UIImage* _contactImage;
	float _blurProportion;
	UIImageView* _contactImageView;
	_UIBackdropView* _backdropEffectView;

}

@property (nonatomic,retain) UIImage * contactImage;                                         //@synthesize contactImage=_contactImage - In the implementation block
@property (assign,nonatomic) char blursBackground;                                           //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) float blurProportion;                                           //@synthesize blurProportion=_blurProportion - In the implementation block
@property (assign,nonatomic) char hidesContactImage;                                         //@synthesize hidesContactImage=_hidesContactImage - In the implementation block
@property (assign) char shouldLockContactImage;                                              //@synthesize shouldLockContactImage=_shouldLockContactImage - In the implementation block
@property (assign,nonatomic) char shouldBindBlurringWithPresenceOfContactImage;              //@synthesize shouldBindBlurringWithPresenceOfContactImage=_shouldBindBlurringWithPresenceOfContactImage - In the implementation block
@property (retain) UIImageView * contactImageView;                                           //@synthesize contactImageView=_contactImageView - In the implementation block
@property (retain) _UIBackdropView * backdropEffectView;                                     //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(_UIBackdropView *)backdropEffectView;
-(void)setBackdropEffectView:(_UIBackdropView *)arg1 ;
-(char)blursBackground;
-(void)setBlursBackground:(char)arg1 ;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(UIImageView *)contactImageView;
-(UIImage *)contactImage;
-(void)setContactImage:(UIImage *)arg1 ;
-(char)shouldLockContactImage;
-(void)updateBindBlurringWithPresenceOfContactImage;
-(void)setContactImage:(id)arg1 animated:(char)arg2 ;
-(char)hidesContactImage;
-(void)setHidesContactImage:(char)arg1 ;
-(void)setBlurProportion:(float)arg1 ;
-(void)setShouldBindBlurringWithPresenceOfContactImage:(char)arg1 ;
-(float)blurProportion;
-(void)setShouldLockContactImage:(char)arg1 ;
-(char)shouldBindBlurringWithPresenceOfContactImage;
@end

