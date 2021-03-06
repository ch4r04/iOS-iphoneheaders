/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCameraController.h>
#import <VectorKit/VKInteractiveCameraController.h>

@class NSString, GEOMapRegion;

@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController> {

	GlobeView* _globeView;
	CameraManager* _cameraManager;
	double _currentDoublePanPitch;
	BOOL _isPitching;
	BOOL _isRotating;
	BOOL _wasPitched;
	BOOL _couldEnter3DMode;

}

@property (assign,nonatomic) GlobeView* globeView;                              //@synthesize globeView=_globeView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKPoint centerCoordinate; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
-(void)dealloc;
-(id)init;
-(long long)tileSize;
-(double)pitch;
-(double)yaw;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setGesturing:(BOOL)arg1 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)canEnter3DMode;
-(BOOL)isPitched;
-(double)presentationYaw;
-(double)altitude;
-(GEOMapRegion *)mapRegion;
-(GEOMapRegion *)mapRegionOfInterest;
-(void)setCenterCoordinate:(VKPoint)arg1 animated:(BOOL)arg2 ;
-(VKPoint)centerCoordinate;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)pauseFlyoverTourAnimation;
-(void)resumeFlyoverTourAnimation;
-(void)enter3DMode;
-(void)exit3DMode;
-(BOOL)isFullyPitched;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)viewportInfo;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(CGPoint)_centerScreenPoint;
-(BOOL)snapMapIfNecessary:(const VKPoint*)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_scaledScreenPointForPoint:(CGPoint)arg1 ;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)pitch:(CGPoint)arg1 translation:(double)arg2 ;
-(long long)maximumNormalizedZoomLevel;
-(long long)minimumNormalizedZoomLevel;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(void)stopGlobeAnimations;
-(void)moveTo:(CGSize)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(double)zoomForMapRegion:(id)arg1 ;
-(void)showSearchResultAnimationAtCoordinate:(CGSize)arg1 withZoom:(double)arg2 ;
-(void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(/*^block*/id)arg3 stateChange:(/*^block*/id)arg4 ;
-(void)stopFlyoverTourAnimation;
-(void)stopSearchResultAnimation;
-(void)updateCameraManager;
-(void)updateGlobeFromCamera;
-(Vector2i)_cursorFromScreenPoint:(CGPoint)arg1 ;
-(void)_update3DState;
-(void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3 ;
-(void)moveTo:(CGSize)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(BOOL)isFlyoverTourStarted;
-(void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 completion:(/*^block*/id)arg3 ;
-(GlobeView*)globeView;
-(void)rotateTo:(double)arg1 animated:(BOOL)arg2 ;
@end

