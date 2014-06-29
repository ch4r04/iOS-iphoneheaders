/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostRep.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TSTTableAnimationController, TSTTableChromeProvider, TSTCanvasReferenceController, TSTTableRepDelegate, TSTTableKnobTrackerVisitorProtocol;
@class TSDTilingLayer, CALayer, NSMutableArray, TSTTableCellTextEditingRep, TSWPTextEditing, TSTTableReferences, CAShapeLayer, TSTTableSelection, TSTSelectionDragController, TSDKnobTracker, NSSet, TSWPStorage, TSWPHyperlinkField, TSTTableInfo, TSTTableModel, TSTEditingState, TSTLayout, TSTMasterLayout, TSDCanvasView, TSDEditorController, TSTCellRegion, TSTAnimation, TSTSearchReference;

@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate> {

	CGRect mCanvasVisibleRect;
	CGRect mSearchSelectionBounds;
	TSDTilingLayer* mOverlayTableName;
	TSDTilingLayer* mOverlayFrozenHeaderCorner;
	TSDTilingLayer* mOverlayFrozenHeaderRows;
	TSDTilingLayer* mOverlayFrozenHeaderColumns;
	CALayer* mOverlayFrozenHeaderRowsMask;
	CALayer* mOverlayFrozenHeaderColumnsMask;
	CALayer* mOverlayFrozenHeaderTableBodyMask;
	CALayer* mOverlayFrozenHeaderTableNameMask;
	double mCurrentScreenScale;
	SCD_Struct_TS500 mDirtyCellRange;
	bool mRecursivelyDrawingInContext;
	NSMutableArray* mAnimationStack;
	<TSTTableAnimationController>* mAnimationController;
	TSTTableCellTextEditingRep* mContainedTextEditingRep;
	TSWPTextEditing* mTableNameTextEditing;
	SCD_Struct_TS267 mControlCellID;
	SCD_Struct_TS267 mRatingsDragCellID;
	<TSTTableChromeProvider>* mTableChrome;
	TSTTableReferences* mReferences;
	CAShapeLayer* mHighlightedHyperlinkLayer;
	bool mIsAspectOperationInProgress;
	bool mIsZoomOperationInProgress;
	bool mIsZoomToEditOperationInProgress;
	SCD_Struct_TS500 mZoomToEditVisibleCellRange;
	CAShapeLayer* mFindSelectionHighlightLayer;
	TSTTableSelection* mSourceFillSelection;
	TSTTableSelection* mTargetFillSelection;
	bool mWPEndedTableNameEditing;
	bool _settingSelection;
	TSTSelectionDragController* mCellDragController;
	bool mDragByHandleOnly;
	bool mSelectionUsesBezierPath;
	bool mSelectsCellOnInitialTap;
	bool mUsesWholeChromeResizer;
	<TSTCanvasReferenceController>* mCanvasReferenceController;
	<TSTTableRepDelegate>* mDelegate;
	TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol>* mVisitorKnobTracker;
	NSSet* mVisibleFillKnobs;
	SCD_Struct_TS267 mEditingHyperlinkCellID;
	TSWPStorage* mHyperlinkParentStorage;
	bool mHyperlinkModified;
	bool mInspectingHyperlinkInEditingStorage;
	TSWPHyperlinkField* mHyperlinkField;
	CAShapeLayer* mCellEditingMaskLayer;
	bool mHasBeenRemoved;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTEditingState * editingState; 
@property (nonatomic,readonly) TSTLayout * tableLayout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (assign,nonatomic) <TSTTableAnimationController> * animationController; 
@property (nonatomic,readonly) <TSTTableRepDelegate> * delegate; 
@property (assign,nonatomic) TSTSelectionDragController * cellDragController; 
@property (nonatomic,readonly) CGAffineTransform transformToCanvas; 
@property (nonatomic,readonly) CGAffineTransform transformFromCanvas; 
@property (nonatomic,readonly) CGRect canvasVisibleRect; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) TSDEditorController * editorController; 
@property (nonatomic,readonly) <TSTTableChromeProvider> * tableChrome; 
@property (nonatomic,readonly) <TSTCanvasReferenceController> * canvasReferenceController; 
@property (nonatomic,readonly) TSTCellRegion * selectionRegion; 
@property (nonatomic,readonly) CALayer * layerForRep; 
@property (nonatomic,readonly) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> * visitorKnobTracker; 
@property (assign,nonatomic) SCD_Struct_TS267 ratingsDragCellID; 
@property (nonatomic,readonly) bool isZoomToEditOperationInProgress; 
@property (nonatomic,readonly) TSTAnimation * currentAnimation; 
@property (nonatomic,retain) TSTSearchReference * activeSearchReference; 
+(Class)tableRepDelegateClass;
-(id)tableModel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3 ;
-(void)willBeRemoved;
-(CGRect)layerFrameInScaledCanvas;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(id)editorController;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(void)viewScaleDidChange;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(bool)mustDrawOnMainThreadForInteractiveCanvas;
-(bool)canDrawInBackgroundDuringScroll;
-(bool)canDrawInParallel;
-(id)hitRep:(CGPoint)arg1 ;
-(void)updateFromLayout;
-(id)overlayLayers;
-(id)canvasView;
-(id)itemsToAddToEditMenu;
-(id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2 ;
-(void)invalidateComments;
-(bool)canDrawTilingLayerInBackground:(id)arg1 ;
-(void)invalidateAnnotationColor;
-(void)screenScaleDidChange;
-(id)additionalLayersUnderLayer;
-(id)additionalLayersOverLayer;
-(id)canvasReferenceController;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(id)repForDragging;
-(void)updateChildrenFromLayout;
-(bool)handlesEditMenu;
-(id)masterLayout;
-(id)editingState;
-(id)tableInfo;
-(CGAffineTransform)transformToCanvas;
-(CGAffineTransform)transformFromCanvas;
-(void)invalidateSelection;
-(void)invalidateTableName;
-(id)editorSelection;
-(CGRect)deviceBoundsForCellRange:(SCD_Struct_TS501)arg1 ;
-(void)validateVisibleRect;
-(id)tableChrome;
-(void)dirtyCellRange:(SCD_Struct_TS501)arg1 ;
-(void)setNeedsDisplayInCellRange:(SCD_Struct_TS501)arg1 ;
-(CGRect)canvasVisibleRect;
-(id)p_frozenHeaderOverlayLayers;
-(void)validateTableName;
-(void)validateFrozenHeaderCorner;
-(void)validateFrozenHeaderRows;
-(void)validateFrozenHeaderColumns;
-(void)validateFrozenHeaderTableBodyMask;
-(void)invalidateCellRange:(SCD_Struct_TS501)arg1 fittingRange:(SCD_Struct_TS501)arg2 invalidateSize:(bool)arg3 ;
-(void)p_invalidateCellCommentBadges;
-(id)p_tableNameOverlayLayers;
-(id)layerForRep;
-(CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)pushAnimation:(id)arg1 ;
-(void)popAnimation;
-(id)selectionRegion;
-(bool)shouldRestartTextEditing;
-(bool)shouldCommitPendingTextEdit;
-(void)asyncPostTextChangedInRange:(SCD_Struct_TS501)arg1 strokeRange:(SCD_Struct_TS501)arg2 ;
-(void)invalidateEditingCell;
-(CGRect)canvasBoundsForCellRange:(SCD_Struct_TS501)arg1 ;
-(CGRect)boundsForCellSelection:(SCD_Struct_TS267)arg1 ;
-(void)contentsRectForCellRangeAcrossSpaces:(SCD_Struct_TS501)arg1 contentsCenterInfo:(SCD_Struct_TS539*)arg2 canvasFrame:(CGRect*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)validateStrokesInEditingSpillingTextRange;
-(bool)isFullyVisibleWithBorder:(int)arg1 ;
-(void)updateDynamicModeForEditingSpillText;
-(void)invalidateCellRange:(SCD_Struct_TS501)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(id)currentAnimation;
-(void)invalidateFrozenHeaders;
-(id)p_textImageForPath:(CGPathRef)arg1 shouldPulsate:(bool)arg2 ;
-(id)cellDragController;
-(void)setCellDragController:(id)arg1 ;
-(SCD_Struct_TS267)ratingsDragCellID;
-(void)setRatingsDragCellID:(SCD_Struct_TS267)arg1 ;
-(id)visitorKnobTracker;
-(bool)isZoomToEditOperationInProgress;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)description;
-(id)delegate;
-(void)setAnimationController:(id)arg1 ;
-(id)animationController;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id).cxx_construct;
-(bool)isDraggable;
-(id)tableLayout;
-(void)drawInContext:(CGContextRef)arg1 ;
-(int)tilingMode;
@end
