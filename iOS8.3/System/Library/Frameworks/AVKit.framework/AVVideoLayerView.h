/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:32:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@protocol AVVideoLayer;
@class CALayer, AVVideoLayerDelegate, AVPlayerController;

@interface AVVideoLayerView : UIView {

	CALayer*<AVVideoLayer> _videoLayer;
	AVVideoLayerDelegate* _videoLayerDelegate;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic) int videoLayerGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (assign,getter=isVideoScaled,nonatomic) char videoScaled; 
+(id)keyPathsForValuesAffectingVideoRect;
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoScaled;
-(id)initWithFrame:(CGRect)arg1 videoLayer:(id)arg2 ;
-(char)_isPlayingOnSecondScreen;
-(char)isVideoScaled;
-(void)setVideoScaled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(AVPlayerController *)playerController;
-(CGRect)videoRect;
-(void)setVideoLayerGravity:(int)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(int)videoLayerGravity;
-(char)isReadyForDisplay;
@end

