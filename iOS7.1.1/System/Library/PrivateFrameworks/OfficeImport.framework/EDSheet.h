/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedNode.h>

@class EDWorkbook, EDString, EDColorReference, EDHeaderFooter, EDPageSetup, NSMutableArray, TSUPointerKeyDictionary, EDProcessors, EDWarnings, ESDContainer;

@interface EDSheet : OCDDelayedNode {

	EDWorkbook* mWorkbook;
	EDString* mName;
	bool mHidden;
	bool mDisplayFormulas;
	bool mDisplayGridlines;
	bool mIsDialogSheet;
	EDColorReference* mDefaultGridlineColorReference;
	EDHeaderFooter* mHeaderFooter;
	EDPageSetup* mPageSetup;
	NSMutableArray* mDrawables;
	TSUPointerKeyDictionary* mTextBoxMap;
	TSUPointerKeyDictionary* mCommentMap;
	EDProcessors* mProcessors;
	EDWarnings* mWarnings;
	ESDContainer* mEscherDrawing;

}

@property (assign,nonatomic) bool isDialogSheet; 
+(id)sheetWithWorkbook:(id)arg1 ;
-(void)setDefaultGridlineColorReference:(id)arg1 ;
-(void)teardown;
-(void)setup;
-(id)defaultGridlineColorReference;
-(id)drawableEnumerator;
-(id)escherDrawing;
-(void)setEscherDrawing:(id)arg1 ;
-(void)reduceMemoryIfPossible;
-(void)dealloc;
-(bool)isHidden;
-(void)setHidden:(bool)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)workbook;
-(unsigned long long)drawableCount;
-(id)drawableAtIndex:(unsigned long long)arg1 ;
-(bool)isDisplayGridlines;
-(id)drawables;
-(id)processors;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addDrawable:(id)arg1 ;
-(void)setHeaderFooter:(id)arg1 ;
-(id)pageSetup;
-(void)setPageSetup:(id)arg1 ;
-(id)warnings;
-(void)applyProcessors;
-(void)setIsDialogSheet:(bool)arg1 ;
-(void)setDisplayFormulas:(bool)arg1 ;
-(void)setDisplayGridlines:(bool)arg1 ;
-(bool)isDisplayFormulas;
-(id)headerFooter;
-(void)doneWithNonRowContent;
-(id)defaultGridlineColor;
-(void)setDefaultGridlineColor:(id)arg1 ;
-(void)removeDrawableAtIndex:(unsigned long long)arg1 ;
-(id)edTextBoxForShape:(id)arg1 ;
-(void)setEDTextBox:(id)arg1 forShape:(id)arg2 ;
-(id)edCommentForShape:(id)arg1 ;
-(void)setEDComment:(id)arg1 forShape:(id)arg2 ;
-(bool)isDialogSheet;
@end

