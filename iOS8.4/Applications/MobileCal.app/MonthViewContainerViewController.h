/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MainViewControllerContainer.h>

@class CompactWidthMonthViewController, CompactHeightMonthViewController, LargeMonthViewController;

@interface MonthViewContainerViewController : MainViewControllerContainer {

	CompactWidthMonthViewController* _compactWidthController;
	CompactHeightMonthViewController* _compactHeightController;
	LargeMonthViewController* _regularController;

}

@property (nonatomic,retain) CompactWidthMonthViewController * compactWidthController;                //@synthesize compactWidthController=_compactWidthController - In the implementation block
@property (nonatomic,retain) CompactHeightMonthViewController * compactHeightController;              //@synthesize compactHeightController=_compactHeightController - In the implementation block
@property (nonatomic,retain) LargeMonthViewController * regularController;                            //@synthesize regularController=_regularController - In the implementation block
-(id)currentChildViewController;
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(char)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(CompactWidthMonthViewController *)compactWidthController;
-(void)setCompactWidthController:(CompactWidthMonthViewController *)arg1 ;
-(CompactHeightMonthViewController *)compactHeightController;
-(void)setCompactHeightController:(CompactHeightMonthViewController *)arg1 ;
-(LargeMonthViewController *)regularController;
-(void)setRegularController:(LargeMonthViewController *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
@end

