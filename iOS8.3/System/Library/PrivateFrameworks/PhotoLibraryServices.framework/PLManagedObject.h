/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) char isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (nonatomic,copy,readonly) NSString * pl_shortDescription; 
-(PLPhotoLibrary *)photoLibrary;
-(void)willSave;
-(char)isRegisteredWithUserInterfaceContext;
-(NSString *)pl_shortDescription;
-(NSString *)shortObjectIDURI;
@end

