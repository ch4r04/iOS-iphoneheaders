/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@interface WBSParsecSearchMescalSession : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _session;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned long long _versionNumber;

}
-(void)dealloc;
-(id)init;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)initWithVersionNumber:(unsigned long long)arg1 ;
-(id)exchangedDataForData:(id)arg1 ;
-(id)signatureStringForData:(id)arg1 ;
@end

