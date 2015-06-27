/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBLeafIconDataSource <NSObject>
@required
-(id)icon:(id)arg1 imageWithFormat:(int)arg2;
-(id)iconFormattedAccessoryString:(id)arg1;
-(unsigned)iconPriority:(id)arg1;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
-(char)iconCanEllipsizeLabel:(id)arg1;
-(char)iconCanTightenLabel:(id)arg1;
-(char)iconAppearsInNewsstand:(id)arg1;
-(int)iconProgressState:(id)arg1;
-(float)iconProgressPercent:(id)arg1;
-(char)iconProgressIsPaused:(id)arg1;
-(id)iconBadgeNumberOrString:(id)arg1;
-(int)iconAccessoryType:(id)arg1;
-(char)iconIsRecentlyUpdated:(id)arg1;
-(char)iconIsBeta:(id)arg1;
-(char)iconAllowsUninstall:(id)arg1;
-(char)iconCompleteUninstall:(id)arg1;
-(char)iconAllowsLaunch:(id)arg1;
-(char)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
-(id)iconDisplayName:(id)arg1;

@end
