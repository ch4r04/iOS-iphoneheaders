/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSURL;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSAttributedString * disclosureArrow; 
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3 ;
-(id)attributedStringWithImage:(id)arg1 ;
-(NSAttributedString *)disclosureArrow;
-(NSURL *)url;
-(NSAttributedString *)string;
@end
