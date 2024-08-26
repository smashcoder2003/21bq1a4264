use std::io;
use rand::Rng;
use std::cmp::Ordering;

fn main () {
    let secret_number = rand::thread_rng().gen_range(1..=100);

    println!("Please input your guess. ");

    let io: io::Stdin = std::io::stdin();

    loop {
        let mut guess = String::new();
        let _ = io.read_line(&mut guess);
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue
        };

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too low!"),
            Ordering::Greater => println!("Too high!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
    }
}
