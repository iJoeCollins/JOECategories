//
//  NSString+JOEAdditions.h
//
//  Version 0.2.0
//
//  Created by Joseph Collins on 3/7/14.
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

#import <Foundation/Foundation.h>

/*! NSString+JOEAdditions category provides methods to manipulate strings in a number of ways.
*/

@interface NSString (JOEAdditions)


///-------------------------------
/// @name Dividing Strings
///-------------------------------

/*! Creates a new string from the receiver by removing any characters in the given set.
 
    @param set The passed in character set.
    @return    Returns an NSString object.
*/

- (NSString *)joe_stringByRemovingCharactersInSet:(NSCharacterSet *)set;


///-------------------------------
/// @name Replacing Substrings
///-------------------------------

/*! Creates a new string from the receiver by replacing any characters in the given set with the passed in string.
 
    @param set    The given character set.
    @param string The passed in string.
    @return       Returns an NSString object.
*/

- (NSString *)joe_stringByReplacingCharactersInSet:(NSCharacterSet *)set withString:(NSString *)string;

@end
