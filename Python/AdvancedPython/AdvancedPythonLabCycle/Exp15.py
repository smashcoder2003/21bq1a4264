import cv2


def convert_to_grayscale_and_display_info(image_path):
    # Read the image
    img = cv2.imread(image_path)

    if img is None:
        print("Error: Could not read the image.")
        return

    # Convert to grayscale
    gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    # Display image information
    height, width, channels = img.shape
    print("Image Information:")
    print(f"Dimensions: {width} x {height}")
    print(f"Number of Channels: {channels}")

    # Display the grayscale image
    cv2.imshow("Grayscale Image", gray_img)

    # Wait for a key press and close the window
    cv2.waitKey(0)
    cv2.destroyAllWindows()


if __name__ == '__main__':
    # Specify the path to your image
    imagepath = "/Users/bunty/Downloads/3600151.jpg"
    convert_to_grayscale_and_display_info(imagepath)
