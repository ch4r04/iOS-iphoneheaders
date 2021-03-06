/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDDocument* mDocument;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long long mStartNumber;
	int mNumberFormat;
	BOOL mRestartNumbering;
	long long mRestartLevel;
	BOOL mLegal;
	int mSuffix;
	NSMutableString* mText;
	BOOL mLegacy;
	long long mLegacySpace;
	long long mLegacyIndent;
	int mJustification;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(id)initWithDocument:(id)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(id)characterProperties;
-(id)paragraphProperties;
-(int)justification;
-(int)numberFormat;
-(long long)startNumber;
-(void)setStartNumber:(long long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setNumberFormat:(int)arg1 ;
-(void)setSuffix:(int)arg1 ;
-(BOOL)startNumberOverridden;
-(BOOL)numberFormatOverridden;
-(BOOL)imageBullet;
-(BOOL)imageBulletOverridden;
-(BOOL)restartNumbering;
-(void)setRestartNumbering:(BOOL)arg1 ;
-(BOOL)restartNumberingOverridden;
-(long long)restartLevel;
-(void)setRestartLevel:(long long)arg1 ;
-(BOOL)restartLevelOverridden;
-(BOOL)legal;
-(void)setLegal:(BOOL)arg1 ;
-(BOOL)legalOverridden;
-(int)suffix;
-(BOOL)suffixOverridden;
-(BOOL)textOverridden;
-(BOOL)legacy;
-(long long)legacySpace;
-(void)setLegacySpace:(long long)arg1 ;
-(long long)legacyIndent;
-(void)setLegacyIndent:(long long)arg1 ;
-(BOOL)justificationOverridden;
@end

