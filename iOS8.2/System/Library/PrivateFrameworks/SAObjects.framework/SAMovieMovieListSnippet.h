/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAMovieMovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movies; 
@property (assign,nonatomic) char shouldShowRottenTomatoesRating; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(char)shouldShowRottenTomatoesRating;
-(void)setShouldShowRottenTomatoesRating:(char)arg1 ;
@end
