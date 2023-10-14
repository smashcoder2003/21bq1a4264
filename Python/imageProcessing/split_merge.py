import cv2
from matplotlib import pyplot as plt


img = cv2.imread('/Users/bunty/Library/Containers/com.apple.AMPArtworkAgent/Data/Documents/artwork'
                 '/38EF3F7889A5E3BF069BBF9FA28BDCC825BA2462FC48C6E7C961037374463E5A_sk_45_cid_1.jpeg',
                 cv2.IMREAD_COLOR)

b, g, r = cv2.split(img)

plt.figure(figsize=(20, 5))
plt.subplot(141);plt.imshow(b, cmap='gray');plt.title('Blue Channel')
plt.subplot(142);plt.imshow(g, cmap='gray');plt.title('Green Channel')
plt.subplot(143);plt.imshow(r, cmap='gray');plt.title('Red Channel')
plt.show()

merged_img = cv2.merge((r, g, b))
plt.imshow(merged_img)
print(merged_img.shape)
plt.show()
