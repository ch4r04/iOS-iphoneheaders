/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Maps.assistantBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchShowMapPoints.h>
#import <Maps/AFServiceCommand.h>

@class BKSProcessAssertion, NSString;

@interface MAHandleShowMapPoints : SALocalSearchShowMapPoints <AFServiceCommand> {

	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mapKitLaunchOptions;
-(void)_launchMapsWithURL:(id)arg1 serviceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_performWithServiceHelper:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_launchBackgroundNavigationWithURL:(id)arg1 serviceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(void)dealloc;
-(BKSProcessAssertion *)assertion;
@end

