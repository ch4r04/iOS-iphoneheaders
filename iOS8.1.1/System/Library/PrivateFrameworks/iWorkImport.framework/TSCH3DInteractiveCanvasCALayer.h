/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DCALayer.h>

@class TSCH3DFBOResource;

@interface TSCH3DInteractiveCanvasCALayer : TSCH3DCALayer {

	TSCH3DFBOResource* mLayerFBOResource;

}
-(id)layerFBOResource;
-(void)willDestroyFramebuffer:(id)arg1 session:(id)arg2 ;
-(void)presentLayerWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(Class)layerDelegateClass;
-(void)dealloc;
@end

