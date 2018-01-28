//
//  DownloadTool.h
//  LazyLoadingTableView
//
//  Created by KT on 10/19/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AFNetworking.h"
#import "MJExtension.h"
#import "OMHotSongInfo.h"
#import "OMSongInfo.h"

@interface MusicDownloader : NSObject

@property (nonatomic, assign) BOOL isDataRequestFinish;

@property (nonatomic, strong) OMHotSongInfo *hotSonginfo;

@property (nonatomic, copy) void (^completionHandler)(void);

@property (nonatomic, strong) OMSongInfo *songInfo;

-(void) requestData: (NSString *)urlString ;
- (void)startDownload;
- (void)cancelDownload;

@end
