/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:20:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>
#import <Radio/NSMutableCopying.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {

	long long _albumID;
	RadioArtworkCollection* _artworkCollection;
	char _isSeed;
	RadioSeedMetadata* _seedMetadata;
	long long _storeID;
	int _type;

}

@property (nonatomic,readonly) long long albumID;                                       //@synthesize albumID=_albumID - In the implementation block
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,readonly) char isSeed;                                             //@synthesize isSeed=_isSeed - In the implementation block
@property (nonatomic,copy,readonly) RadioSeedMetadata * seedMetadata;                   //@synthesize seedMetadata=_seedMetadata - In the implementation block
@property (nonatomic,readonly) long long storeID;                                       //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) int type;                                                //@synthesize type=_type - In the implementation block
-(id)init;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)storeID;
-(char)isSeed;
-(RadioArtworkCollection *)artworkCollection;
-(RadioSeedMetadata *)seedMetadata;
-(long long)albumID;
-(id)initWithItemDictionary:(id)arg1 ;
@end
