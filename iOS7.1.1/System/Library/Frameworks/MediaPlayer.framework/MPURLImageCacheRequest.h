/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPImageCacheRequest.h>

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {

	NSURL* _url;
	bool _usePlaceholderAsFallback;

}

@property (assign,nonatomic) bool usePlaceholderAsFallback;              //@synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback - In the implementation block
-(void)setUsePlaceholderAsFallback:(bool)arg1 ;
-(id)placeholderImage;
-(id)uniqueKey;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(bool)usePlaceholderAsFallback;
-(id)initWithURL:(id)arg1 ;
-(void).cxx_destruct;
@end

