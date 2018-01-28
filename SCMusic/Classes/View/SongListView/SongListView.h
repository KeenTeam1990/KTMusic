//
//  SongListView.h
//  SCNews
//
//  Created by KT on 11/9/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMSongInfo.h"
#import "MusicPlayerManager.h"
#import "SongListTopView.h"
#import "SongListTableView.h"
#import "Const.h"
#import "MBProgressHUD.h"

@interface SongListView : UIView

@property (nonatomic, strong) SongListTopView *topView;
@property (nonatomic, strong) SongListTableView *tableView;

-(void) setPlayModeButtonState;

@end
