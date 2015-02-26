/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKLocationManagerObserver.h>
#import <Maps/StarkLikelyRouteUpdaterObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, CLLocation, NSDate, NSDictionary, NSString, NSURL, GEODirectionsResponse, PKPassLibrary, EKEventStore;

@interface StarkLikelyRoutesManager : NSObject <MKLocationManagerObserver, StarkLikelyRouteUpdaterObserver> {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _likelyRouteUpdaters;
	BOOL _needsLikelyRoutesUpdate;
	CLLocation* _destination;
	NSDate* _departureDate;
	NSDictionary* _addressDictionary;
	NSDate* _startDate;
	NSString* _name;
	NSURL* _url;
	GEODirectionsResponse* _directionsResponse;
	/*^block*/ id _likelyRoutesHandler;
	PKPassLibrary* _passLibrary;
	EKEventStore* _eventStore;

}
-(void)likelyRouteUpdaterRerouted:(id)arg1 ;
-(void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)_updateSuggestions:(id)arg1 ;
-(void)_clearLikelyRoutes;
-(id)_rankPredictedSuggestion:(id)arg1 calendarSuggestion:(id)arg2 reminderSuggestion:(id)arg3 passbookSuggestion:(id)arg4 iapSuggestion:(id)arg5 ;
-(void)_loadRoutesForRankedSuggestions:(id)arg1 fromLocation:(id)arg2 departureDate:(id)arg3 likelyRoutesHandler:(/*^block*/ id)arg4 ;
-(void)_loadRouteForSuggestion:(id)arg1 fromLocation:(id)arg2 departureDate:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)_reportLikelyRoutes;
-(void)_generateLikelyRoutesForLocation:(id)arg1 departureDate:(id)arg2 likelyRoutesHandler:(/*^block*/ id)arg3 ;
-(void)startGeneratingLikelyRoutesToDestination:(id)arg1 departureDate:(id)arg2 addressDictionary:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 name:(id)arg6 url:(id)arg7 directionsResponse:(id)arg8 likelyRoutesHandler:(/*^block*/ id)arg9 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end
