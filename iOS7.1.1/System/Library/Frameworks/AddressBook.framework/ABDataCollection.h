/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary;

@interface ABDataCollection : NSObject {

	void* _addressBook;
	bool _runningUnitTests;
	bool _isLocalSourceOnly;
	bool _isLocalSourceRemaining;
	bool _isMeCardSet;
	bool _isMeCardHomeAddressSet;
	bool _isMeCardWorkAddressSet;
	int _totalContacts;
	int _totalGroups;
	int _totalContactsWithPhotos;
	int _totalContactsWithBirthdays;
	int _totalContactsWithYearOnBirthday;
	int _totalContactsWithAnniversaries;
	NSCountedSet* _sourceTypeScalarKeys;
	NSMutableDictionary* _propertyCountForRecordID;

}

@property (assign,nonatomic) bool runningUnitTests;                                       //@synthesize runningUnitTests=_runningUnitTests - In the implementation block
@property (assign,nonatomic) int totalContacts;                                           //@synthesize totalContacts=_totalContacts - In the implementation block
@property (assign,nonatomic) int totalGroups;                                             //@synthesize totalGroups=_totalGroups - In the implementation block
@property (nonatomic,retain) NSCountedSet * sourceTypeScalarKeys;                         //@synthesize sourceTypeScalarKeys=_sourceTypeScalarKeys - In the implementation block
@property (assign,nonatomic) bool isLocalSourceOnly;                                      //@synthesize isLocalSourceOnly=_isLocalSourceOnly - In the implementation block
@property (assign,nonatomic) bool isLocalSourceRemaining;                                 //@synthesize isLocalSourceRemaining=_isLocalSourceRemaining - In the implementation block
@property (assign,nonatomic) bool isMeCardSet;                                            //@synthesize isMeCardSet=_isMeCardSet - In the implementation block
@property (assign,nonatomic) bool isMeCardHomeAddressSet;                                 //@synthesize isMeCardHomeAddressSet=_isMeCardHomeAddressSet - In the implementation block
@property (assign,nonatomic) bool isMeCardWorkAddressSet;                                 //@synthesize isMeCardWorkAddressSet=_isMeCardWorkAddressSet - In the implementation block
@property (assign,nonatomic) int totalContactsWithPhotos;                                 //@synthesize totalContactsWithPhotos=_totalContactsWithPhotos - In the implementation block
@property (assign,nonatomic) int totalContactsWithBirthdays;                              //@synthesize totalContactsWithBirthdays=_totalContactsWithBirthdays - In the implementation block
@property (assign,nonatomic) int totalContactsWithYearOnBirthday;                         //@synthesize totalContactsWithYearOnBirthday=_totalContactsWithYearOnBirthday - In the implementation block
@property (assign,nonatomic) int totalContactsWithAnniversaries;                          //@synthesize totalContactsWithAnniversaries=_totalContactsWithAnniversaries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyCountForRecordID;              //@synthesize propertyCountForRecordID=_propertyCountForRecordID - In the implementation block
+(void)logContactCreation:(long long)arg1 ;
+(void)logContactUpdate:(long long)arg1 ;
+(void)logPropertyAdded:(int)arg1 forContact:(void*)arg2 ;
+(bool)isEnabled;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)logAllData;
-(void)logTotalContacts;
-(void)logTotalGroups;
-(void)logSources;
-(void)logMeCard;
-(void)logTotalContactsWithPhotos;
-(void)logTotalContactsWithAnniversary;
-(void)logTotalContactsWithBirthday;
-(void)logTotalContactsWithYearOnBirthday;
-(void)logPropertyCountPerContact;
-(void)setTotalContacts:(int)arg1 ;
-(int)totalContacts;
-(void)setTotalGroups:(int)arg1 ;
-(int)totalGroups;
-(void)setIsLocalSourceOnly:(bool)arg1 ;
-(void)setIsLocalSourceRemaining:(bool)arg1 ;
-(id)_sourceTypeAsString:(int)arg1 ;
-(bool)runningUnitTests;
-(id)sourceTypeScalarKeys;
-(void)setSourceTypeScalarKeys:(id)arg1 ;
-(bool)isLocalSourceOnly;
-(bool)isLocalSourceRemaining;
-(void)setIsMeCardSet:(bool)arg1 ;
-(void)setIsMeCardHomeAddressSet:(bool)arg1 ;
-(void)setIsMeCardWorkAddressSet:(bool)arg1 ;
-(bool)isMeCardHomeAddressSet;
-(bool)isMeCardWorkAddressSet;
-(bool)isMeCardSet;
-(void)setTotalContactsWithPhotos:(int)arg1 ;
-(int)totalContactsWithPhotos;
-(void)setTotalContactsWithBirthdays:(int)arg1 ;
-(int)totalContactsWithBirthdays;
-(void)setTotalContactsWithAnniversaries:(int)arg1 ;
-(int)totalContactsWithAnniversaries;
-(void)setTotalContactsWithYearOnBirthday:(int)arg1 ;
-(int)totalContactsWithYearOnBirthday;
-(id)propertyCountForRecordID;
-(void)setPropertyCountForRecordID:(id)arg1 ;
-(void)logTotalContactsWithManualLinks;
-(void)setRunningUnitTests:(bool)arg1 ;
@end

