struct User {
    username: String,
    email: String,
    mobile_number: String,
    signed_in: bool
}

fn change_ownership (username: String, email: String, mobile_number: String) -> (String, String, String) {
    return (username, email, mobile_number);
}

fn main () {
    let (username, email, mobile_number) = change_ownership(String::from("bhargav"), String::from("bhargavbunty059@gmail.com"), String::from("9012345678"));
    let signed_in = true;

    {
        let user1: User = User {
            username,
            email,
            mobile_number,
            signed_in
        };

        let user2: User = User {
            ..user1
        };

        println!("{} {} {} {}", user1.signed_in, user2.username, user2.email, user2.mobile_number);
    }
    println!("{signed_in}");
}
