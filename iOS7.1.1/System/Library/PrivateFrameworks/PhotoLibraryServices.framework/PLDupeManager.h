/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	bool _doneWithCloudAssets;
	bool _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	long long _once;
	long long _pauseCount;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
+(id)sharedInstance;
+(id)hashForAsset:(id)arg1 ;
+(bool)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(bool)arg2 ;
+(id)placeholderHash;
+(bool)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(bool)arg2 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(bool)_computeHashForAsset:(id)arg1 ;
-(void)dealloc;
-(void)pauseAnalysis;
-(void)resumeAnalysis;
-(id)photoLibrary;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)launchDupeAnalysisIfNeeded;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(bool)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(void)_analyzeDupesForRebuild;
-(void)_continueAnalysisForRebuild;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysisForRebuildOrPause;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)_performAnalysisTransaction:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(bool)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(void)_analyzeDupes;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysis;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)resetDupesAnalysisResetHashes:(bool)arg1 ;
@end

