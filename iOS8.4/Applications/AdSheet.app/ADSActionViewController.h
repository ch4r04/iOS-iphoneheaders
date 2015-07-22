/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AdSheet/ADSActionViewController_RPC.h>

@class ADSAdSpaceController;

@interface ADSActionViewController : UIViewController <ADSActionViewController_RPC> {

	ADSAdSpaceController* _adSpaceController;
	char _readyForPresentation;

}

@property (assign,nonatomic) ADSAdSpaceController * adSpaceController; 
@property (nonatomic,readonly) char readyForPresentation;                           //@synthesize readyForPresentation=_readyForPresentation - In the implementation block
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
+(void)requestActionViewControllerForAdSpaceController:(id)arg1 ;
+(id)_exportedInterface;
-(void)clientApplicationDidEnterBackground;
-(char)readyForPresentation;
-(void)clientApplicationCancelledAction;
-(ADSAdSpaceController *)adSpaceController;
-(void)setAdSpaceController:(ADSAdSpaceController *)arg1 ;
-(void)setReadyForPresentation:(char)arg1 ;
-(void)didSetAdSpaceController;
-(void)dealloc;
-(void)viewDidLoad;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
@end
