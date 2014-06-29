/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {

	bool _allowsInlineMediaPlayback;
	bool _mediaPlaybackRequiresUserAction;
	bool _mediaPlaybackAllowsAirPlay;
	bool _suppressesIncrementalRendering;
	unsigned long long _dataDetectorTypes;
	NSString* _customUserAgent;

}

@property (assign,nonatomic) unsigned long long dataDetectorTypes;              //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (assign,nonatomic) bool allowsInlineMediaPlayback;                    //@synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback - In the implementation block
@property (assign,nonatomic) bool mediaPlaybackRequiresUserAction;              //@synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction - In the implementation block
@property (assign,nonatomic) bool mediaPlaybackAllowsAirPlay;                   //@synthesize mediaPlaybackAllowsAirPlay=_mediaPlaybackAllowsAirPlay - In the implementation block
@property (assign,nonatomic) bool suppressesIncrementalRendering;               //@synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering - In the implementation block
@property (nonatomic,copy) NSString * customUserAgent;                          //@synthesize customUserAgent=_customUserAgent - In the implementation block
+(id)defaultSettings;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)setCustomUserAgent:(id)arg1 ;
-(void)setMediaPlaybackAllowsAirPlay:(bool)arg1 ;
-(bool)mediaPlaybackAllowsAirPlay;
-(bool)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(bool)arg1 ;
-(void)setAllowsInlineMediaPlayback:(bool)arg1 ;
-(bool)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(bool)arg1 ;
-(bool)mediaPlaybackRequiresUserAction;
-(id)customUserAgent;
-(id)_initWithDictionary:(id)arg1 ;
-(id)_encodeAsDictionary;
@end
