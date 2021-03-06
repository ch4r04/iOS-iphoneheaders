/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)destinationEntity;
-(id)correlationTableName;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)relationshipDescription;
-(id)sourceEntity;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(void)dealloc;
-(char)isOrdered;
-(id)inverseRelationship;
@end

