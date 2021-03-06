//
//  HomeMainView.h
//  MVP
//
//  Created by hans on 2018/7/5.
//  Copyright © 2018年 hans. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HomeModel;
@interface HomeMainView : UIView

/**
 配置页面

 @param model model
 */
- (void)configViewWithHomeModel:(HomeModel *)model;


/**
 错误页面
 */
- (void)showErrorView;
@end
