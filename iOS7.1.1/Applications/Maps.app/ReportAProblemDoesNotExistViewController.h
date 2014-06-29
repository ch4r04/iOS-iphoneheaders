/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>

@class UITextView, NSMutableArray, ReportAProblemLocationPickerViewController, ReportAProblemNavigationController;

@interface ReportAProblemDoesNotExistViewController : UITableViewController <ReportAProblemReporter> {

	UITextView* _textView;
	NSMutableArray* _problemItems;
	ReportAProblemLocationPickerViewController* _locationPickerViewController;

}

@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)sendButtonTitleDidChange;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(id)_selectedItem;
-(void)next:(id)arg1 ;
-(void)send:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)navigationController;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)cancel:(id)arg1 ;
@end
