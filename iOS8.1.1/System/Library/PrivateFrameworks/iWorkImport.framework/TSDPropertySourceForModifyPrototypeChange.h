/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSSPropertySource.h>

@class TSDModifyPrototypeChange, NSString;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {

	TSDModifyPrototypeChange* mChange;
	BOOL mAfterChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)intValueForProperty:(int)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(id)initWithPrototypeChange:(id)arg1 afterChange:(BOOL)arg2 ;
-(id)p_propertyMap;
@end

