/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBLSApplicationPlaceholderLifecycleObserver.h>

@class SBApplicationController, SBLSApplicationWorkspaceObserver, NSMutableDictionary, NSMutableSet;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBLSApplicationPlaceholderLifecycleObserver> {

	SBApplicationController* _appController;
	SBLSApplicationWorkspaceObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;

}
+(id)sharedInstance;
-(id)placeholderForDisplayID:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(BOOL)hasDownloadedStoreApplication;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)_processPendingProxies;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)_removeDownloadingIcons:(id)arg1 saveState:(BOOL)arg2 ;
-(void)_downloadsEnded;
-(void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersModified:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)applicationPlaceholdersIconUpdated:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isUsingNetwork;
@end

