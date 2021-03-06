/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSArray, PLPhotoLibrary, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {

	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;

}

@property (nonatomic,retain,readonly) NSArray * allWallpaperURLs; 
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(PLManagedObjectContext *)managedObjectContext;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)updateAsNeeded;
-(NSArray *)allWallpaperURLs;
-(id)wallpaperFileHash;
-(void)deleteAll;
-(void)importAll;
-(id)allExistingWallpaperAssets;
-(void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2 ;
@end

