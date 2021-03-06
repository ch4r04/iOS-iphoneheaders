/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPolylineOverlayPainter, NSString, NSMutableSet, NSMutableArray, VKLabelNavRoadGraph, NSMutableDictionary;

@interface VKLabelNavSupport : NSObject {

	char _needsLayout;
	char _drawRoadSigns;
	VKPolylineOverlayPainter* _route;
	NSString* _currentLocationText;
	char _isOnRoute;
	PolylineCoordinate _routeUserOffset;
	unsigned _stepIndex;
	char _checkOnRouteLabelsAlignment;
	char _disableTileParseForOneLayout;
	NSMutableSet* _tiles;
	NSMutableSet* _pendingTiles;
	NSMutableArray* _junctions;
	VKLabelNavRoadGraph* _roadGraph;
	vector<std::__1::shared_ptr<vk::NavLabel>, std::__1::allocator<std::__1::shared_ptr<vk::NavLabel> > >* _activeSigns;
	NSMutableArray* _fadingLabels;
	NSMutableDictionary* _visibleLabelsByName;
	NSMutableArray* _visibleLabels;
	unsigned _countVisibleRoadSigns;
	unsigned _countVisibleOnRouteRoadSigns;
	unsigned _maxVisibleRoadSigns;
	unsigned _minVisibleOnRouteRoadSigns;
	unsigned _maxOnRoadGraphRoadSigns;
	unsigned _minVisibleRoadSigns;
	unsigned _minVisibleProceedToRouteRoadSigns;
	char _preferRightSideLabelPlacement;
	float _minSignOffsetDistance;
	NSMutableSet* _roadNamesInGuidance;
	NSMutableArray* _guidanceStepInfos;
	NSMutableArray* _routeRoadInfos;
	NSString* _currentRoadName;
	int _currentRoadNameIndex;
	NSString* _currentShieldGroup;
	char _checkIfRouteSubrangeChanged;
	char _useRouteSubrange;
	PolylineCoordinate _routeSubrangeStart;
	PolylineCoordinate _routeSubrangeEnd;

}

@property (assign,nonatomic) char drawRoadSigns;                                                          //@synthesize drawRoadSigns=_drawRoadSigns - In the implementation block
@property (nonatomic,retain) VKPolylineOverlayPainter * route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSString * currentLocationText;                                              //@synthesize currentLocationText=_currentLocationText - In the implementation block
@property (nonatomic,retain) NSString * currentRoadName;                                                  //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (nonatomic,retain) NSString * currentShieldGroup;                                               //@synthesize currentShieldGroup=_currentShieldGroup - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeUserOffset;                                          //@synthesize routeUserOffset=_routeUserOffset - In the implementation block
@property (nonatomic,readonly) const vector<std::__1::shared_ptr<vk::NavLabel>* activeSigns;              //@synthesize activeSigns=_activeSigns - In the implementation block
@property (nonatomic,readonly) char needsLayout;                                                          //@synthesize needsLayout=_needsLayout - In the implementation block
-(void)dealloc;
-(id)init;
-(char)needsLayout;
-(void)setStyleManager:(id)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setCurrentLocationText:(NSString *)arg1 ;
-(void)setRoute:(VKPolylineOverlayPainter *)arg1 ;
-(VKPolylineOverlayPainter *)route;
-(void)clearSceneIsMemoryWarning:(char)arg1 ;
-(void)grabTilesFromScene:(id)arg1 ;
-(void)layoutWithNavContext:(NavContext*)arg1 ;
-(const vector<std::__1::shared_ptr<vk::NavLabel>*)activeSigns;
-(unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix<float, 2, 1>*)arg1 currentPosition:(unsigned char)arg2 context:(NavContext*)arg3 ;
-(void)_refreshGuidanceRoadNames;
-(void)_updateRoadsInGuidance;
-(void)_updateCurrentRoadInfo;
-(void)setCurrentRoadName:(NSString *)arg1 ;
-(void)setCurrentShieldGroup:(NSString *)arg1 ;
-(void)_tryAddLabel:(id)arg1 navContext:(NavContext*)arg2 labelCollisionEnabled:(char)arg3 ;
-(void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(char)arg2 navContext:(NavContext*)arg3 ;
-(char)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3 ;
-(char)_updateActiveRouteRange;
-(void)_reloadRouteJunctions;
-(char)_addJunctionsForTile:(id)arg1 ;
-(void)_addLabelsAtJunctions:(id)arg1 withContext:(NavContext*)arg2 maxVisibleLabels:(unsigned)arg3 minOnRouteVisibleLabels:(unsigned)arg4 ;
-(void)_addLabelsForJunctions:(id)arg1 withContext:(NavContext*)arg2 maxVisibleLabels:(unsigned)arg3 minOnRouteVisibleLabels:(unsigned)arg4 useAllJunctions:(char)arg5 placeShieldsFrontToBack:(char)arg6 ;
-(void)_tryAddRoadSignForJunction:(id)arg1 navContext:(NavContext*)arg2 labelCollisionEnabled:(char)arg3 ;
-(void)_tryAddRoadSignForRoad:(id)arg1 isShield:(char)arg2 navContext:(NavContext*)arg3 labelCollisionEnabled:(char)arg4 ;
-(void)_updateRoadStarts;
-(void)_updatePreferredLabelPlacements;
-(void)_initalizeCurrentRoadInfo;
-(void)_updateUniqueOffRouteRoads;
-(NSString *)currentRoadName;
-(char)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(vector<RouteJunctionInfo, std::__1::allocator<RouteJunctionInfo> >*)arg2 lookBackward:(char)arg3 firstOverlap:(int*)arg4 secondOverlap:(int*)arg5 ;
-(char)isNavMode;
-(char)drawRoadSigns;
-(void)setDrawRoadSigns:(char)arg1 ;
-(NSString *)currentLocationText;
-(NSString *)currentShieldGroup;
@end

