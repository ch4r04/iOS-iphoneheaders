/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMStyleSheet, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property (assign) BOOL disabled; 
@property (copy) NSString * charset; 
@property (copy) NSString * href; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * media; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (readonly) DOMStyleSheet * sheet; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(BOOL)_mediaQueryMatchesForOrientation:(int)arg1 ;
-(BOOL)_mediaQueryMatches;
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)target;
-(NSURL *)absoluteLinkURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)media;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(void)setMedia:(NSString *)arg1 ;
-(DOMStyleSheet *)sheet;
@end
