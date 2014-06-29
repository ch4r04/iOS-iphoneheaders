/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DirectionsControllerDelegate <NSObject>
@property (nonatomic,readonly) MainChromeViewController * chromeViewController; 
@required
-(id)chromeViewController;
-(void)directionsControllerDidChangeRoute:(id)arg1;
-(void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned)arg2;
-(void)directionsController:(id)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(int)arg2;
-(void)directionsControllerNavigationModeChoseOverview:(id)arg1;
-(void)directionsControllerNavigationModeChoseEndNavigation:(id)arg1;
-(void)directionsControllerDidStartLoad:(id)arg1;
-(void)directionsControllerDidLoad:(id)arg1;
-(void)directionsControllerDidCancelLoad:(id)arg1;
-(void)directionsControllerDidFailToLoad:(id)arg1 withError:(id)arg2;
-(void)directionsControllerDidReset:(id)arg1;
-(void)directionsController:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)directionsController:(id)arg1 didSetEndPin:(id)arg2;
-(void)directionsControllerUpdatedETA:(id)arg1;
-(void)directionsControllerHasArrived:(id)arg1;
@end
