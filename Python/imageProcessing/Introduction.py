import cv2
from matplotlib import pyplot as plt

img = cv2.imread('/Users/bunty/Library/Containers/com.apple.AMPArtworkAgent/Data/Documents/artwork'
                 '/38EF3F7889A5E3BF069BBF9FA28BDCC825BA2462FC48C6E7C961037374463E5A_sk_45_cid_1.jpeg',
                 cv2.IMREAD_COLOR)

# Converting into RGB format
img = img[:, :, ::-1]

# How an Actual image is stored
print(img)

# Displaying the image using pyplot(matplotlib)
print(plt.imshow(img, cmap='gray'))
plt.show()
