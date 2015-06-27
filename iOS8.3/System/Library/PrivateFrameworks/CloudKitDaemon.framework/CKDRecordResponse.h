/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKRecordID, NSString, CKRecord;

@interface CKDRecordResponse : NSObject {

	CKRecordID* _recordID;
	NSString* _etag;
	CKRecord* _record;

}

@property (nonatomic,retain) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
-(id)description;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
-(CKRecord *)record;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)CKPropertiesDescription;
@end
