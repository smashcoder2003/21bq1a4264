import cv2
from matplotlib import pyplot as plt

img = cv2.imread("./images/Coca-Cola-logo-108E6559A3-seeklogo.com.png")

# converting the BGR image to gray
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Using global thresholding to convert background to black
retval, img_thresh = cv2.threshold(img_gray, 127, 255, cv2.THRESH_BINARY)

# Reading dimensions of CocaCola logo
img_h = img.shape[1]
img_w = img.shape[0]
print(img_h); print(img_w)

# Reading background image
background_img = cv2.imread("./images/png-transparent-english-draughts-chess-checkerboard-checker-board-game-symmetry-"
                            "chess-thumbnail.png", cv2.IMREAD_COLOR)
# background_img = cv2.cvtColor(background_img, cv2.COLOR_BGR2RGB)

# Calculating the aspect ratio
aspect_ratio = img_w / background_img.shape[1]
dim = (img_w, int(background_img.shape[0] * aspect_ratio))

# Resizing the image
background_img = cv2.resize(background_img, (300, 300), interpolation=cv2.INTER_AREA)
print(background_img.shape)

inv_img = cv2.bitwise_not(img_thresh)
merged_img = cv2.bitwise_and(background_img, background_img, mask=img_thresh)
plt.imshow(merged_img, cmap='gray')
plt.show()