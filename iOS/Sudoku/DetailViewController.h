//
//  DetailViewController.h
//  Sudoku
//
//  Created by Marc DIJOUX on 22/05/2014.
//  Copyright (c) 2014 Marc Dijoux. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
