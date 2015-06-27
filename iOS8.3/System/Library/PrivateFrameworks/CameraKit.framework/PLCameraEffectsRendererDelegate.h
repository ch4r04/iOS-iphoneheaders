/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:54:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCameraEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(char)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(char)arg2;
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(char)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(char)arg2 animated:(char)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(char)arg2;

@end
