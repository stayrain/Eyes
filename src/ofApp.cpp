#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    aliceBlue = ofColor(240,248,255);
    darkSeaGreen = ofColor(143,188,143);
    yellow = ofColor(255,255,0);

    midWayColor1 = aliceBlue.getLerped(darkSeaGreen, 0.5);
    midWayColor2 = aliceBlue.getLerped(yellow, 0.5);
    midWayColor3 = darkSeaGreen.getLerped(yellow, 0.5);
    
    ofBackground(aliceBlue);
}

//--------------------------------------------------------------
void ofApp::update(){
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int x = 0; x < numOfTilesX; x++)
    {
        for (int y = 0; y < numOfTilesY; y++)
        {
            float locX = x * tileSizeX;
            float locY = y * tileSizeY;
       ofPushMatrix();
       ofTranslate(locX,locY);
            if( y%2 == 0 ){
                ofRotate(180);
                ofTranslate(-tileSizeX,-tileSizeY);
            }
            drawPattern();
            ofPopMatrix();
        }
    }
    
    for (int x = 0; x < numOfTilesX; x++)
    {
        for (int y = 0; y < numOfTilesY; y++)
        {
            float locX = x * tileSizeX;
            float locY = y * tileSizeY;
       ofPushMatrix();
       ofTranslate(locX-30,locY);
            if( y%2 == 0 ){
                ofRotate(180);
                ofTranslate(-tileSizeX/3,-tileSizeY);
            }
            ofScale(0.333);
            drawPattern();
            ofPopMatrix();
        }
    }
}



void ofApp::drawPattern(){
    ofPushMatrix();
    ofScale(0.333);
    ofPushMatrix();
    ofPushMatrix();
    
    ofSetColor(midWayColor1);
    ofFill();
    ofSetLineWidth(8/3);
    ofBeginShape();
    ofVertex(159,129);
    ofBezierVertex(159,129,170,70,150,0);
    ofVertex(300,0);
    ofVertex(300,600);
    ofBezierVertex(150,600,150,570,90,507);
    ofBezierVertex(90,507,260,350,159,129);
    ofEndShape();
    
    ofBeginShape();
    ofSetColor(midWayColor3);
    ofFill();
    ofVertex(154, 134);
    ofBezierVertex(159,129,260,350,90,507);
    ofVertex(154+30, 134+30);
    ofEndShape();
    
    ofSetColor(midWayColor3);
    ofFill();
    ofSetLineWidth(3/3);
    ofBeginShape();
    ofVertex(200,0);
    ofBezierVertex(200,0,450,570,200,600);
    ofVertex(200,600);
    ofBezierVertex(200,600,400,570,200,0);
    ofEndShape();
    
    ofSetColor(yellow);
    ofNoFill();
    ofSetLineWidth(3/3);
    ofBeginShape();
    ofVertex(159,129);
    ofBezierVertex(159,129,170,70,150,0);
    ofVertex(200,0);
    ofBezierVertex(200,0,450,570,200,600);
    ofVertex(200,600);
    ofBezierVertex(150,600,150,570,90,507);
    ofBezierVertex(90,507,260,350,159,129);
    ofEndShape();

   // ofTranslate(-20,10);
    ofNoFill();
    ofSetColor(yellow);
    ofSetLineWidth(5/3);
    ofSetCurveResolution(20);
    
    ofSetColor(midWayColor2);
    ofFill();
    ofBeginShape();
    ofVertex(0, 300);
    ofBezierVertex(0, 300, 0, 250, 80, 160);
    ofBezierVertex(80, 160, 300, 0, 140, 420);
    ofBezierVertex(140, 420, 120, 550, 0, 520);
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofNoFill();
    ofBeginShape();
    ofVertex(0, 340);
    ofBezierVertex(0, 320, 0, 300, 60, 220);
    ofBezierVertex(60, 220, 300, 0, 110, 450);
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofFill();
    ofBeginShape();
    ofVertex(130, 170);
    ofBezierVertex(130, 170, 130, 250, 150, 220);
    ofBezierVertex(150, 250, 110, 300, 44,245 );
    ofBezierVertex(44,245, 80, 190, 130, 170 );
    ofEndShape();
    
    ofNoFill();
    ofBeginShape();
    ofVertex(31, 264);
    ofBezierVertex(31, 264, 100, 300, 97, 313);
    ofBezierVertex(97, 313, 120, 350, 90,395 );
    ofBezierVertex(90,395, 80, 400, 0,457 );
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofFill();
    ofBeginShape();
    
    ofVertex(17, 284);
    ofBezierVertex(17, 284, 40, 270, 31, 310);
    ofBezierVertex(31, 310, 32, 320, 75, 337);
    ofBezierVertex(75, 337, 110, 320, 70,405 );
    ofBezierVertex(70,405,50,405,90,395 );
    ofBezierVertex(90,395, 120, 350, 97, 313 );
    ofBezierVertex( 97, 313, 100, 300,31, 264);
    ofEndShape();
    
    ofPopMatrix();
    
    //right part
    ofPushMatrix();
    ofScale(-1,1);
    ofTranslate(-600,0);
    
    ofSetColor(midWayColor1);
    ofFill();
    ofSetLineWidth(8/3);
    ofBeginShape();
    ofVertex(159,129);
    ofBezierVertex(159,129,170,70,150,0);
    ofVertex(300,0);
    ofVertex(300,600);
    ofBezierVertex(150,600,150,570,90,507);
    ofBezierVertex(90,507,260,350,159,129);
    ofEndShape();
    
    ofBeginShape();
    ofSetColor(midWayColor3);
    ofFill();
    ofVertex(154, 134);
    ofBezierVertex(159,129,260,350,90,507);
    ofVertex(154+30, 134+30);
    ofEndShape();
    
    ofSetColor(midWayColor3);
    ofFill();
    ofSetLineWidth(3/3);
    ofBeginShape();
    ofVertex(200,0);
    ofBezierVertex(200,0,450,570,200,600);
    ofVertex(200,600);
    ofBezierVertex(200,600,400,570,200,0);
    ofEndShape();
    
    ofSetColor(yellow);
    ofNoFill();
    ofSetLineWidth(3/3);
    ofBeginShape();
    ofVertex(159,129);
    ofBezierVertex(159,129,170,70,150,0);
    ofVertex(200,0);
    ofBezierVertex(200,0,450,570,200,600);
    ofVertex(200,600);
    ofBezierVertex(150,600,150,570,90,507);
    ofBezierVertex(90,507,260,350,159,129);
    ofEndShape();

    //ofTranslate(-20,10);
    ofNoFill();
    ofSetColor(yellow);
    ofSetLineWidth(5/3);
    ofSetCurveResolution(20);
    
    ofSetColor(midWayColor2);
    ofFill();
    ofBeginShape();
    ofVertex(0, 300);
    ofBezierVertex(0, 300, 0, 250, 80, 160);
    ofBezierVertex(80, 160, 300, 0, 140, 420);
    ofBezierVertex(140, 420, 120, 550, 0, 520);
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofNoFill();
    ofBeginShape();
    ofVertex(0, 340);
    ofBezierVertex(0, 320, 0, 300, 60, 220);
    ofBezierVertex(60, 220, 300, 0, 110, 450);
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofFill();
    ofBeginShape();
    ofVertex(130, 170);
    ofBezierVertex(130, 170, 130, 250, 150, 220);
    ofBezierVertex(150, 250, 110, 300, 44,245 );
    ofBezierVertex(44,245, 80, 190, 130, 170 );
    ofEndShape();
    
    ofNoFill();
    ofBeginShape();
    ofVertex(31, 264);
    ofBezierVertex(31, 264, 100, 300, 97, 313);
    ofBezierVertex(97, 313, 120, 350, 90,395 );
    ofBezierVertex(90,395, 80, 400, 0,457 );
    ofEndShape();
    
    ofSetColor(darkSeaGreen);
    ofFill();
    ofBeginShape();
    
    ofVertex(17, 284);
    ofBezierVertex(17, 284, 40, 270, 31, 310);
    ofBezierVertex(31, 310, 32, 320, 75, 337);
    ofBezierVertex(75, 337, 110, 320, 70,405 );
    ofBezierVertex(70,405,50,405,90,395 );
    ofBezierVertex(90,395, 120, 350, 97, 313 );
    ofBezierVertex( 97, 313, 100, 300,31, 264);
    ofEndShape();
    
    ofPopMatrix();
    ofPopMatrix();
ofPopMatrix();
//Pattern END
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   
   
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
