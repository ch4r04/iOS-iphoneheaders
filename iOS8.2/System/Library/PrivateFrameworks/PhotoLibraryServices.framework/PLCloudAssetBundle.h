/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLCloudAssetBundle : NSObject {

	NSString* _masterIdentifier;
	NSArray* _resources;
	unsigned _combinedAvailableResourcesSize;

}

@property (nonatomic,retain,readonly) NSString * masterIdentifier;                   //@synthesize masterIdentifier=_masterIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSArray * resources;                           //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) unsigned combinedAvailableResourcesSize;              //@synthesize combinedAvailableResourcesSize=_combinedAvailableResourcesSize - In the implementation block
-(id)description;
-(NSArray *)resources;
-(NSString *)masterIdentifier;
-(unsigned)combinedAvailableResourcesSize;
-(id)initWithAsset:(id)arg1 verifyAvailability:(char)arg2 ;
@end
