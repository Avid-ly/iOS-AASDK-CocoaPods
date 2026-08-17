//
//  AccountSDK.h
//  AccountSDK
//
//  Created by steve on 2019/1/24.
//  Copyright © 2019  Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AASDKAppDelegate.h"
#import "AALoginModel.h"
#import "AASDKLoginView.h"
#import "AASDKLoginAPI.h"

@interface AASDK : NSObject

#pragma mark - Init

+ (void)initSDK:(NSString *)productId;

#pragma mark - Parameter

+ (NSString *)getFacebookLoginedToken;

+ (NSString *)getGGID;

@end
