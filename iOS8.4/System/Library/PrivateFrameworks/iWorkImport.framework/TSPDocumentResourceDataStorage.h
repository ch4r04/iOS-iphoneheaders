/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@class TSPDocumentResourceManager, TSPDocumentResourceInfo;

@interface TSPDocumentResourceDataStorage : TSPFileDataStorage {

	TSPDocumentResourceManager* _manager;
	TSPDocumentResourceInfo* _documentResourceInfo;

}

@property (nonatomic,readonly) TSPDocumentResourceManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) TSPDocumentResourceInfo * documentResourceInfo;              //@synthesize documentResourceInfo=_documentResourceInfo - In the implementation block
-(id)storageForDataCopyFromOtherContext;
-(BOOL)isMissingData;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(id)documentResourceLocator;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(void)setDocumentResourceInfo:(TSPDocumentResourceInfo *)arg1 ;
-(TSPDocumentResourceManager *)manager;
-(BOOL)isReadable;
@end

