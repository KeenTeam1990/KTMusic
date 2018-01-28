//
//  SimpleControlView.h
//  SCNews
//
//  Created by KT on 11/3/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ScreenWidth UIScreen.mainScreen.bounds.size.width
#define ScreenHeight UIScreen.mainScreen.bounds.size.height

@interface SimpleControlView : UIView

@property (nonatomic, strong) UIImageView *albumImage;
@property (nonatomic, strong) UILabel *songName;
@property (nonatomic, strong) UILabel *singerName;
@property (nonatomic, strong) UIButton *playOrPauseBtn;
@property (nonatomic, strong) UIButton *nextBtn;

@end
