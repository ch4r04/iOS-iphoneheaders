/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinObserverViewController.h>
#import <SpringBoard/SBWidgetHandling.h>

@class NSSet, NSMutableDictionary, NSArray, SBBBSectionInfo, NSString;

@interface SBTodayViewController : SBBulletinObserverViewController <SBWidgetHandling> {

	NSMutableDictionary* _sectionIDsToOrderedBulletins;
	NSArray* _todaySnippetBulletinOrder;
	NSArray* _tomorrowSnippetBulletinOrder;
	SBBBSectionInfo* _todaySectionInfo;
	SBBBSectionInfo* _tomorrowSectionInfo;
	/*^block*/id _pendingVisibleWidgetCompletion;
	CGSize _cachedContentSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * visibleWidgetIDs; 
+(double)_todayWidgetAndTomorrowSectionHeaderViewHeightForLayoutMode:(long long)arg1 ;
-(void)enableAllWidgets:(/*^block*/id)arg1 ;
-(void)invalidateContentLayout;
-(void)insertAppropriateViewWithContent;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(long long)arg1 ;
-(void)transitionToContentUnavailableViewIfNecessary;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4 ;
-(id)infoForWidgetSection:(id)arg1 ;
-(id)infoForBulletinSection:(id)arg1 ;
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitReloadOfSections:(id)arg1 ;
-(id)widgetForSection:(id)arg1 ;
-(long long)bulletinViewController:(id)arg1 insertionAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1 ;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1 ;
-(long long)activeLayoutModeForWidget:(id)arg1 ;
-(void)setWidgetDelegate:(id)arg1 ;
-(BOOL)canRemoveViewOnDismissal:(id)arg1 ;
-(void)forceUpdateTableHeader;
-(void)_updateTableFooter;
-(id)todayTableFooterView;
-(id)todayTableHeaderView;
-(void)_updateTableHeader:(BOOL)arg1 ;
-(void)widgetsEditButtonTapped:(id)arg1 ;
-(void)updateTableHeaderIfNecessary;
-(id)_bulletinOrderStringForBulletinInfo:(id)arg1 ;
-(id)_todaySnippetBulletinOrder;
-(id)_tomorrowSnippetBulletinOrder;
-(void)_sortBulletinsForSectionWithIdentifier:(id)arg1 referencingOrder:(id)arg2 ;
-(id)_widgetHandlingBulletinViewController;
-(NSSet *)visibleWidgetIDs;
-(void)_enableWidgetsPassingTest:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_nextSequenceNumber;
-(id)widgetWithIdentifier:(id)arg1 ;
-(void)_refreshWidget:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(CGSize)contentSize;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end
