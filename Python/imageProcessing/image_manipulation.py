import cv2
from matplotlib import pyplot as plt

img = cv2.imread('/Users/bunty/Library/Containers/com.apple.AMPArtworkAgent/Data/Documents/artwork'
                 '/38EF3F7889A5E3BF069BBF9FA28BDCC825BA2462FC48C6E7C961037374463E5A_sk_45_cid_1.jpeg',
                 cv2.IMREAD_GRAYSCALE)

# Flipping the image using the flip Code
img = cv2.flip(img, -1)

# Resizing the image by using a scaling factor for x, y
img = cv2.resize(img, None, fx=40, fy=40)

# Displaying a gray scale image
plt.imshow(img, cmap='gray')
plt.show()
