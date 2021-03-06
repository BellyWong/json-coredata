//
//  MasterViewController.h
//  json-coredata
//
//  Created by Mihai Iancu on 20/2/14.
//  Copyright (c) 2014 Mihai. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
