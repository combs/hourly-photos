//
//  RootViewController.h
//  Hourly Photos
//
//  Created by Chris Combs on 5/7/15.
//  Copyright (c) 2015 Chris Combs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

