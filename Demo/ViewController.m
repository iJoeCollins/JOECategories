//
//  ViewController.m
//  JOECategories
//
//  Created by Joseph Collins on 3/7/14.
//  Copyright (c) 2014 Joseph Collins. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
- (IBAction)endFirstRun:(id)sender;
- (IBAction)resetFirstRun:(id)sender;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)endFirstRun:(id)sender {
    // End first run.
    [[UIApplication sharedApplication] joe_endFirstRun];
}

- (IBAction)resetFirstRun:(id)sender {
    // Reset first run.
    [[UIApplication sharedApplication] joe_resetFirstRun];
}

@end
