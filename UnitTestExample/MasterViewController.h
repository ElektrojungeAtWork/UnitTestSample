//
//  MasterViewController.h
//  UnitTestExample
//
//  Created by Benjamin Reimold on 03/11/15.
//  Copyright © 2015 Microsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

