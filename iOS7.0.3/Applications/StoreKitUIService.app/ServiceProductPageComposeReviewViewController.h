/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUComposeReviewViewController.h>
#import <StoreKitUIService/SKUIComposeReviewDelegate.h>

@class ServiceProductPageViewController, SKUIComposeReviewViewController;

@interface ServiceProductPageComposeReviewViewController : SUComposeReviewViewController <SKUIComposeReviewDelegate> {

	ServiceProductPageViewController* _parentProductPageViewController;
	SKUIComposeReviewViewController* _underlyingViewController;

}

@property (assign,nonatomic,__weak) ServiceProductPageViewController * parentProductPageViewController;              //@synthesize parentProductPageViewController=_parentProductPageViewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)setParentProductPageViewController:(id)arg1 ;
-(id)parentProductPageViewController;
-(BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2 ;
-(void)composeReviewViewControllerDidSubmit:(id)arg1 ;
-(void)composeReviewViewControllerDidCancel:(id)arg1 ;
-(void)setClientInterface:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/ id)arg1 ;
@end

