/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPredicate, BKLibraryManagedObjectContext, NSArray, NSDictionary;

@interface BKBookInfoMatchAggregation : NSObject {

	char _populateMatchesWithFaults;
	NSPredicate* _predicate;
	BKLibraryManagedObjectContext* _libraryManagedObjectContext;
	NSArray* _populatedMatches;
	NSArray* _allMatches;
	NSDictionary* _matchesMap;

}

@property (nonatomic,readonly) BKLibraryManagedObjectContext * libraryManagedObjectContext;              //@synthesize libraryManagedObjectContext=_libraryManagedObjectContext - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                                    //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) char populateMatchesWithFaults;                                             //@synthesize populateMatchesWithFaults=_populateMatchesWithFaults - In the implementation block
@property (nonatomic,retain) NSArray * populatedMatches;                                                 //@synthesize populatedMatches=_populatedMatches - In the implementation block
@property (nonatomic,retain) NSArray * allMatches;                                                       //@synthesize allMatches=_allMatches - In the implementation block
@property (nonatomic,readonly) NSDictionary * matchesMap;                                                //@synthesize matchesMap=_matchesMap - In the implementation block
-(id)initWithMatches:(id)arg1 libraryManagedObjectContext:(id)arg2 ;
-(void)populateMatches;
-(NSArray *)allMatches;
-(BKLibraryManagedObjectContext *)libraryManagedObjectContext;
-(NSArray *)populatedMatches;
-(char)populateMatchesWithFaults;
-(void)populateMatchesWithBookInfos:(id)arg1 ;
-(NSDictionary *)matchesMap;
-(void)setPopulatedMatches:(NSArray *)arg1 ;
-(void)invalidatePopulatedMatches;
-(void)setPopulateMatchesWithFaults:(char)arg1 ;
-(void)setAllMatches:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end
