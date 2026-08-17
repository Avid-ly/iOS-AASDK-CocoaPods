//
//  AASDKLoginView.h
//  AASDK
//
//  Created by steve on 2025/8/18.
//  Copyright © 2025 Avidly Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AALoginModel.h"

@interface AASDKLoginView : NSObject

#pragma mark - Callback

/// 设置登录回调
/// - Parameters:
///   - succeedCallback: 登录成功回调
///   - errorCallback: 登录失败回调
+ (void)setLoginCallback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

/// 设置登录回调
/// - Parameters:
///   - succeedCallback: 登录成功回调
///   - errorCallback: 登录失败回调
///   - cancelCallback: 退出登录回调
+ (void)setLoginCallback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback cancelCallback:(void (^)(NSString *msg))cancelCallback;

/// 设置绑定账号回调
/// - Parameters:
///   - succeedCallback: 绑定成功回调
///   - errorCallback: 绑定失败回调
+ (void)setBindCallback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

#pragma mark - Orientation

/// 设置支持的屏幕方向
/// - Parameter orientation: 屏幕方向枚举
+ (void)setOrientation:(UIInterfaceOrientationMask)orientation;

#pragma mark - Login

/// 登录
+ (void)login;

/// 登录
/// - Parameter visible: 自动登录时是否展示弹窗，false表示自动登录不展示弹窗
+ (void)loginWithVisible:(BOOL)visible;

/// 登录（登录过程中无弹窗）
+ (void)loginWithUnAware;

#pragma mark - UserCenter

/// 展示用户中心页面
/// - Parameter vc: 视图容器
+ (void)showUserCenter:(UIViewController *)vc;

#pragma mark - Delete Account

/// 在用户中心页面启用删除账号功能
/// - Parameter enable: 是否启用删除账号功能
+ (void)enableDeleteAccount:(BOOL)enable;

/// 设置已删除账号回调
/// - Parameter callback: 删除账号回调
+ (void)registerDeleteAccountCallback:(void (^)(AALoginModel *model))callback;

@end
