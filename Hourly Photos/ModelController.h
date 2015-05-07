//
//  ModelController.h
//  Hourly Photos
//
//  Created by Chris Combs on 5/7/15.
//  Copyright (c) 2015 Chris Combs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

