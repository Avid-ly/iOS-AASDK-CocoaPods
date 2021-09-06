//
//  AASUnityProxy.h
//  AAS
//
//  Created by steve on 2017/5/18.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AASUnityProxy : NSObject

#pragma mark - Init

extern "C" void setIosCallbackWithClassAndFunction(const char* callbackClassName, const char* callbackFunctionName);

extern "C" void initIosSDKForAASDK(const char* productId);

#pragma mark - Application

//- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
//
//- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

#pragma mark - Login

extern "C" void setLoginCallback();

extern "C" void login();

extern "C" void loginWithVisible(bool visible);

#pragma mark - UserCenter

extern "C" void showUserCenter();

#pragma mark - Parameter

extern "C" const char* getIosFacebookLoginedToken();

extern "C" const char* getGGID();

@end
