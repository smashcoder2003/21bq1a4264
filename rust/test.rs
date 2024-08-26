use std::io;

fn main () {
    let io = io::stdin();

    let mut x: String = String::new();

    let _ = io.read_line(&mut x);

    let char_array = x.chars().enumerate();

    for (i, item) in char_array {
        println!("{item}");
    }
}
