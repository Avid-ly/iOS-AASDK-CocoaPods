//
//  AASDKLoginAPI.h
//  AASDK
//
//  Created by steve on 2025/8/20.
//  Copyright © 2025 Avidly Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AALoginModel.h"
#import <UIKit/UIKit.h>

@interface AASDKLoginAPI : NSObject

#pragma mark - Login

// 游客登录
+ (void)guestLoginWithCallback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

// AAS账号登录(如账号未注册，则直接注册)
+ (void)aasLoginWithName:(NSString *)userName password:(NSString *)password Callback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

// facebook登录
+ (void)facebookLoginWithVc:(UIViewController *)vc callback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

// Apple登录（Sigin With Apple）
+ (void)appleLoginWithVc:(UIViewController *)vc callback:(void (^)(AALoginModel *model))succeedCallback errorCallback:(void (^)(NSError *error))errorCallback;

#pragma mark - Logout

// 退出登录
+ (void)logout;

#pragma mark - 注销账号

// 注销账号
+ (void)notifySDKDeletedAccountCallback:(void (^)(NSError *error))callback;

@end
