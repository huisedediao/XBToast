//
//  XBToast.h
//  WDB80
//
//  Created by xxb on 2019/5/16.
//  Copyright © 2019 DreamCatcher. All rights reserved.
//

#import "XBAlertViewBase.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^XBToastHiddenBlock)(void);

@interface XBToast : XBAlertViewBase

+ (void)showToast:(NSString *)toast;

+ (void)showToast:(NSString *)toast hiddenBlock:(XBToastHiddenBlock __nullable)hiddenBlock;

+ (void)showToast:(NSString *)toast hiddenTime:(CGFloat)hiddenTime hiddenBlock:(XBToastHiddenBlock __nullable)hiddenBlock;

@end

NS_ASSUME_NONNULL_END
