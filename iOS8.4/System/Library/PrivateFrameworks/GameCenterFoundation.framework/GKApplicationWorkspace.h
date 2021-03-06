/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(void)openSettings;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)openICloudSettings;
-(LSApplicationWorkspace *)lsWorkspace;
-(id)initWithWorkspace:(id)arg1 ;
@end

