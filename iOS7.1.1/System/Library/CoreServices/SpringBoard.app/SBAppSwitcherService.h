/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBAppSwitcherService : NSObject {

	NSString* _bundleIdentifier;
	NSString* _viewServiceClassName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewServiceClassName;              //@synthesize viewServiceClassName=_viewServiceClassName - In the implementation block
+(id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2 ;
-(id)viewServiceClassName;
-(void)setViewServiceClassName:(id)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)identifier;
-(void)setBundleIdentifier:(id)arg1 ;
@end

