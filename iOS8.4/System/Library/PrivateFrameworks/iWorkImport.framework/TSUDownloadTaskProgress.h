/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSUDownloadTaskProgress : NSObject {

	BOOL _isActive;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (assign,nonatomic) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(long long)totalBytesExpectedToBeDownloaded;
-(void)setTotalBytesExpectedToBeDownloaded:(long long)arg1 ;
-(void)setTotalBytesDownloaded:(long long)arg1 ;
-(long long)totalBytesDownloaded;
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
@end
