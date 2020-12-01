//
//  TGTestSDK.h
//  TGTestSDK
//
//  Created by Civet on 2020/12/1.
//  Copyright © 2020 PersonalONBYL. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for TGTestSDK.
FOUNDATION_EXPORT double TGTestSDKVersionNumber;

//! Project version string for TGTestSDK.
FOUNDATION_EXPORT const unsigned char TGTestSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TGTestSDK/PublicHeader.h>
//公开的供别人使用的头文件，在这里引用一下，"Missing submodule"的警告就会消失
#import <TGTestSDK/TGCat.h>

/*
 手动命令行合并sdk命令
 lipo -create /Users/civet/Library/Developer/Xcode/DerivedData/TGTest-ejpyuovdyhhhmofxliuncefdzzof/Build/Products/Debug-iphonesimulator/TGTestSDK.framework/TGTestSDK /Users/civet/Library/Developer/Xcode/DerivedData/TGTest-ejpyuovdyhhhmofxliuncefdzzof/Build/Products/Debug-iphoneos/TGTestSDK.framework/TGTestSDK -output /Users/civet/Desktop/SDKFrameWork/sdkTGTestSDK
 
 */
