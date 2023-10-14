import cv2
from matplotlib import pyplot as plt

img = cv2.imread('/Users/bunty/Library/Containers/com.apple.AMPArtworkAgent/Data/Documents/artwork'
                 '/38EF3F7889A5E3BF069BBF9FA28BDCC825BA2462FC48C6E7C961037374463E5A_sk_45_cid_1.jpeg',
                 cv2.IMREAD_COLOR)
plt.imshow(img)

# Drawing a line using pt1(x1, y1) -> pt2(x2, y2)
line_img = img.copy()
cv2.line(line_img, (75, 120), (125, 120), (0, 255, 255), 1, cv2.LINE_AA)

# Drawing a rectangle
rect_img = img.copy()
cv2.rectangle(rect_img, (120, 75), (75, 120), (0, 255, 255), -1, cv2.LINE_AA)
plt.imshow(rect_img)
plt.show()

# Writing a text onto an image
text_img = img.copy()
cv2.putText(text_img, 'Singer', (122, 75), cv2.FONT_ITALIC, 0.5, (0, 255, 0), 0, cv2.LINE_AA)
text_img = text_img[:, :, ::-1]
plt.imshow(text_img)
plt.show()
