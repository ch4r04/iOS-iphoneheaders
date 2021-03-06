/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:01:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem {

	NSAttributedString* _transcriptButtonText;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;              //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
-(void)dealloc;
-(Class)cellClass;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
@end

