import nimpy
import sdl2

type Pixels[w, h: static[int]] =
  array[1..w, array[1..h, array[1..3, int]]]

discard sdl2.init(INIT_EVERYTHING)

proc get_img(hwnd, width, height: int): Pixels[int, int] {.exportpy.} =
  var h: ptr int
  h[] = hwnd
  let window = sdl2.createWindowFrom(h)
  let renderer = sdl2.getRenderer(window)

  var pixels: ptr Pixels[width, height]

  discard sdl2.readPixels(renderer, nil, 0, pixels, 0)

  return pixels

