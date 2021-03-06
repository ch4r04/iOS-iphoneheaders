/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:22:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class RadioTrack, UIPickerView, NSArray, UITextView, RadioStation, NSString;

@interface RUReportIssueViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	RadioTrack* _currentTrack;
	char _isLowBitrate;
	UIPickerView* _issuePicker;
	NSArray* _issueTypes;
	UITextView* _reportIssueTextField;
	NSArray* _playbackQueue;
	RadioStation* _station;

}

@property (nonatomic,readonly) NSString * issueText; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithStation:(id)arg1 currentItem:(id)arg2 playbackQueue:(id)arg3 ;
-(void)_reportIssueCancelAction:(id)arg1 ;
-(void)_reportIssueDoneAction:(id)arg1 ;
-(id)_descriptionForIssueType:(int)arg1 ;
-(void)_dismissPopoverOrSheet;
-(NSString *)issueText;
@end

