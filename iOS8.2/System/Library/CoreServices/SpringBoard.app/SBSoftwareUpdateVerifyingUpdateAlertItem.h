/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class SBSoftwareUpdateVerifyingUpdateAlertViewController;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {

	SBSoftwareUpdateVerifyingUpdateAlertViewController* _activityViewController;

}
-(void)dealloc;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(id)initWithDescriptor:(id)arg1 ;
-(char)undimsScreen;
-(char)behavesSuperModally;
-(char)reappearsAfterLock;
-(char)reappearsAfterUnlock;
-(char)dismissesAutomatically;
@end

