/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/SearchSettings.bundle/SearchSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray, NSMutableSet;

@interface SearchResultsController : PSViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _ordering;
	NSMutableSet* _disabledDomains;
	bool _isDirty;

}
-(void)_updateCell:(id)arg1 forDomain:(unsigned)arg2 ;
-(unsigned)domainForIndexRow:(unsigned long long)arg1 ;
-(id)stringForSearchDomain:(unsigned)arg1 ;
-(void)_saveIfNecessary;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillDisappear:(bool)arg1 ;
@end
