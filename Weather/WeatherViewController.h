//
//  WeatherViewController.h
//  Weather
//
//  Created by yanglu on 3/1/15.
//  Copyright (c) 2015 _Camellia_. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
- (IBAction)addNewItem:(id)sender;
- (UIBarButtonItem *)editButtonItem;
@end
