/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaMap : NSObject {

	unordered_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > >, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > > > >* mOwnerToFormulasMap;
	int mCount;

}
-(void)addFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 atCellCoordinate:(SCD_Struct_TS288)arg3 ;
-(id)formulaEnumerator;
-(int)count;
@end
