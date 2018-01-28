//
//  MidView.h
//  UIViewClickedAction
//
//  Created by KT on 8/22/17.
//  Copyright © 2017 KT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCIconView.h"
#import "SCLrcTableView.h"


@interface MidView : UIScrollView<UIScrollViewDelegate>

@property (nonatomic, strong) SCIconView* midIconView;
@property (nonatomic, strong) SCLrcTableView *midLrcView;

@end
