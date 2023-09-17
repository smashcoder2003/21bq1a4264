import cv2


def display_image(image_path):
    # Read the image
    img = cv2.imread(image_path)

    if img is None:
        print("Error: Could not read the image.")
        return

    # Display the image
    cv2.imshow("Image", img)

    # Wait for a key press and close the window
    cv2.waitKey(0)
    cv2.destroyAllWindows()


# Specify the path to your image
image_path = "/Users/bunty/Downloads/3600151.jpg"
display_image(image_path)
