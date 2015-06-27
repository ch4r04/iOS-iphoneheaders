/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBControlCenterObserver.h>

@protocol SBControlCenterSectionViewControllerDelegate;
@class NSString;

@interface SBControlCenterSectionViewController : UIViewController <SBControlCenterObserver> {

	id<SBControlCenterSectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBControlCenterSectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(CGSize)contentSizeForOrientation:(int)arg1 ;
-(char)enabledForOrientation:(int)arg1 ;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)noteSettingsDidUpdate:(id)arg1 ;
-(void)setDelegate:(id<SBControlCenterSectionViewControllerDelegate>)arg1 ;
-(id<SBControlCenterSectionViewControllerDelegate>)delegate;
-(id)view;
-(void)loadView;
-(NSString *)sectionIdentifier;
@end
