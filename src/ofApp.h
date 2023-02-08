#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        void drawPattern();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        ofColor aliceBlue;
        ofColor darkSeaGreen;
        ofColor yellow;
    
        ofColor midWayColor1;
        ofColor midWayColor2;
        ofColor midWayColor3;
    
    // static allows us to initialize a value in the header file
    //const means we do not change the value later
    static const int numOfTilesX=4;
    static const int numOfTilesY=4;

    float tileSizeX=200;
    float tileSizeY=200;
    
    float tileSizeX2=50;
    float tileSizeY2=50;
    
    int numOfXTiles, numOfYTiles;
    int spacingX, spacingY;
    int startingX, startingY;

    //we are going to draw to our tile fbo
};
