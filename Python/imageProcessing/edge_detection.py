import cv2
import numpy
img = cv2.imread("/Users/bunty/Documents/GitHub/21bq1a4264/Python/imageProcessing/images/png-transparent-english-"
                 "draughts-chess-checkerboard-checker-board-game-symmetry-chess-thumbnail.png", cv2.IMREAD_GRAYSCALE)

# Resizing the image
img = cv2.resize(img, (300, 300), interpolation=cv2.INTER_AREA)

print(img)
print(img.shape)


synthetic_image = numpy.full((300, 300), 255, dtype='uint8')
synthetic_image[100:200, 100] = 0
synthetic_image[100, 100:200] = 0
print('syn shape: ', synthetic_image.shape)

cv2.namedWindow('wn1', cv2.WINDOW_NORMAL)
cv2.imshow('wn1', synthetic_image)
cv2.waitKey(0)
cv2.destroyAllWindows()

