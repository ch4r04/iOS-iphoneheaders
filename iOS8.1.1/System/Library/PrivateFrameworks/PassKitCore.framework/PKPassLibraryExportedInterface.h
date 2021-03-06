/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryExportedInterface
@required
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
-(void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
-(void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(BOOL)arg2;
-(void)passAdded:(id)arg1;
-(void)passUpdated:(id)arg1;
-(void)passRemoved:(id)arg1;

@end

