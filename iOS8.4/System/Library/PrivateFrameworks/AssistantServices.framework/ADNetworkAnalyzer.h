/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ADNetworkAnalyzer : NSObject
+(void)performRetrySuccessAnalysisForURL:(id)arg1 failedInterfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 ;
+(void)performAnalysisForURL:(id)arg1 failedInterfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 ;
+(void)performRequestAnalysisForURL:(id)arg1 failedInterfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 ;
+(void)_sendAnalysisMessageForURL:(id)arg1 ifaceIndex:(int)arg2 bufSize:(id)arg3 userVisibleFailure:(BOOL)arg4 wwanPerferred:(BOOL)arg5 successfulRetry:(BOOL)arg6 ;
@end

