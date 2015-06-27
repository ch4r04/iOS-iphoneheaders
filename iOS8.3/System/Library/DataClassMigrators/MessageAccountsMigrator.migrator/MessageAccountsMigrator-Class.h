/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:27:24 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(char)_saveAccounts:(id)arg1 ;
-(char)_removeAccounts:(id)arg1 ;
-(char)removeSMTPAccountsThatShouldBeDynamic;
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(char)performMigration;
@end
