/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTTableModel, TSTCellRegion, TSTTableDataStore, TSTTableTileRowInfo, TSTTableTile, TSTCell;

@interface TSTCellIterator : NSObject {

	TSTTableModel* mTableModel;
	TSTCellRegion* mModelRegion;
	NSObject* mModelRegionIterator;
	TSTTableDataStore* mTableDataStore;
	SCD_Struct_TS271 mPreviousCellID;
	TSTTableTileRowInfo* mCurRow;
	TSTTableTile* mCurTile;
	unsigned short mCurRowID;
	NSRange mCurTileRange;
	TSTCell* mCell;
	char mSkipStyleOnlyCells;
	char mSkipCommentStorageOnlyCells;
	char mDontExpandCellRefs;
	int mRowWalkDirection;
	char mDontCheckSize;
	char mDontReturnMergeRegions;
	char mReturnHiddenCells;
	char mDontInflateFormulas;
	char mReturnEmptyCells;

}

@property (readonly) char dontExpandCellRefs; 
@property (readonly) int rowWalkDirection; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
-(TSTTableModel *)tableModel;
-(id)initWithTableModel:(id)arg1 flags:(unsigned long)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long)arg3 ;
-(char)getNext:(SCD_Struct_TS488*)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS483)arg2 ;
-(id)initWithTableModel:(id)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS483)arg2 flags:(unsigned long)arg3 ;
-(void)p_resetIterData:(SCD_Struct_TS488*)arg1 ;
-(char)p_getData:(SCD_Struct_TS488*)arg1 forCellID:(SCD_Struct_TS271)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 ;
-(char)dontExpandCellRefs;
-(int)rowWalkDirection;
-(void)terminate;
-(void)dealloc;
@end

