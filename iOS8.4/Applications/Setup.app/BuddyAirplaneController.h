/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSString;

@interface BuddyAirplaneController : BuddyTableViewController <BuddyController> {

	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(id)titleText;
@end
