/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIAccountButtonsDelegate.h>

@class SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {

	SKUIAccountButtonsViewController* _accountButtonsViewController;

}

@property (nonatomic,@dynamic,readonly) SKUIAccountButtonsComponent * pageComponent; 
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)willAppearInContext:(id)arg1 ;
-(void)accountButtonsViewControllerDidSignIn:(id)arg1 ;
-(void)accountButtonsViewControllerDidSignOut:(id)arg1 ;
-(id)_accountButtonsViewController;
-(id)cellForIndexPath:(id)arg1 ;
@end
