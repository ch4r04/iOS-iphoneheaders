/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	BOOL _isCustomGlyph;
	BOOL _secondaryIsCustomGlyph;
	BOOL _fillPath;
	BOOL _force1xImages;
	BOOL _stringKeycapOverImage;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSString* _secondaryDisplayStringImage;
	NSString* _secondaryDisplayString;
	NSArray* _variantDisplayContents;
	NSArray* _highlightedVariantsList;
	long long _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayStringImage;                 //@synthesize secondaryDisplayStringImage=_secondaryDisplayStringImage - In the implementation block
@property (assign,nonatomic) BOOL isCustomGlyph;                                     //@synthesize isCustomGlyph=_isCustomGlyph - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayString;                      //@synthesize secondaryDisplayString=_secondaryDisplayString - In the implementation block
@property (assign,nonatomic) BOOL secondaryIsCustomGlyph;                            //@synthesize secondaryIsCustomGlyph=_secondaryIsCustomGlyph - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayContents;                       //@synthesize variantDisplayContents=_variantDisplayContents - In the implementation block
@property (nonatomic,retain) NSArray * highlightedVariantsList;                      //@synthesize highlightedVariantsList=_highlightedVariantsList - In the implementation block
@property (assign,nonatomic) long long displayPathType;                              //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) BOOL fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) BOOL force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) BOOL stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(void)setVariantDisplayContents:(NSArray *)arg1 ;
-(void)setHighlightedVariantsList:(NSArray *)arg1 ;
-(void)setDisplayPathType:(long long)arg1 ;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(void)setSecondaryDisplayStringImage:(NSString *)arg1 ;
-(void)setIsCustomGlyph:(BOOL)arg1 ;
-(NSString *)secondaryDisplayString;
-(NSArray *)highlightedVariantsList;
-(NSString *)displayStringImage;
-(void)setForce1xImages:(BOOL)arg1 ;
-(BOOL)isCustomGlyph;
-(BOOL)secondaryIsCustomGlyph;
-(NSArray *)variantDisplayContents;
-(long long)displayPathType;
-(BOOL)fillPath;
-(BOOL)force1xImages;
-(UIKBKeyDisplayContents *)fallbackContents;
-(BOOL)stringKeycapOverImage;
-(NSString *)secondaryDisplayStringImage;
-(void)setSecondaryDisplayString:(NSString *)arg1 ;
-(void)setSecondaryIsCustomGlyph:(BOOL)arg1 ;
-(void)setFillPath:(BOOL)arg1 ;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
-(void)setStringKeycapOverImage:(BOOL)arg1 ;
@end
