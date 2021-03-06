/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MCInteractionDelegate <NSObject>
@optional
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;

@required
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
@end

