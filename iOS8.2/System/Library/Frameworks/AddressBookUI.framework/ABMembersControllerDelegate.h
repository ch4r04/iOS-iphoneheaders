/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMembersControllerDelegate <NSObject>
@required
-(void)membersControllerWillStartSearching:(id)arg1;
-(void)membersControllerDidEndServerSearch:(id)arg1;
-(void)membersControllerWillEndSearching:(id)arg1;
-(void)membersControllerDidEndSearching:(id)arg1;
-(char)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(char)arg3;
-(char)showCardForPerson:(void*)arg1 animate:(char)arg2;
-(void)showInsertEditorForPerson:(void*)arg1 animate:(char)arg2;
-(void)personWasSelected:(void*)arg1;
-(char)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
-(char)allowsShowingPersonsCards;
-(id)model;
-(int)behavior;

@end
