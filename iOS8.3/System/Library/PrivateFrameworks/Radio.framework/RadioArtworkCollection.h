/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class NSArray;

@interface RadioArtworkCollection : NSObject {

	NSArray* _artworks;

}

@property (nonatomic,readonly) NSArray * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)artworkCatalog;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)bestArtworkForPointSize:(CGSize)arg1 ;
-(id)_artworksBySortingArtworks:(id)arg1 ;
-(id)initWithArtworkVariants:(id)arg1 ;
-(id)bestArtworkForPixelSize:(CGSize)arg1 ;
-(id)initWithArtworks:(id)arg1 ;
-(NSArray *)artworks;
@end

