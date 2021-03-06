/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityHorizontalLockupTableViewCell.h>

@protocol MusicUpNextReorderLayoutDelegate;
@class UIView;

@interface MusicUpNextTableViewCell : MusicEntityHorizontalLockupTableViewCell {

	UIView* _hairlineView;
	id<MusicUpNextReorderLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<MusicUpNextReorderLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(id<MusicUpNextReorderLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MusicUpNextReorderLayoutDelegate>)arg1 ;
@end

