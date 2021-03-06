/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MPUDataSourceConfiguration : NSObject {

	Class _dataSourceClass;
	NSString* _dataSourceCachingKey;
	/*^block*/id _defaultQueryCreationBlock;
	long long _entityType;

}

@property (nonatomic,readonly) Class dataSourceClass;                    //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,copy) NSString * dataSourceCachingKey;              //@synthesize dataSourceCachingKey=_dataSourceCachingKey - In the implementation block
@property (nonatomic,copy) id defaultQueryCreationBlock;                 //@synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock - In the implementation block
@property (assign,nonatomic) long long entityType;                       //@synthesize entityType=_entityType - In the implementation block
+(id)configurationWithDataSourceClass:(Class)arg1 ;
-(void)setEntityType:(long long)arg1 ;
-(long long)entityType;
-(NSString *)dataSourceCachingKey;
-(id)defaultQueryCreationBlock;
-(id)initWithDataSourceClass:(Class)arg1 ;
-(void)setDataSourceCachingKey:(NSString *)arg1 ;
-(void)setDefaultQueryCreationBlock:(id)arg1 ;
-(Class)dataSourceClass;
@end

