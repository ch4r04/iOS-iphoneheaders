/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/CoreAuthUI.app/CoreAuthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAuthUI/TransitionViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, UIAlertController, NSString;

@interface YesNoViewController : TransitionViewController <UIAlertViewDelegate> {

	UIAlertView* _alert;
	UIAlertController* _alertController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAuthenticationData;
-(void)_userApprovedAction:(char)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
@end
