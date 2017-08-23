//
//  MapDirectionsViewController.h
//  MapRouteKP
//
//  Created by kushal on 11/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapKit/MapKit.h"
//typedef enum UICGTravelModes {
//	UICGTravelModeDriving, // G_TRAVEL_MODE_DRIVING
//	UICGTravelModeWalking  // G_TRAVEL_MODE_WALKING
//} UICGTravelModes;
@interface MapDirectionsViewController : UIViewController<MKMapViewDelegate ,MKAnnotation ,MKOverlay,UITableViewDataSource,UITableViewDelegate, CLLocationManagerDelegate>
{
    UITableView *tblView;
    NSDictionary *dictRouteInfo;
    BOOL oncezoom;
    NSString*shopaddress;
    CLLocationManager*locationManager;
    CLPlacemark *placemark;
    CLPlacemark *placemark2;
    NSString*vendorLocation;
    

}
-(MKPolyline *)polylineWithEncodedString:(NSString *)encodedString ;
-(void)addAnnotationSrcAndDestination :(CLLocationCoordinate2D )srcCord :(CLLocationCoordinate2D)destCord;
@property (nonatomic, strong) NSArray *locations;
@property (strong, nonatomic) IBOutlet MKMapView *theMapView;
@property (nonatomic, retain) NSString *startPoint;
@property (nonatomic, retain) NSString *endPoint;
@property (nonatomic, retain) NSArray *wayPoints;
@property (nonatomic, strong) CLGeocoder *myGeocoder;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
                  zoomLevel:(NSUInteger)zoomLevel
                   animated:(BOOL)animated;

//@property (nonatomic) UICGTravelModes travelMode;
@property(nonatomic,strong) NSDictionary*addressdict;

@property(nonatomic,strong) NSString*vendorlat;;
@property(nonatomic,strong) NSString*vendorlon;
@property(nonatomic,strong) NSString * sourcename;
@end
