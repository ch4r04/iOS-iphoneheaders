/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/PassbookSettings.bundle/PassbookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <PassbookSettings/PKPaymentServiceDelegate.h>

@class PKPaymentService, NSString, PKPassLibrary, NSMutableArray, PKPaymentOptionsDefaults, PKPaymentSetupAboutViewController, PSSpecifier, NSArray;

@interface PassbookCardListController : PSListController <PKPaymentServiceDelegate> {

	PKPaymentService* _paymentService;
	NSString* _secureElementIdentifier;
	PKPassLibrary* _passLibrary;
	NSMutableArray* _passes;
	unsigned long long _passLibraryState;
	PKPaymentOptionsDefaults* _paymentDefaults;
	PKPaymentSetupAboutViewController* _privacyController;
	PSSpecifier* _cardGroupSpecifier;
	PSSpecifier* _spinnerSpecifier;
	PSSpecifier* _errorSpecifier;
	PSSpecifier* _addNewCardSpecifier;
	PSSpecifier* _defaultPaymentSpecifier;
	PSSpecifier* _defaultBillingAddressSpecifier;
	PSSpecifier* _defaultShippingAddressSpecifier;
	PSSpecifier* _defaultContactEmailSpecifier;
	PSSpecifier* _defaultContactPhoneSpecifier;
	NSArray* _cardCellSpecifiers;

}

@property (nonatomic,readonly) PSSpecifier * defaultPaymentSpecifier; 
@property (nonatomic,readonly) PSSpecifier * defaultShippingAddressSpecifier; 
@property (nonatomic,readonly) PSSpecifier * defaultContactEmailSpecifier; 
@property (nonatomic,readonly) PSSpecifier * defaultContactPhoneSpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_getDisplayableStringForLabeledValue:(id)arg1 ;
-(void)_openPrivacyLink;
-(id)_getDefaultPaymentCard;
-(PSSpecifier *)defaultContactPhoneSpecifier;
-(PSSpecifier *)defaultContactEmailSpecifier;
-(void)_showCardDetails:(id)arg1 ;
-(id)_getDefaultContactPhone;
-(id)_getDefaultContactEmail;
-(id)_getDefaultShippingAddress;
-(id)_getDefaultBillingAddress;
-(id)_transactionDefaultsSpecifiers;
-(id)_cardCellSpecifiers;
-(void)_showDefaultPaymentOptions:(id)arg1 ;
-(void)_showDefaultContactEmailOptions:(id)arg1 ;
-(void)_showDefaultShippingAddressOptions:(id)arg1 ;
-(void)_reloadPassesIfNecessaryAnimated:(BOOL)arg1 ;
-(PSSpecifier *)defaultShippingAddressSpecifier;
-(id)defaultBillingAddressSpecifier;
-(id)_cardSpecifiers;
-(PSSpecifier *)defaultPaymentSpecifier;
-(void)_showDefaultBillingAddressOptions:(id)arg1 ;
-(void)_reloadCardCellsAnimated:(BOOL)arg1 ;
-(void)_addPaymentCard;
-(void)_refreshPassLibrary;
-(void)_showDefaultContactPhoneOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(id)specifiers;
@end
