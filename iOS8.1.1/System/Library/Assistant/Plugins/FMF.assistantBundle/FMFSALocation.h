/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) SAFmfLocation * siriLocation; 
@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
+(id)locationWithEmail:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(void*)recordForEmail:(id)arg1 ;
+(id)imageForABRecord:(void*)arg1 ;
+(id)friendImageForPersonAttribute:(id)arg1 ;
+(id)friendImageForSAPerson:(id)arg1 ;
+(id)locationWithSiriLocation:(id)arg1 ;
+(id)bundle;
+(void*)sharedAddressBook;
-(void)decodeEmail:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)initWithEmail:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)personForEmailFromAddressBook:(id)arg1 ;
-(SAFmfLocation *)siriLocation;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
-(id)friendLocation:(BOOL)arg1 ;
-(id)friendEmail;
-(id)friendImage;
-(id)friendName;
-(id)prettyTimestamp;
-(UIImage *)cachedFriendImage;
-(id)numberFormatter;
-(BOOL)hasCoordinate;
-(id)distanceFromLocation:(id)arg1 ;
@end

