import nimpy

proc test(): string {.exportpy.} =
  return "Hello world!"
proc test2(): string {.exportpy.} =
  echo "Hello world!"
