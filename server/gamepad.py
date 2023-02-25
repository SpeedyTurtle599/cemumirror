import pygetwindow as gw
import pyautogui as gui
import pygame
import pygame._sdl2 as sdl2
import os
#import sdlgetwnd

class GamePad:
    def __init__(self):
        self.window = gw.getWindowsWithTitle("GamePad View")[0]
        self.wid = self.window._hWnd

    def capture(self):
        return gui.screenshot(region=(w.left, w.top, w.width, w.height))


g = GamePad()
print(g.wid)

#sdlgetwnd.test2()
#sdl2.Window.
