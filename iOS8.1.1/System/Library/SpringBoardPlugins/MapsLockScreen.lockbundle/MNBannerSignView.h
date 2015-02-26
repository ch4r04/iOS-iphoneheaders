/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <MapsLockScreen/MNBannerView.h>

@class SBUIBannerContext, MNBannerItem, MNGuidanceManeuverView, UILabel, UIImageView, NSString;

@interface MNBannerSignView : UIView <MNBannerView> {

	MNGuidanceManeuverView* _maneuverView;
	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	UIImageView* _shieldImageView;
	CGPoint _shieldCenterPoint;
	SBUIBannerContext* _bannerContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBUIBannerContext * bannerContext;              //@synthesize bannerContext=_bannerContext - In the implementation block
@property (nonatomic,readonly) MNBannerItem * bannerItem; 
-(void)_outlineSubviews;
-(CGPoint)_centerPointOffset;
-(void)updateDistanceTextFromItem;
-(SBUIBannerContext *)bannerContext;
-(MNBannerItem *)bannerItem;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end
