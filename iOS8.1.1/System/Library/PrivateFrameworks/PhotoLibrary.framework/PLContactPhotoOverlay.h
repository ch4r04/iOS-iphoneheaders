/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface PLContactPhotoOverlay : UIView {

	UILabel* _titleLabel;
	UIImageView* __avatarPreview;

}

@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets overlayEdgeInsets; 
@property (nonatomic,readonly) UIImageView * _avatarPreview;                //@synthesize _avatarPreview=__avatarPreview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIEdgeInsets)overlayEdgeInsets;
-(CGRect)inscribingBounds;
-(void)_commonPLContactPhotoOverlayInitialization;
-(void)beginAvatarTrackingFromImageView:(id)arg1 ;
-(void)endAvatarTracking;
-(UIImageView *)_avatarPreview;
@end

