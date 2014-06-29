/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <GeoServices/GEOURLSerializable.h>

@class NSString, GEOPlace, MKPlacemark, NSURL, NSNumber;

@interface MKMapItem : NSObject <GEOURLSerializable> {

	bool _isCurrentLocation;
	NSString* _extSessionGuid;
	GEOPlace* _place;
	bool _isPlaceHolder;

}

@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (assign,nonatomic) bool isCurrentLocation;                  //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) GEOPlace * place;                      //@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString * extSessionGuid;                 //@synthesize extSessionGuid=_extSessionGuid - In the implementation block
@property (nonatomic,retain) NSString * businessID; 
@property (nonatomic,retain) NSString * yelpID; 
@property (nonatomic,retain) NSNumber * numberOfReviews; 
@property (nonatomic,retain) NSNumber * rating; 
@property (nonatomic,retain) NSNumber * numberOfRatings; 
@property (nonatomic,readonly) bool isPlaceHolder;                    //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
+(id)mapItemWithLocalSearchMapItem:(id)arg1 ;
+(id)mapItemWithLocalSearchMapItem:(id)arg1 ;
+(void)_geocode:(id)arg1 isForward:(bool)arg2 mapItem:(/*^block*/ id)arg3 ;
+(void)_mapItemGeocodedForCoordinate:(SCD_Struct_MK1)arg1 mapItem:(/*^block*/ id)arg2 ;
+(void)_mapItemGeocodedForAddressDictionary:(id)arg1 mapItem:(/*^block*/ id)arg2 ;
+(void)_mapItemGeocodedForStructuredLocation:(id)arg1 mapItem:(/*^block*/ id)arg2 ;
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)mapItemForCurrentLocation;
+(id)mapItemWithDictionary:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(bool)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
-(id)initWithPlaceResult:(id)arg1 ;
-(id)initWithPlaceSearchResponse:(id)arg1 name:(id)arg2 ;
-(void)setPhoneNumber:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(id)placemark;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(bool)arg2 ;
-(void)setIsCurrentLocation:(bool)arg1 ;
-(bool)isCurrentLocation;
-(id)_getBusiness;
-(id)yelpID;
-(id)_getRating;
-(id)initWithPlace:(id)arg1 sessionGuid:(id)arg2 ;
-(void)setYelpID:(id)arg1 ;
-(bool)openInMapsWithLaunchOptions:(id)arg1 ;
-(id)extSessionGuid;
-(void)setExtSessionGuid:(id)arg1 ;
-(bool)isPlaceHolder;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)phoneNumber;
-(id)dictionaryRepresentation;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(bool)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setNumberOfRatings:(id)arg1 ;
-(void)setNumberOfReviews:(id)arg1 ;
-(id)numberOfRatings;
-(id)numberOfReviews;
-(void)setBusinessID:(id)arg1 ;
-(id)place;
-(id)initWithPlace:(id)arg1 ;
-(id)businessID;
@end
