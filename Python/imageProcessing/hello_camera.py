import cv2
import sys

# Default camera device is 0
camera_device = 0

cv2.namedWindow('Camera Source', cv2.WINDOW_NORMAL)
source = cv2.VideoCapture(camera_device)

while cv2.waitKey(1) != 27:
    has_frame, frame = source.read()

    if not has_frame:
        break

    cv2.imshow('Camera Source', frame)

source.release()
cv2.destroyAllWindows()