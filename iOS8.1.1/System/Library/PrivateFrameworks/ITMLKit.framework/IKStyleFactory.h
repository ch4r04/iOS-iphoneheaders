/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKViewElementStyle, NSArray, NSMutableDictionary, NSMutableIndexSet, NSMutableArray;

@interface IKStyleFactory : NSObject {

	IKViewElementStyle* _globalStyle;
	NSArray* _orderedStyles;
	NSMutableDictionary* _stylesOrderMap;
	NSMutableDictionary* _stylesMap;
	NSMutableIndexSet* _reusableIndexSet;
	NSMutableArray* _reusableArray;

}

@property (nonatomic,retain) IKViewElementStyle * globalStyle;                  //@synthesize globalStyle=_globalStyle - In the implementation block
@property (nonatomic,retain) NSArray * orderedStyles;                           //@synthesize orderedStyles=_orderedStyles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stylesOrderMap;              //@synthesize stylesOrderMap=_stylesOrderMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stylesMap;                   //@synthesize stylesMap=_stylesMap - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * reusableIndexSet;              //@synthesize reusableIndexSet=_reusableIndexSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * reusableArray;                    //@synthesize reusableArray=_reusableArray - In the implementation block
-(id)initWithStyles:(id)arg1 ;
-(id)styleForClassSelector:(id)arg1 ;
-(IKViewElementStyle *)globalStyle;
-(NSMutableDictionary *)stylesMap;
-(NSMutableDictionary *)stylesOrderMap;
-(NSArray *)orderedStyles;
-(void)setGlobalStyle:(IKViewElementStyle *)arg1 ;
-(void)setOrderedStyles:(NSArray *)arg1 ;
-(void)setStylesOrderMap:(NSMutableDictionary *)arg1 ;
-(void)setStylesMap:(NSMutableDictionary *)arg1 ;
-(NSMutableIndexSet *)reusableIndexSet;
-(void)setReusableIndexSet:(NSMutableIndexSet *)arg1 ;
-(NSMutableArray *)reusableArray;
-(void)setReusableArray:(NSMutableArray *)arg1 ;
@end

