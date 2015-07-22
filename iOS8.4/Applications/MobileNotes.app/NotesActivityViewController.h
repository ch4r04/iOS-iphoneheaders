/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NotesDisplayController;

@interface NotesActivityViewController : UIActivityViewController {

	NotesDisplayController* _displayController;

}

@property (nonatomic,retain) NotesDisplayController * displayController;              //@synthesize displayController=_displayController - In the implementation block
-(void)setDisplayController:(NotesDisplayController *)arg1 ;
-(NotesDisplayController *)displayController;
-(char)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
@end
