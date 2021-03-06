/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPopoverController.h>
#import <MediaPlayer/MPAVRoutingViewControllerDelegate.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	char _airPlayPasswordAlertDidAppearTokenIsValid;
	char _mirroringIncluded;
	MPAVRoutingViewController* _routingViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)routingController;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 includeMirroring:(char)arg2 ;
-(void)dealloc;
-(id)initWithType:(unsigned)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(id)_tableViewController;
@end

