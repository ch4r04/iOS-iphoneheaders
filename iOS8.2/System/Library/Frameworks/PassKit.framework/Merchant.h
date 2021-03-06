/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface Merchant : SQLiteEntity
+(id)_predicateForPersistentID:(id)arg1 ;
+(id)_predicateForShortName:(id)arg1 ;
+(id)_predicateForName:(id)arg1 ;
+(id)_merchantsInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)_propertySettersForMerchant;
+(id)insertMerchant:(id)arg1 inDatabase:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withPersistentID:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withShortName:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withName:(id)arg2 ;
+(id)merchantsInDatabase:(id)arg1 ;
+(id)merchantInDatabase:(id)arg1 forPaymentTransaction:(id)arg2 ;
+(id)databaseTable;
-(id)_dictionaryOfPropertiesFromMerchant:(id)arg1 ;
-(id)initWithMerchant:(id)arg1 inDatabase:(id)arg2 ;
-(void)updateWithMerchant:(id)arg1 ;
@end

