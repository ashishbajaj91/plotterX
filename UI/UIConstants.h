#ifndef __UI_CONSTANTS_H__
#define __UI_CONSTANTS_H__

/*********** USEFUL VALUES ***************/
#define ACTIVE 1
#define NOT_ACTIVE 0
#define YES 1
#define NO 0
#define NO_OF_INDEPENDENT_VARIABLES 3
#define NO_OF_INDEPENDENT_VARIABLE_PARAMETERS 4

#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

/************ VARIABLES ******************/
#define NO_OF_INDEPENDENT_VARIABLES 3
const char VARIABLES_TEXT[] = "xytzl";

/********** UI WINDOW FEATURES ***********/
#define ASPECT_RATIO_16_9 1.77777777778
#define ASPECT_RATIO_4_3 1.33333333333

#define UI_DEFAULT_HEIGHT 1080
#define UI_DEFAULT_WIDTH 1200

/********** UI Utilities Features ********/

/** TITLE WINDOW **/
#define UI_TITLE_WINDOW_HEIGHT_RATIO 0.035
#define TITLE_WINDOW_COLOR_R 150
#define TITLE_WINDOW_COLOR_G 150
#define TITLE_WINDOW_COLOR_B 150

#define INTERFACE_COLOR_R 10
#define INTERFACE_COLOR_G 10
#define INTERFACE_COLOR_B 10

#define TITLE_MSG_COLOR_R 0 
#define TITLE_MSG_COLOR_G 100
#define TITLE_MSG_COLOR_B 200
const char TITLE_COURSE[] = "24780: ENGINEERING COMPUTATION PROJECT: plotterX";
const char TITLE_PROJECT[] = "plotterX";


/** FOOTER WINDOW **/
#define UI_FOOTER_WINDOW_WIDTH_RATIO 0.7
#define UI_FOOTER_WINDOW_HEIGHT_RATIO 0.02

#define FOOTER_WINDOW_COLOR_R 255
#define FOOTER_WINDOW_COLOR_G 30
#define FOOTER_WINDOW_COLOR_B 30


/** INPUT WINDOW **/
#define UI_INPUT_WINDOW_WIDTH_RATIO 0.2
#define UI_INPUT_WINDOW_HEIGHT_RATIO (1-UI_TITLE_WINDOW_HEIGHT_RATIO-UI_FOOTER_WINDOW_HEIGHT_RATIO)

#define INPUT_WINDOW_COLOR_R 0
#define INPUT_WINDOW_COLOR_G 206
#define INPUT_WINDOW_COLOR_B 209

// Equation Input Block
#define INPUT_EQUATION_WINDOW_WIDTH_RATIO 0.9*UI_INPUT_WINDOW_WIDTH_RATIO
#define INPUT_EQUATION_WINDOW_HEIGHT_RATIO 0.333*UI_INPUT_WINDOW_HEIGHT_RATIO
#define INPUT_EQUATION_WINDOW_THICKNESS (1-0.9)*UI_INPUT_WINDOW_WIDTH_RATIO/2

#define EQUATION_WINDOW_COLOR_R 50
#define EQUATION_WINDOW_COLOR_G 50
#define EQUATION_WINDOW_COLOR_B 50

#define EQUATION_FONT_COLOR_R 250
#define EQUATION_FONT_COLOR_G 250
#define EQUATION_FONT_COLOR_B 250

// Variables Input Block
#define INPUT_VARIABLES_WINDOW_WIDTH_RATIO INPUT_EQUATION_WINDOW_WIDTH_RATIO
#define INPUT_VARIABLES_WINDOW_HEIGHT_RATIO 0.5*INPUT_EQUATION_WINDOW_HEIGHT_RATIO
#define INPUT_VARIABLES_WINDOW_THICKNESS INPUT_EQUATION_WINDOW_THICKNESS

const char EQUATION_PROMPT[] = "Enter Your Equation Here> z = ";
#define EQUATION_CHAR_SIZE 6

const char VARIABLES_PROMPT[] = "Parameters for ";
#define GENERAL_TEXT_FONT_COLOR_R 250
#define GENERAL_TEXT_FONT_COLOR_B 250
#define GENERAL_TEXT_FONT_COLOR_G 250

// Evaluate & Plot Icon Block
#define INPUT_PLOT_ICON_WIDTH_RATIO 0.9*UI_INPUT_WINDOW_WIDTH_RATIO
#define INPUT_PLOT_ICON_HEIGHT_RATIO 0.333*INPUT_VARIABLES_WINDOW_HEIGHT_RATIO
#define INPUT_PLOT_ICON_THICKNESS_RATIO (1-0.9)*UI_INPUT_WINDOW_WIDTH_RATIO/2

#define PLOT_ICON_COLOR_R 50
#define PLOT_ICON_COLOR_G 50
#define PLOT_ICON_COLOR_B 250

#define PLOT_ICON_FONT_COLOR_R 20
#define PLOT_ICON_FONT_COLOR_G 250
#define PLOT_ICON_FONT_COLOR_B 250

/** TOOLS WINDOW **/
#define UI_TOOL_WINDOW_WIDTH_RATIO 0.15
#define UI_TOOL_WINDOW_HEIGHT_RATIO (1-UI_TITLE_WINDOW_HEIGHT_RATIO -UI_FOOTER_WINDOW_HEIGHT_RATIO)

#define TOOL_WINDOW_COLOR_R 0
#define TOOL_WINDOW_COLOR_G 206
#define TOOL_WINDOW_COLOR_B 209

/** GRAPHICS WINDOW **/
#define UI_GRAPHICS_WINDOW_WIDTH_RATIO (1-UI_INPUT_WINDOW_WIDTH_RATIO-UI_TOOL_WINDOW_WIDTH_RATIO)
#define UI_GRAPHICS_WINDOW_HEIGHT_RATIO (1-UI_TITLE_WINDOW_HEIGHT_RATIO-UI_FOOTER_WINDOW_HEIGHT_RATIO)

#define GRAPHICS_WINDOW_COLOR_R 255
#define GRAPHICS_WINDOW_COLOR_G 255
#define GRAPHICS_WINDOW_COLOR_B 255

/***************** LINE FEATURES ****************/

#define LINESPACE 16
#define HEADERSPACE 16
#define LEFTSPACE 10
#define RIGHTSPACE 10
#define FOOTERSPACE 10


#endif