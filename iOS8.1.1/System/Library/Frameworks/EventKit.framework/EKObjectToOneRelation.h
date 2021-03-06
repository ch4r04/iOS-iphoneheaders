/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObjectRelation.h>

@class EKObject;

@interface EKObjectToOneRelation : EKObjectRelation {

	EKObject* _relatedObject;
	BOOL _weak;

}
-(void)refresh;
-(void)didCommit;
-(id)initWithObject:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 weak:(BOOL)arg4 ;
-(id)relatedObject;
-(void)setRelatedObject:(id)arg1 ;
-(void)updatePersistentObject;
-(void)_clear;
-(id)committedValue;
-(BOOL)isWeak;
-(void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)_unload;
-(void)_setRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(BOOL)validate:(id*)arg1 ;
-(void)rollback;
@end

