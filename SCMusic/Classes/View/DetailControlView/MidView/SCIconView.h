//
//  SCIconView.h
//  UIViewClickedAction
//
//  Created by KT on 8/22/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCImageView.h"

@interface SCIconView : UIView

@property(nonatomic, strong) SCImageView *imageView;

- (instancetype)initWithFrame:(CGRect)frame;
-(void) setAlbumImage: (UIImage *)image;

@end
