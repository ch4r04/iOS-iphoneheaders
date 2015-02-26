/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SGHarvesterService : NSObject
-(void)harvestDataForDataType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)harvestDataForAllDataTypesWithCompletion:(/*^block*/id)arg1 ;
-(id)availableDataTypes;
-(id)messagesToRefresh;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 ;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addMessages:(id)arg1 source:(id)arg2 ;
-(void)addMessages:(id)arg1 source:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
