/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDShading, WDBorder;

@interface WDTableCellDescriptor : NSObject {

	WDShading* mShading;
	WDBorder* mTopBorder;
	WDBorder* mLeftBorder;
	WDBorder* mBottomBorder;
	WDBorder* mRightBorder;
	WDBorder* mDiagonalUpBorder;
	WDBorder* mDiagonalDownBorder;
	short mWidth;
	int mWidthType;
	short mTopMargin;
	int mTopMarginType;
	short mBottomMargin;
	int mBottomMarginType;
	short mLeftMargin;
	int mLeftMarginType;
	short mRightMargin;
	int mRightMarginType;
	int mVerticalAlignment;
	unsigned mShadingOverridden : 1;
	unsigned mTopBorderOverridden : 1;
	unsigned mLeftBorderOverridden : 1;
	unsigned mBottomBorderOverridden : 1;
	unsigned mRightBorderOverridden : 1;
	unsigned mDiagonalUpBorderOverridden : 1;
	unsigned mDiagonalDownBorderOverridden : 1;
	unsigned mWidthTypeOverridden : 1;
	unsigned mTopMarginOverridden : 1;
	unsigned mTopMarginTypeOverridden : 1;
	unsigned mBottomMarginOverridden : 1;
	unsigned mBottomMarginTypeOverridden : 1;
	unsigned mLeftMarginOverridden : 1;
	unsigned mLeftMarginTypeOverridden : 1;
	unsigned mRightMarginOverridden : 1;
	unsigned mRightMarginTypeOverridden : 1;
	unsigned mVerticalAlignmentOverridden : 1;
	unsigned mVerticallyMergedCell : 1;
	unsigned mVerticallyMergedCellOverridden : 1;
	unsigned mFirstInSetOfVerticallyMergedCells : 1;
	unsigned mFirstInSetOfVerticallyMergedCellsOverridden : 1;
	unsigned mNoWrap : 1;
	unsigned mNoWrapOverridden : 1;

}
-(void)setRightMargin:(short)arg1 ;
-(void)setWidth:(short)arg1 ;
-(short)rightMargin;
-(short)leftMargin;
-(short)topMargin;
-(short)bottomMargin;
-(bool)isLeftMarginOverridden;
-(bool)isRightMarginOverridden;
-(bool)isTopMarginOverridden;
-(bool)isBottomMarginOverridden;
-(bool)isShadingOverridden;
-(id)shading;
-(bool)isBottomBorderOverridden;
-(id)bottomBorder;
-(void)setTopMargin:(short)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(bool)isTopBorderOverridden;
-(bool)isLeftBorderOverridden;
-(bool)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(bool)isVerticalAlignmentOverridden;
-(int)verticalAlignment;
-(bool)isWidthTypeOverridden;
-(int)widthType;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setLeftBorder:(id)arg1 ;
-(void)setRightBorder:(id)arg1 ;
-(void)setTopBorder:(id)arg1 ;
-(void)setBottomBorder:(id)arg1 ;
-(void)setBottomMargin:(short)arg1 ;
-(void)setWidthType:(int)arg1 ;
-(void)setTopMarginType:(int)arg1 ;
-(void)setBottomMarginType:(int)arg1 ;
-(void)setLeftMarginType:(int)arg1 ;
-(void)setRightMarginType:(int)arg1 ;
-(void)setVerticallyMergedCell:(bool)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCells:(bool)arg1 ;
-(bool)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(bool)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(bool)isTopMarginTypeOverridden;
-(int)topMarginType;
-(bool)isLeftMarginTypeOverridden;
-(int)leftMarginType;
-(bool)isBottomMarginTypeOverridden;
-(int)bottomMarginType;
-(bool)isRightMarginTypeOverridden;
-(int)rightMarginType;
-(bool)isVerticallyMergedCellOverridden;
-(bool)verticallyMergedCell;
-(bool)isFirstInSetOfVerticallyMergedCellsOverridden;
-(bool)firstInSetOfVerticallyMergedCells;
-(void)setShading:(id)arg1 ;
-(void)setShadingOverridden:(bool)arg1 ;
-(void)setTopBorderOverridden:(bool)arg1 ;
-(void)setLeftBorderOverridden:(bool)arg1 ;
-(void)setBottomBorderOverridden:(bool)arg1 ;
-(void)setRightBorderOverridden:(bool)arg1 ;
-(void)setDiagonalUpBorder:(id)arg1 ;
-(void)setDiagonalUpBorderOverridden:(bool)arg1 ;
-(void)setDiagonalDownBorder:(id)arg1 ;
-(void)setDiagonalDownBorderOverridden:(bool)arg1 ;
-(void)setWidthTypeOverridden:(bool)arg1 ;
-(void)setTopMarginOverridden:(bool)arg1 ;
-(void)setTopMarginTypeOverridden:(bool)arg1 ;
-(void)setBottomMarginOverridden:(bool)arg1 ;
-(void)setBottomMarginTypeOverridden:(bool)arg1 ;
-(void)setLeftMarginOverridden:(bool)arg1 ;
-(void)setLeftMarginTypeOverridden:(bool)arg1 ;
-(void)setRightMarginOverridden:(bool)arg1 ;
-(void)setRightMarginTypeOverridden:(bool)arg1 ;
-(void)setVerticalAlignmentOverridden:(bool)arg1 ;
-(void)setVerticallyMergedCellOverridden:(bool)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCellsOverridden:(bool)arg1 ;
-(bool)isNoWrapOverridden;
-(void)setNoWrapOverridden:(bool)arg1 ;
-(bool)noWrap;
-(void)setNoWrap:(bool)arg1 ;
@end
