.MODEL SMALL
.CODE
  ; Print "Hello, World!" to the console
  mov ax, 4C00h
  mov dx, 0
  int 21h

  ; Return
  ret
