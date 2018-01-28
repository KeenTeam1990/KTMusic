//
//  Const.h
//  SCMusic
//
//  Created by KT on 11/23/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <Foundation/Foundation.h>

// color const
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define ktUIColorFromRGB(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
// size const
#define ScreenWidth    ([UIScreen mainScreen].bounds.size.width)
#define ScreenHeight   ([UIScreen mainScreen].bounds.size.height)

// Music const
#define NEW_SONG_LIST           1
#define HOT_SONG_LIST           2
#define OLD_SONG_LIST           22
#define LOVE_SONG_LIST          23
#define INTERNET_SONG_LIST      25
#define MOVIE_SONG_LIST         24
#define EUROPE_SONG_LIST        21
#define BILLBOARD_MUSIC_LIST    8
#define ROCK_MUSIC_LIST         11
#define JAZZ_MUSIC_LIST         12
#define POP_MUSIC_LIST          16

@interface Const : NSObject

@end
