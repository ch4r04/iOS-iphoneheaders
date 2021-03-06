/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLAdapter.h>

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter {

	NSString* _dbpath;

}
-(char)supportsCorrelatedSubqueries;
-(Class)statementClass;
-(id)typeStringForColumn:(id)arg1 ;
-(id)typeStringForSQLType:(unsigned)arg1 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)createConnection;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2 ;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2 ;
-(id)sqliteVersion;
-(id)pathnameForDatabase;
-(void)dealloc;
-(id)type;
@end

