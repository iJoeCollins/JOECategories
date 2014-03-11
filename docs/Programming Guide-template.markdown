Programming Guide
-----------------

UIKit
-----

### UIApplication+JOEAdditions

#### Checking if it is the first run

Usually inside your application delegate.

```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    
    if ([application joe_isFirstRun]) {
        // Give an introduction
    }

    return YES;
}
```

#### Ending the first run sequence

You should call joe_endFirstRun at some point. This can be at the end of a tutorial, introduction, or setup process.

```
[[UIApplication sharedApplication] joe_endFirstRun];
```


### UIViewController+JOEAdditions

#### Get the initial view controller from a storyboard

This makes the app delegate a ton cleaner by factoring out boilerplate code.
Now you just have to use:

```
ViewController *viewController = [UIViewController joe_initialController];
```

@warning The methods dealing with storyboards use the default names. Either Main, Main_iPhone, or Main_iPad.

#### Initialize a view controller from a storyboard using its identifier

Again this makes things cleaner by removing factoring out the boilerplate code.

```
ViewController *viewController = [UIViewController joe_controllerWithIdentifier:@"ViewController"];
```


Foundation
----------

### NSString+JOEAdditions

#### Dividing Strings

To create a new string from the receiver by removing characters in a set

```
NSString *cleanString = [@"$3.00" joe_stringByRemovingCharactersInSet:[[NSCharacterSet decimalDigitCharacterSet] invertedSet]];
```

This turns $3.00 into its mantissa 300 with exponent -2. Great when working with currency and decimal numbers.

#### Replacing Substrings

To create a new string by replacing any characters in the given set with a passed string.

```
NSCharacterSet *set = [[NSCharacterSet decimalDigitCharacterSet] invertedSet];
NSString *cleanString = [@"$3.00" joe_stringByReplacingCharactersInSet:set withString:@""];
```

The example above is actually doing what joe_stringByRemovingCharactersInSet does internally. Here however you can provide your own replacement string. So if you were to use @"#" then $3.00 would become #3#00
