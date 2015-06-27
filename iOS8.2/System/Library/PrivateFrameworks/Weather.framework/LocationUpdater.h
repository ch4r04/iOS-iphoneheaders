/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/WeatherUpdater.h>

@class CLGeocoder, City;

@interface LocationUpdater : WeatherUpdater {

	char _isGeoCoding;
	CLGeocoder* _geoCoder;
	/*^block*/id _localWeatherHandler;
	City* _currentCity;

}

@property (nonatomic,retain) City * currentCity;              //@synthesize currentCity=_currentCity - In the implementation block
+(id)sharedLocationUpdater;
+(void)clearSharedLocationUpdater;
-(void)cancel;
-(void)dealloc;
-(id)aggregateDictionaryDomain;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned)arg2 ;
-(void)_failed:(unsigned)arg1 ;
-(void)didProcessDocument;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 ;
-(void)enableProgressIndicator:(char)arg1 ;
-(void)setCurrentCity:(City *)arg1 ;
-(City *)currentCity;
-(void)parsedResultCity:(id)arg1 ;
-(void)handleNilCity;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)failCity:(id)arg1 ;
-(char)isDataValid:(id)arg1 ;
@end
