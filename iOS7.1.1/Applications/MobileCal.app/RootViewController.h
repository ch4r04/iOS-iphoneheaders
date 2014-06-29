/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/CalendarDebugReportProblemViewControllerDelegate.h>

@class CalendarModel, RootNavigationController, UINavigationController;

@interface RootViewController : UIViewController <CalendarDebugReportProblemViewControllerDelegate> {

	CalendarModel* _model;
	RootNavigationController* _rootNavigationController;
	UINavigationController* _reportProblemNavigationController;

}

@property (nonatomic,readonly) RootNavigationController * rootNavigationController;                   //@synthesize rootNavigationController=_rootNavigationController - In the implementation block
@property (nonatomic,readonly) CalendarModel * model; 
@property (nonatomic,retain) UINavigationController * reportProblemNavigationController;              //@synthesize reportProblemNavigationController=_reportProblemNavigationController - In the implementation block
+(BOOL)_diagnosticsAvailable;
-(id)resetToMonthView;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(id)resetToDayView;
-(id)resetToYearView;
-(id)topMainViewController;
-(void)pushCalendarViewControllerWithViewType:(int)arg1 andDate:(id)arg2 ;
-(int)currentViewType;
-(void)showInboxAnimated:(BOOL)arg1 ;
-(void)_setUpStatusBar;
-(void)_setUpNavigationController;
-(void)_restoreLastUsedCalendarViewType;
-(BOOL)dismissPresentedViewController;
-(id)_popToViewControllerSatisfying:(/*^block*/ id)arg1 ;
-(void)_showDebugReportProblemViewController;
-(id)reportProblemNavigationController;
-(void)setReportProblemNavigationController:(id)arg1 ;
-(void)_cancelPressedWhileInReportProblemView;
-(void)_dismissReportProblemController;
-(void)reportProblemViewControllerDidFinish:(id)arg1 ;
-(void)setToToday;
-(id)initWithModel:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)model;
-(void).cxx_destruct;
-(id)searchString;
-(void)handleURL:(id)arg1 ;
-(id)rootNavigationController;
-(id)_now;
@end
