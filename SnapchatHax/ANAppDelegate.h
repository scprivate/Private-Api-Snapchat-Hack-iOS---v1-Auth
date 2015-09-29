//
//  ANAppDelegate.h
//  SnapchatHax
//
//  Created by Alex Nichol on 12/17/13.
//  Copyright (c) 2013 Alex Nichol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ANLoginVC.h"
#import "SCSigner.h"

@interface ANAppDelegate : UIResponder <UIApplicationDelegate> {
    UINavigationController * navCont;
}

@property (strong, nonatomic) UIWindow * window;
@property (strong, nonatomic) SCSigner *signer;

@end
