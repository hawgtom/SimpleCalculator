//
//  ViewController.h
//  SimpleCalculator
//
//  Created by Gowtham on 01/12/15.
//  Copyright © 2015 Gowtham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *calculatorDisplay;
- (IBAction)numberPressed:(UIButton *)sender;
- (IBAction)calculationPressed:(id)sender;
- (IBAction)equalsPressed;

@property (nonatomic) BOOL typingNumber;
@property (nonatomic) int firstNumber;
@property (nonatomic) int secondNumber;
@property (nonatomic, copy) NSString *operation;
@end

