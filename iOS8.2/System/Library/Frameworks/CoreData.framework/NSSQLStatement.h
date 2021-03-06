/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLEntity, NSMutableArray, NSString;

@interface NSSQLStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	char _isImpossibleCondition;
	NSSQLEntity* _fakeEntityForFetch;

}
-(unsigned)addBindVariable:(id)arg1 ;
-(void)setImpossibleCondition:(char)arg1 ;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)setSQLString:(id)arg1 ;
-(id)bindIntarrays;
-(char)isImpossibleCondition;
-(id)fakeEntityForFetch;
-(void)removeAllBindVariables;
-(id)bindVariables;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(void)dealloc;
-(id)description;
-(char)isReadOnly;
-(id)entity;
-(void)clearCaches;
@end

