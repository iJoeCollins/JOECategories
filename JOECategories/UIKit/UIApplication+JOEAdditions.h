//
//  UIApplication+JOEAdditions.h
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

#import <UIKit/UIKit.h>

/*! This category provides convenient methods useful for the UIApplication class.
*/

@interface UIApplication (JOEAdditions)


///-------------------------------
/// @name Managing First Launch
///-------------------------------

/*! Checks if it is the very first launch of an application implying a new user.
 
    @return Returns YES if it is indeed the first launch, otherwise NO.
*/

- (BOOL)joe_isFirstRun;

/*! It checks if it is the first run, and then sets a first run key
    and synchronizes the application defaults.
 
    @discussion This method should be called at some point to end the first run.
*/

- (void)joe_endFirstRun;

/*! Checks if the first run key is present and removes it.
 
    @discussion This method can be called by the user to bring back any intro material to view on launch.
*/

- (void)joe_resetFirstRun;

@end
