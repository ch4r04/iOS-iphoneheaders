/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentCardDetailsViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <PassKit/CRCameraReaderDelegate.h>

@class UITextField, NSDate, UIButton, UITableViewCell, UIDatePicker, NSDateFormatter, NSString;

@interface PKPaymentCardManualEntryViewController : PKPaymentCardDetailsViewController <UITextFieldDelegate, CRCameraReaderDelegate> {

	UITextField* _nameField;
	UITextField* _cardNumberField;
	UITextField* _expirationDateField;
	NSDate* _expirationDate;
	UIButton* _photoButton;
	UITableViewCell* _cardHolderNameCell;
	UITableViewCell* _cardNumberCell;
	UITableViewCell* _expirationDateCell;
	UITableViewCell* _securityCodeCell;
	UIDatePicker* _expirationDatePicker;
	NSDateFormatter* _dateFormatter;
	void* _unifiedMeCard;
	char _hasScrolledToShowFields;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNext:(id)arg1 ;
-(id)initWithWebService:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3 ;
-(void)_clearTextFieldColors;
-(id)_cardHolderNameCell;
-(id)_cardNumberCell;
-(id)_expirationDateCell;
-(id)_securityCodeCell;
-(id)_defaultCell;
-(void)_addFromCamera:(id)arg1 ;
-(void)_displayNewExpiration:(id)arg1 ;
-(void)_updateTextField:(id)arg1 withDate:(id)arg2 ;
-(void)cancelCameraCapture:(id)arg1 ;
-(char)isComplete;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)_name;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)headerView;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReaderDidDisplayMessage:(id)arg1 ;
-(void)cameraReaderDidFindTarget:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
@end
