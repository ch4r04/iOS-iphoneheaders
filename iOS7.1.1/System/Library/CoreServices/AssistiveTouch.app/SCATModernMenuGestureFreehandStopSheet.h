/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:09 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGestureFreehandSheetBase.h>

@class NSString;

@interface SCATModernMenuGestureFreehandStopSheet : SCATModernMenuGestureFreehandSheetBase {

	NSString* _actionToStop;

}

@property (nonatomic,copy) NSString * actionToStop;              //@synthesize actionToStop=_actionToStop - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)actionToStop;
-(BOOL)allowsBackAction;
-(BOOL)allowsExitAction;
-(void)setActionToStop:(id)arg1 ;
-(void)dealloc;
@end

