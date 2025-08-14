/* colors.h - Centralized color definitions for ROX-Filer dark theme */

#ifndef _COLORS_H
#define _COLORS_H

/* Enable/disable forced dark theme */
#define FORCE_DARK_THEME 1

/* ============================================= */
/* GTK Widget Colors for Dark Theme */
/* ============================================= */

/* Main UI Colors */
#define COLOR_BG_NORMAL      "#303030"  /* Medium gray for toolbar/dialogs */
#define COLOR_BG_HOVER       "#505050"  /* Lighter gray when hovering */
#define COLOR_BG_SELECTED    "#0050a0"  /* Blue for selected items */
#define COLOR_BG_INACTIVE    "#404040"  /* Inactive background */
#define COLOR_BG_ACTIVE      "#505050"  /* Active/pressed background */

#define COLOR_FG_NORMAL      "#ffffff"  /* Pure white text */
#define COLOR_FG_HOVER       "#ffffff"  /* White text on hover */
#define COLOR_FG_SELECTED    "#ffffff"  /* White text when selected */
#define COLOR_FG_INACTIVE    "#999999"  /* Gray for disabled text */

/* List/Entry Colors */
#define COLOR_BASE_NORMAL    "#0a0a0a"  /* Slightly off-black for lists */
#define COLOR_BASE_HOVER     "#333333"  /* List hover background */
#define COLOR_BASE_SELECTED  "#0050a0"  /* List selection */
#define COLOR_TEXT_NORMAL    "#ffffff"  /* White text in entries */
#define COLOR_TEXT_INACTIVE  "#999999"  /* Gray text when disabled */

/* Collection/File List Specific */
#define COLOR_COLLECTION_BG  "#0a0a0a"  /* File list background */
#define COLOR_COLLECTION_FG  "#ffffff"  /* File list text */

/* ============================================= */
/* File Type Colors - Use #defines for C compatibility */
/* ============================================= */

#ifdef FORCE_DARK_THEME
/* Bright colors for dark theme */
#define COLOR_TYPE_ERROR     "#ff6666"  /* Bright red for errors */
#define COLOR_TYPE_UNKNOWN   "#aaaaaa"  /* Light gray for unknown */
#define COLOR_TYPE_DIRECTORY "#00ddff"  /* Bright cyan for directories */
#define COLOR_TYPE_PIPE      "#ffff00"  /* Bright yellow for pipes */
#define COLOR_TYPE_SOCKET    "#ff69b4"  /* Bright pink for sockets */
#define COLOR_TYPE_FILE      "#ffffff"  /* White for regular files */
#define COLOR_TYPE_CHAR_DEV  "#ff9933"  /* Bright orange for char devices */
#define COLOR_TYPE_BLOCK_DEV "#ff3333"  /* Bright red for block devices */
#define COLOR_TYPE_DOOR      "#cc99ff"  /* Bright purple for doors */
#define COLOR_TYPE_EXEC      "#00ff00"  /* Bright green for executables */
#define COLOR_TYPE_APP_DIR   "#3399ff"  /* Bright blue for app dirs */
#else
/* Original colors for light theme */
#define COLOR_TYPE_ERROR     "#ff0000"  /* Red */
#define COLOR_TYPE_UNKNOWN   "#000000"  /* Black */
#define COLOR_TYPE_DIRECTORY "#000080"  /* Dark blue */
#define COLOR_TYPE_PIPE      "#444444"  /* Dark gray */
#define COLOR_TYPE_SOCKET    "#ff00ff"  /* Magenta */
#define COLOR_TYPE_FILE      "#000000"  /* Black */
#define COLOR_TYPE_CHAR_DEV  "#000000"  /* Black */
#define COLOR_TYPE_BLOCK_DEV "#000000"  /* Black */
#define COLOR_TYPE_DOOR      "#ff00ff"  /* Magenta */
#define COLOR_TYPE_EXEC      "#006000"  /* Dark green */
#define COLOR_TYPE_APP_DIR   "#006000"  /* Dark green */
#endif

/* ============================================= */
/* Pinboard (Desktop) Colors */
/* ============================================= */

#ifdef FORCE_DARK_THEME
#define COLOR_PINBOARD_FG      "#ffffff"  /* White text on desktop */
#define COLOR_PINBOARD_BG      "#1a1a1a"  /* Dark gray desktop background */
#define COLOR_PINBOARD_SHADOW  "#000000"  /* Black text shadow */
#else
#define COLOR_PINBOARD_FG      "#fff"     /* Original white */
#define COLOR_PINBOARD_BG      "#888"     /* Original gray */
#define COLOR_PINBOARD_SHADOW  "#000"     /* Original black */
#endif

/* ============================================= */
/* Additional UI Element Colors */
/* ============================================= */

#define COLOR_MENU_BG        "#2a2a2a"  /* Menu background - lighter */
#define COLOR_MENU_FG        "#ffffff"  /* Menu text */
#define COLOR_MENU_HOVER     "#0050a0"  /* Menu item hover */

#define COLOR_BUTTON_BG      "#484848"  /* Button background - lighter gray */
#define COLOR_BUTTON_HOVER   "#585858"  /* Button hover - even lighter */
#define COLOR_BUTTON_ACTIVE  "#383838"  /* Button pressed */

#define COLOR_SCROLLBAR_BG   "#1a1a1a"  /* Scrollbar track - keep dark */
#define COLOR_SCROLLBAR_THUMB "#686868"  /* Scrollbar thumb - light gray */

#define COLOR_TOOLBAR_BG     "#353535"  /* Toolbar background - medium gray */
#define COLOR_DIALOG_BG      "#2a2a2a"  /* Dialog background - dark gray */

/* ============================================= */
/* Helper Macros */
/* ============================================= */

/* Copy color value to option string */
#define SET_OPTION_COLOR(option, color) \
    strcpy((option).value, (color))

#endif /* _COLORS_H */
