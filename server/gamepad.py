import pygetwindow as gw
import sdlgetwnd
import ctypes
import numpy

class GamePad:
    def __init__(self):
        self.window = gw.getWindowsWithTitle("GamePad View")[0]
        self.wid = self.window._hWnd

    @property
    def w(self):
        return self.window.width
    @property
    def h(self):
        return self.window.height
    @property
    def size(self):
        return self.window.width, self.window.height

    def capture(self):
        addr = sdlgetwnd.get_img(self.wid, *self.size)
        INTP = ctypes.POINTER(ctypes.c_int * self.w * self.h * 3)
        ptr = ctypes.cast(addr, INTP)
        #buffer = numpy.core.multiarray.int_asbuffer(ptr, self.w * self.h * 3 * 8)
        return numpy.ctypeslib.as_array(ptr, shape=(self.w, self.h, 3))
        #return ctypes.cast(, INTP)


g = GamePad()
print(g.wid)
print(g.size)

print(g.capture())

#sdlgetwnd.test2()
#sdl2.Window.
