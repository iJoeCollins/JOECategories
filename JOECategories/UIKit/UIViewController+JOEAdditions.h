//
//  UIViewController+JOEAdditions.h
//
//  Version 0.2.0
//
//  Created by Joseph Collins on 2/11/14.
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

/*! Category on UIViewController providing numerous methods to make things such as instantiating view controllers from the storyboard easier.
*/

@interface UIViewController (JOEAdditions)


///------------------------------------
/// @name Initializing From Storyboard
///------------------------------------

/*! This method grabs an instance of the initial view controller set in a storyboard.

    @return Returns an instance of the initial view controller.
*/

+ (instancetype)joe_initialViewController;

/*! This method grabs an instance of the controller with the passed in identifier set in a storyboard.
 
    @param identifier The identifier value set in Interface Builder.
    @return           Returns an instance of the controller with the passed in identifier.
*/

+ (instancetype)joe_viewControllerWithIdentifier:(NSString *)identifier;

@end
