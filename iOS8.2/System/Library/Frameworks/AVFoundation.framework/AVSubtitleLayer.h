/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVSubtitleLayerInternal, AVPlayer, CADisplay;

@interface AVSubtitleLayer : CALayer {

	AVSubtitleLayerInternal* _subtitleLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) char overscanSubtitleSupportEnabled; 
@property (nonatomic,readonly) CADisplay * subtitleLayerDisplay; 
+(id)subtitleLayerWithPlayer:(id)arg1 ;
-(void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2 ;
-(void)_setSubtitleSample:(id)arg1 ;
-(long)updateSubtitle:(id)arg1 forcedSubtitleSample:(char)arg2 shouldBeHidden:(char*)arg3 ;
-(void)_updateNonForcedSubtitleDisplayEnabled:(char)arg1 ;
-(long)getLayout:(SubtitleLayoutParameters)arg1 suggestLayout:(CGRect*)arg2 shouldUpdateCachedSubtitleSample:(char)arg3 ;
-(void)subtitleRenderingNeedsLayout;
-(char)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(char)arg1 ;
-(CADisplay *)subtitleLayerDisplay;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)finalize;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end
