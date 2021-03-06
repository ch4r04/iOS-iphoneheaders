/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <MobileSafariSettings/DevicePINControllerDelegate.h>

@class UIBarButtonItem;

@interface SafariAutoFillListController : SafariSettingsListController <DevicePINControllerDelegate> {

	/*^block*/ id _completionHandlerWhenPasscodeIsAccepted;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_toggleEditing:(id)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(BOOL)keychainSyncIsEnabled;
-(id)viewItemTitle;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(void)_showDeleteConfirmationAlert:(id)arg1 ;
-(unsigned)_autoFillItemCount;
-(void)_promptForPasscodeIfNeededWithTitle:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_deleteSelectedItems;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)willResignActive;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)_updateDeleteButton;
@end

