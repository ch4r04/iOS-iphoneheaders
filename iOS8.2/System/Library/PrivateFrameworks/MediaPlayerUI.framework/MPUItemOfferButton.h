/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <StoreKitUI/SKUIItemOfferButton.h>

@interface MPUItemOfferButton : SKUIItemOfferButton {

	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;              //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(CGSize)intrinsicContentSize;
@end
