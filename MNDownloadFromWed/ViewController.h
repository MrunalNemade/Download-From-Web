//
//  ViewController.h
//  MNDownloadFromWed
//
//  Created by Mrunalini on 16/10/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//
#define kImageURLString @"https://www.google.co.in/search?q=teletubbies+images&espv=2&biw=1330&bih=627&tbm=isch&imgil=65Cl3jeFIyxb5M%253A%253B6Q0SH4M5ssbL7M%253Bhttp%25253A%25252F%25252Fwww.ew.com%25252Farticle%25252F2015%25252F06%25252F11%25252Fbbcs-teletubbies-reboot-picked-nickelodeon&source=iu&pf=m&fir=65Cl3jeFIyxb5M%253A%252C6Q0SH4M5ssbL7M%252C_&usg=__ClJqoFdIYQfYU5BMMrrzrYX98Hs%3D&ved=0ahUKEwinz9-Jld_PAhXCro8KHTTdD3wQyjcINA&ei=9VwDWOeAOsLdvgS0ur_gBw#imgrc=65Cl3jeFIyxb5M%3A"

#define kImageURLString1 @"https://www.google.co.in/search?q=pikachu+images&espv=2&biw=1330&bih=627&tbm=isch&imgil=E3u481dEZs2bAM%253A%253Bfs3-qxi2uQMg0M%253Bhttp%25253A%25252F%25252Fallthe2048.com%25252Fcommunity-games%25252Fpikachu.html&source=iu&pf=m&fir=E3u481dEZs2bAM%253A%252Cfs3-qxi2uQMg0M%252C_&usg=__5jHEptgN6pc8JR3OYZj8nxofKJQ%3D&ved=0ahUKEwiE49nHld_PAhVCt48KHWSeC0EQyjcIOg&ei=d10DWMTLNcLuvgTkvK6IBA#imgrc=E3u481dEZs2bAM%3A"

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (strong, nonatomic) IBOutlet UIImageView *myImageView1;

@property (strong, nonatomic) IBOutlet UIImageView *myImageView2;

- (IBAction)startAction:(id)sender;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myUIActivityIndicatorView1;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myUIActivityIndicatorView2;

@end

