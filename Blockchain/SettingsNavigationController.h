//
//  SettingsNavigationController.h
//  Blockchain
//
//  Created by Kevin Wu on 7/13/15.
//  Copyright (c) 2015 Qkos Services Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BCFadeView.h"

@interface SettingsNavigationController : UINavigationController
@property (nonatomic) UILabel *headerLabel;
@property (nonatomic) UIButton *backButton;
@property (nonatomic) BCFadeView *busyView;

- (void)reload;
- (void)showSecurityCenter;
- (void)showSettings;
@end
