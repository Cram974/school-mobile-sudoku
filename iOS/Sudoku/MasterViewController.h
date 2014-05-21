//
//  MasterViewController.h
//  Sudoku
//
//  Created by Marc DIJOUX on 22/05/2014.
//  Copyright (c) 2014 Marc Dijoux. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
