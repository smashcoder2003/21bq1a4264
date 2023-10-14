import cv2
import numpy

CAMERA_DEVICE = 0
ALIVE = True
CANNY = 0
BLUR = 1
FEATURES = 2
PREVIEW = 3

features = dict(maxCorners=500, qualityLevel=0.2, minDistance=15, blockSize=7)

# Default image filter
imageFilter = PREVIEW

# Creating a named window
win_name = 'Camera Window'
cv2.namedWindow(win_name, cv2.WINDOW_NORMAL)
source = cv2.VideoCapture(CAMERA_DEVICE)
source.set(cv2.CAP_PROP_FPS, 60)
# Capturing video feed
while ALIVE:
    has_frame, frame = source.read()

    # Flipping the frame horizontally
    frame = cv2.flip(frame, 1)

    if imageFilter == CANNY:
        result = cv2.Canny(frame, 20, 150)

    elif imageFilter == BLUR:
        result = cv2.blur(frame, (13, 13))

    elif imageFilter == PREVIEW:
        result = frame

    else:
        result = frame
        gray_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        corners = cv2.goodFeaturesToTrack(gray_frame, **features)
        if corners is not None:
            for x, y in numpy.float32(corners).reshape(-1, 2):
                cv2.circle(result, (x, y), 10, (0, 255, 0), 1, cv2.LINE_AA)

    # Finally displaying the corresponding frame
    cv2.imshow(win_name, result)

    key = cv2.waitKey(1)

    if key == ord("Q") or key == ord("q") or key == 27:
        ALIVE = False
    elif key == ord("C") or key == ord("c"):
        imageFilter = CANNY
    elif key == ord("B") or key == ord("b"):
        imageFilter = BLUR
    elif key == ord("F") or key == ord("f"):
        imageFilter = FEATURES
    elif key == ord("P") or key == ord("p"):
        imageFilter = PREVIEW

source.release()
cv2.destroyAllWindows()
