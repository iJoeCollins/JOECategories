//
//  UIApplication+JOEAdditions.m
//
//  Version 0.2.0
//
//  Created by Joseph Collins on 2/19/14.
//
//  Distributed under The MIT License (MIT)
//  Get the latest version here:
//
//  http://www.github.com/ijoecollins/JOECategories
//
//  Copyright (c) 2014 Joseph Collins.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "UIApplication+JOEAdditions.h"

static NSString *const kJOEFirstRunKey = @"kJOEFirstRunKey";

@implementation UIApplication (JOEAdditions)

#pragma mark - Managing First Launch

- (BOOL)joe_isFirstRun
{
    if ([[NSUserDefaults standardUserDefaults] objectForKey:kJOEFirstRunKey]) {
        return NO;
    }
    
    return YES;
}


- (void)joe_endFirstRun
{
    if ([self joe_isFirstRun]) {
        [[NSUserDefaults standardUserDefaults] setObject:[NSDate date] forKey:kJOEFirstRunKey];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
}


- (void)joe_resetFirstRun
{
    if ([[NSUserDefaults standardUserDefaults] objectForKey:kJOEFirstRunKey]) {
        [[NSUserDefaults standardUserDefaults] removeObjectForKey:kJOEFirstRunKey];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }
}

@end
