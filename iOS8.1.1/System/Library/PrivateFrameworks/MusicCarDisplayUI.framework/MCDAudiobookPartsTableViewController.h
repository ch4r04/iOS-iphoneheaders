/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

@class NSNumberFormatter, NSString;

@interface MCDAudiobookPartsTableViewController : MCD_OLD_TableViewController {

	NSNumberFormatter* _formatter;
	NSString* _numberOfParts;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
@end
