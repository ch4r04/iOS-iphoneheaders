/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPDataStorage.h>

@class NSData, NSString;

@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage> {

	NSData* _NSData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) char isReadable; 
@property (nonatomic,readonly) char isMissingData; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) char readOnly; 
@property (nonatomic,readonly) char needsDownload; 
@property (assign,nonatomic) char gilligan_isRemote; 
@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo; 
@property (nonatomic,readonly) unsigned CRC; 
-(NSString *)packageLocator;
-(unsigned char)packageIdentifier;
-(id)initWithNSData:(id)arg1 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(char)isMissingData;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(id)bookmarkDataWithOptions:(unsigned)arg1 ;
-(id)NSDataWithOptions:(unsigned)arg1 ;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 forData:(id)arg2 ;
-(NSString *)documentResourceLocator;
-(char)isInPackage:(id)arg1 ;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(unsigned long long)length;
-(char)readOnly;
-(char)isReadable;
-(unsigned long long)encodedLength;
@end
