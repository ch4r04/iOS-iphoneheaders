/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableIndexSet, NSMutableArray, MFMailComposeRecipientView, NSArray;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableIndexSet* _selectedIndexes;
	NSMutableArray* _recipients;
	MFMailComposeRecipientView* _recipientView;

}

@property (nonatomic,readonly) NSArray * recipients;                                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) MFMailComposeRecipientView * recipientView;              //@synthesize recipientView=_recipientView - In the implementation block
-(id)initWithRecentComposeRecipients:(id)arg1 ;
-(void)setRecipientView:(id)arg1 ;
-(void)_didTapDoneButton:(id)arg1 ;
-(void)_dismissAndAddSelectedContacts;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(CGSize)preferredContentSize;
-(id)recipientView;
-(id)recipients;
@end
